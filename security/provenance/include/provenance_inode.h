/*
 *
 * Author: Thomas Pasquier <tfjmp@seas.harvard.edu>
 *
 * Copyright (C) 2016 Harvard University
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 *
 */
#ifndef CONFIG_SECURITY_PROVENANCE_INODE
#define CONFIG_SECURITY_PROVENANCE_INODE
#include <linux/file.h>
#include <linux/fs.h>
#include <linux/namei.h>
#include <linux/xattr.h>

#include "provenance_secctx.h"  // for record_inode_name

#define is_inode_dir(inode) S_ISDIR(inode->i_mode)
#define is_inode_socket(inode) S_ISSOCK(inode->i_mode)
#define is_inode_file(inode) S_ISREG(inode->i_mode)

static inline void update_inode_type(uint16_t mode, struct provenance *prov)
{
	uint64_t type = ENT_INODE_UNKNOWN;
	unsigned long irqflags;

	if (S_ISBLK(mode))
		type = ENT_INODE_BLOCK;
	else if (S_ISCHR(mode))
		type = ENT_INODE_CHAR;
	else if (S_ISDIR(mode))
		type = ENT_INODE_DIRECTORY;
	else if (S_ISFIFO(mode))
		type = ENT_INODE_FIFO;
	else if (S_ISLNK(mode))
		type = ENT_INODE_LINK;
	else if (S_ISREG(mode))
		type = ENT_INODE_FILE;
	else if (S_ISSOCK(mode))
		type = ENT_INODE_SOCKET;
	spin_lock_irqsave_nested(prov_lock(prov), irqflags, PROVENANCE_LOCK_INODE);
	prov_elt(prov)->inode_info.mode = mode;
	prov_type(prov_elt(prov)) = type;
	spin_unlock_irqrestore(prov_lock(prov), irqflags);
}

static inline void provenance_mark_as_opaque(const char *name)
{
	struct path path;
	struct provenance *prov;

	if (kern_path(name, LOOKUP_FOLLOW, &path)) {
		pr_err("Provenance: Failed file look up (%s).", name);
		return;
	}
	prov = path.dentry->d_inode->i_provenance;
	if (prov)
		set_opaque(prov_elt(prov));
}

static inline int record_inode_name_from_dentry(struct dentry *dentry, struct provenance *prov)
{
	char *buffer;
	char *ptr;
	int rc;

	if (provenance_is_name_recorded(prov_elt(prov)) ||
	    !provenance_is_recorded(prov_elt(prov)))
		return 0;
	// should not sleep
	buffer = kcalloc(PATH_MAX, sizeof(char), GFP_ATOMIC);
	if (!buffer) {
		pr_err("Provenance: could not allocate memory\n");
		return -ENOMEM;
	}
	ptr = dentry_path_raw(dentry, buffer, PATH_MAX);
	rc = record_node_name(prov, ptr);
	kfree(buffer);
	return rc;
}

static inline int record_inode_name(struct inode *inode, struct provenance *prov)
{
	struct dentry *dentry;
	int rc;

	if (provenance_is_name_recorded(prov_elt(prov)) || !provenance_is_recorded(prov_elt(prov)))
		return 0;
	dentry = d_find_alias(inode);
	if (!dentry) // we did not find a dentry, not sure if it should ever happen
		return 0;
	rc = record_inode_name_from_dentry(dentry, prov);
	dput(dentry);
	return rc;
}

static inline void refresh_inode_provenance(struct inode *inode)
{
	struct provenance *prov = inode->i_provenance;

	// will not be recorded
	if (provenance_is_opaque(prov_elt(prov)))
		return;
	record_inode_name(inode, prov);
	prov_elt(prov)->inode_info.ino = inode->i_ino;
	prov_elt(prov)->inode_info.uid = __kuid_val(inode->i_uid);
	prov_elt(prov)->inode_info.gid = __kgid_val(inode->i_gid);
	security_inode_getsecid(inode, &(prov_elt(prov)->inode_info.secid));
}

static inline struct provenance *branch_mmap(union prov_elt *iprov, union prov_elt *cprov)
{
	struct provenance *prov;

	if (unlikely(!iprov || !cprov)) // should not occur
		return NULL;
	if (!provenance_is_tracked(iprov) && !provenance_is_tracked(cprov) && !prov_all)
		return NULL;
	if (!should_record_relation(RL_MMAP, cprov, iprov))
		return NULL;
	prov = alloc_provenance(ENT_INODE_MMAP, GFP_ATOMIC);
	if (!prov)
		return NULL;
	prov_elt(prov)->inode_info.uid = iprov->inode_info.uid;
	prov_elt(prov)->inode_info.gid = iprov->inode_info.gid;
	prov_elt(prov)->inode_info.mode = iprov->inode_info.mode;
	memcpy(prov_elt(prov)->inode_info.sb_uuid, iprov->inode_info.sb_uuid, 16 * sizeof(uint8_t));
	__record_node(iprov);
	__record_node(prov_elt(prov));
	__record_relation(RL_MMAP, iprov, prov_elt(prov), NULL);
	return prov;
}

// TODO check the locking in there, it is probably wrong...
static inline int inode_init_provenance(struct inode *inode, struct dentry *opt_dentry)
{
	struct provenance *prov = inode->i_provenance;
	union prov_elt *buf;
	struct dentry *dentry;
	int rc = 0;

	if (prov->initialised)
		return 0;
	spin_lock_nested(prov_lock(prov), PROVENANCE_LOCK_INODE);
	if (prov->initialised) {
		spin_unlock(prov_lock(prov));
		goto out;
	}       else
		prov->initialised = true;
	spin_unlock(prov_lock(prov));
	update_inode_type(inode->i_mode, prov);
	if (!(inode->i_opflags & IOP_XATTR)) // xattr not supported on this inode
		goto out;
	if (opt_dentry)
		dentry = dget(opt_dentry);
	else
		dentry = d_find_alias(inode);
	if (!dentry)
		goto out;
	buf = kmalloc(sizeof(union prov_elt), GFP_NOFS);
	if (!buf) {
		rc = -ENOMEM;
		prov->initialised = false;
		dput(dentry);
		goto out;
	}
	rc = __vfs_getxattr(dentry, inode, XATTR_NAME_PROVENANCE, buf, sizeof(union prov_elt));
	dput(dentry);
	if (rc < 0) {
		if (rc != -ENODATA && rc != -EOPNOTSUPP) {
			prov->initialised = false;
			goto free_buf;
		} else {
			rc = 0;
			goto free_buf;
		}
	}
	memcpy(prov_elt(prov), buf, sizeof(union prov_elt));
	rc = 0;
free_buf:
	kfree(buf);
out:
	return rc;
}

static inline struct provenance *inode_provenance(struct inode *inode, bool may_sleep)
{
	struct provenance *prov = inode->i_provenance;

	might_sleep_if(may_sleep);
	if (!prov->initialised && may_sleep)
		inode_init_provenance(inode, NULL);
	return prov;
}

static inline struct provenance *dentry_provenance(struct dentry *dentry)
{
	struct inode *inode = d_backing_inode(dentry);
	struct provenance *prov;

	if (!inode)
		return NULL;
	prov = inode->i_provenance;
	inode_init_provenance(inode, dentry);
	return prov;
}

static inline struct provenance *file_provenance(struct file *file)
{
	struct inode *inode = file_inode(file);

	if (!inode)
		return NULL;
	return inode_provenance(inode, true);
}

static inline void save_provenance(struct dentry *dentry)
{
	struct inode *inode;
	struct provenance *prov;
	union prov_elt buf;

	if (!dentry)
		return;
	inode = d_backing_inode(dentry);
	if (!inode)
		return;
	prov = inode->i_provenance;
	if (!prov)
		return;
	spin_lock(prov_lock(prov));
	if (!prov->initialised || prov->saved) { // not initialised or already saved
		spin_unlock(prov_lock(prov));
		return;
	}
	memcpy(&buf, prov_elt(prov), sizeof(union prov_elt));
	prov->saved = true;
	spin_unlock(prov_lock(prov));
	clear_recorded(&buf);
	clear_name_recorded(&buf);
	if (!dentry)
		return;
	__vfs_setxattr_noperm(dentry, XATTR_NAME_PROVENANCE, &buf, sizeof(union prov_elt), 0);
}

static inline int record_write_xattr(uint64_t type,
				     struct provenance *iprov,
				     struct provenance *cprov,
				     const char *name,
				     const void *value,
				     size_t size,
				     int flags,
				     uint8_t allowed)
{
	union long_prov_elt *xattr = alloc_long_provenance(ENT_XATTR);
	int rc = 0;

	if (!xattr)
		goto out;
	memcpy(xattr->xattr_info.name, name, PROV_XATTR_NAME_SIZE - 1);
	xattr->xattr_info.name[PROV_XATTR_NAME_SIZE - 1] = '\0';
	if (value) {
		if (size < PROV_XATTR_VALUE_SIZE) {
			xattr->xattr_info.size = size;
			memcpy(xattr->xattr_info.value, value, size);
		} else{
			xattr->xattr_info.size = PROV_XATTR_VALUE_SIZE;
			memcpy(xattr->xattr_info.value, value, PROV_XATTR_VALUE_SIZE);
		}
		xattr->xattr_info.flags = flags;
	}
	__record_node(prov_elt(cprov));
	__long_record_node(xattr);
	rc = __record_relation(type, prov_elt(cprov), xattr, NULL);
	if (rc < 0)
		goto out;
	__record_node(prov_elt(iprov));
	rc = __update_version(type, iprov);
	if (rc < 0)
		goto out;
	__record_node(prov_elt(iprov));
	rc = __record_relation(type, xattr, prov_elt(iprov), NULL);
	cprov->has_outgoing = true;
out:
	kfree(xattr);
	return rc;
}

static inline int record_read_xattr(uint64_t type,
				    struct provenance *cprov,
				    struct provenance *iprov,
				    const char *name,
				    uint8_t allowed)
{
	union long_prov_elt *xattr = alloc_long_provenance(ENT_XATTR);
	int rc = 0;

	if (!xattr)
		goto out;
	memcpy(xattr->xattr_info.name, name, PROV_XATTR_NAME_SIZE - 1);
	xattr->xattr_info.name[PROV_XATTR_NAME_SIZE - 1] = '\0';
	__record_node(prov_elt(iprov));
	__long_record_node(xattr);
	rc = __record_relation(type, prov_elt(iprov), xattr, NULL);
	if (rc < 0)
		goto out;
	__record_node(prov_elt(cprov));
	rc = __update_version(type, cprov);
	if (rc < 0)
		goto out;
	__record_node(prov_elt(cprov));
	rc = __record_relation(type, xattr, prov_elt(cprov), NULL);
	iprov->has_outgoing = true;
out:
	kfree(xattr);
	return rc;
}
#endif
