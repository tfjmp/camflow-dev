# CamFlow LSM hooks coverage

Automatically generated do not edit!

The following hooks are ignored in this report: ["audit_rule_init", "audit_rule_match", "capable", "capable_noaudit", "ipc_getsecid", "inode_getsecid", "task_getsecid", "secid_to_secctx", "release_secctx", "cred_getsecid", "path_truncate", "path_mknod", "path_mkdir", "path_rmdir", "path_unlink", "path_symlink", "path_link", "path_rename", "path_chmod", "path_chown", "path_chroot", "prepare_creds"]

System Call|Hooks Called|Hooks Implemented|Hooks Not Implemented|Coverage (implemented / total)|
-----------|------------|-----------------|---------------------|------------------------------|
__x64_sys_open|["file_open", "file_alloc", "inode_setattr", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["file_open", "inode_setattr", "task_free", "inode_create", "inode_permission", "inode_free", "sb_free"]|["file_alloc", "inode_need_killpriv", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|7/13|
__x64_sys_openat|["file_open", "file_alloc", "inode_setattr", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["file_open", "inode_setattr", "task_free", "inode_create", "inode_permission", "inode_free", "sb_free"]|["file_alloc", "inode_need_killpriv", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|7/13|
__x64_sys_execve|["bprm_check", "file_open", "sk_free", "bprm_set_creds", "file_permission", "file_alloc", "inode_setattr", "vm_enough_memory_mm", "socket_sock_rcv_skb", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "mmap_addr", "kernel_module_request", "file_send_sigiotask", "mmap_munmap", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["bprm_check", "file_open", "bprm_set_creds", "file_permission", "inode_setattr", "socket_sock_rcv_skb", "task_free", "inode_create", "inode_permission", "inode_free", "mmap_munmap", "sb_free"]|["sk_free", "file_alloc", "vm_enough_memory_mm", "inode_need_killpriv", "mmap_addr", "kernel_module_request", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|12/22|
__x64_sys_execveat|["bprm_check", "file_open", "sk_free", "bprm_set_creds", "file_permission", "file_alloc", "inode_setattr", "vm_enough_memory_mm", "socket_sock_rcv_skb", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "mmap_addr", "kernel_module_request", "file_send_sigiotask", "mmap_munmap", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["bprm_check", "file_open", "bprm_set_creds", "file_permission", "inode_setattr", "socket_sock_rcv_skb", "task_free", "inode_create", "inode_permission", "inode_free", "mmap_munmap", "sb_free"]|["sk_free", "file_alloc", "vm_enough_memory_mm", "inode_need_killpriv", "mmap_addr", "kernel_module_request", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|12/22|
__x64_sys_fork|["key_alloc", "sk_free", "d_instantiate", "sb_copy_data", "vm_enough_memory_mm", "socket_sock_rcv_skb", "task_free", "inode_free", "mmap_addr", "sb_kern_mount", "task_alloc", "inode_alloc", "file_send_sigiotask", "mmap_munmap", "sb_free"]|["socket_sock_rcv_skb", "task_free", "inode_free", "task_alloc", "inode_alloc", "mmap_munmap", "sb_free"]|["key_alloc", "sk_free", "d_instantiate", "sb_copy_data", "vm_enough_memory_mm", "mmap_addr", "sb_kern_mount", "file_send_sigiotask"]|7/15|
__x64_sys_vfork|["key_alloc", "sk_free", "d_instantiate", "sb_copy_data", "vm_enough_memory_mm", "socket_sock_rcv_skb", "task_free", "inode_free", "mmap_addr", "sb_kern_mount", "task_alloc", "inode_alloc", "file_send_sigiotask", "mmap_munmap", "sb_free"]|["socket_sock_rcv_skb", "task_free", "inode_free", "task_alloc", "inode_alloc", "mmap_munmap", "sb_free"]|["key_alloc", "sk_free", "d_instantiate", "sb_copy_data", "vm_enough_memory_mm", "mmap_addr", "sb_kern_mount", "file_send_sigiotask"]|7/15|
__x64_sys_clone|["key_alloc", "sk_free", "d_instantiate", "sb_copy_data", "vm_enough_memory_mm", "socket_sock_rcv_skb", "task_free", "inode_free", "mmap_addr", "sb_kern_mount", "task_alloc", "inode_alloc", "file_send_sigiotask", "mmap_munmap", "sb_free"]|["socket_sock_rcv_skb", "task_free", "inode_free", "task_alloc", "inode_alloc", "mmap_munmap", "sb_free"]|["key_alloc", "sk_free", "d_instantiate", "sb_copy_data", "vm_enough_memory_mm", "mmap_addr", "sb_kern_mount", "file_send_sigiotask"]|7/15|
__x64_sys_unshare|["inode_alloc", "inode_free", "sb_copy_data", "file_send_sigiotask", "sb_kern_mount", "sb_free", "sk_free", "socket_sock_rcv_skb", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "sb_free", "socket_sock_rcv_skb", "task_free"]|["sb_copy_data", "file_send_sigiotask", "sb_kern_mount", "sk_free", "d_instantiate"]|5/10|
__x64_sys_dup3|["inode_free", "task_free", "file_send_sigiotask"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_dup2|["inode_free", "task_free", "file_send_sigiotask"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_dup|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sysfs|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_ioctl|["file_permission", "inode_free", "file_send_sigiotask", "sb_free", "file_ioctl", "task_free"]|["file_permission", "inode_free", "sb_free", "file_ioctl", "task_free"]|["file_send_sigiotask"]|5/6|
__x64_sys_flock|["file_lock", "task_free", "file_send_sigiotask"]|["file_lock", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_mknodat|["inode_create", "inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_mknod", "inode_follow_link", "task_free"]|["inode_create", "inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_mknod", "inode_follow_link"]|5/8|
__x64_sys_mknod|["inode_create", "inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_mknod", "inode_follow_link", "task_free"]|["inode_create", "inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_mknod", "inode_follow_link"]|5/8|
__x64_sys_mkdir|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free", "inode_mkdir"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link", "inode_mkdir"]|4/7|
__x64_sys_mkdirat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free", "inode_mkdir"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link", "inode_mkdir"]|4/7|
__x64_sys_rmdir|["inode_permission", "inode_rmdir", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["inode_rmdir", "file_send_sigiotask", "inode_follow_link"]|4/7|
__x64_sys_unlinkat|["inode_permission", "inode_rmdir", "inode_free", "file_send_sigiotask", "inode_unlink", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_unlink", "sb_free", "task_free"]|["inode_rmdir", "file_send_sigiotask", "inode_follow_link"]|5/8|
__x64_sys_unlink|["inode_permission", "inode_free", "file_send_sigiotask", "inode_unlink", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_unlink", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_symlinkat|["inode_permission", "inode_free", "inode_symlink", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_symlink", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_symlink|["inode_permission", "inode_free", "inode_symlink", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_symlink", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_linkat|["inode_permission", "inode_follow_link", "inode_free", "inode_link", "file_send_sigiotask", "sb_free", "task_free"]|["inode_permission", "inode_free", "inode_link", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask"]|5/7|
__x64_sys_link|["inode_permission", "inode_follow_link", "inode_free", "inode_link", "file_send_sigiotask", "sb_free", "task_free"]|["inode_permission", "inode_free", "inode_link", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask"]|5/7|
__x64_sys_renameat2|["inode_permission", "inode_free", "inode_rename", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_rename", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_renameat|["inode_permission", "inode_free", "inode_rename", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_rename", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_rename|["inode_permission", "inode_free", "inode_rename", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_rename", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_lseek|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_llseek|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_read|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_write|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_truncate|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_ftruncate|["inode_permission", "inode_free", "inode_setattr", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "task_free"]|["file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|4/7|
__x64_sys_fallocate|["file_permission", "inode_free", "file_send_sigiotask", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_creat|["file_open", "file_alloc", "inode_setattr", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["file_open", "inode_setattr", "task_free", "inode_create", "inode_permission", "inode_free", "sb_free"]|["file_alloc", "inode_need_killpriv", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|7/13|
__x64_sys_close|["inode_free", "file_send_sigiotask", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_access|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|4/6|
__x64_sys_faccessat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|4/6|
__x64_sys_chdir|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|4/6|
__x64_sys_fchdir|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask"]|4/5|
__x64_sys_chroot|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|4/6|
__x64_sys_fchmod|["inode_permission", "inode_free", "inode_setattr", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "task_free"]|["file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|4/7|
__x64_sys_fchmodat|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_chmod|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_chown|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_lchown|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_lchown16|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_fchownat|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_fchown|["inode_permission", "inode_free", "inode_setattr", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "task_free"]|["file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|4/7|
__x64_sys_chown16|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_fchown16|["inode_permission", "inode_free", "inode_setattr", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "task_free"]|["file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|4/7|
__x64_sys_pipe|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "file_free", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "file_free", "d_instantiate"]|4/8|
__x64_sys_pipe2|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "file_free", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "file_free", "d_instantiate"]|4/8|
__x64_sys_pread64|["file_permission", "inode_free", "file_send_sigiotask", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_pwrite64|["file_permission", "inode_free", "file_send_sigiotask", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_readv|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_writev|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_preadv|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_preadv2|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_pwritev|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_pwritev2|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_sendfile|["file_permission", "inode_free", "file_send_sigiotask", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_sendfile64|["file_permission", "inode_free", "file_send_sigiotask", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_copy_file_range|["file_permission", "inode_free", "file_send_sigiotask", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_select|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_pselect6|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_poll|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_ppoll|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_umount|["inode_permission", "sb_umount", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["sb_umount", "file_send_sigiotask", "inode_follow_link"]|4/7|
__x64_sys_mount|["inode_permission", "inode_follow_link", "inode_free", "sb_remount", "file_send_sigiotask", "sb_kern_mount", "kernel_module_request", "sb_free", "sb_mount", "sb_copy_data", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["inode_follow_link", "sb_remount", "file_send_sigiotask", "sb_kern_mount", "kernel_module_request", "sb_mount", "sb_copy_data"]|4/11|
__x64_sys_pivot_root|["inode_permission", "inode_free", "file_send_sigiotask", "sb_pivotroot", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "sb_pivotroot", "inode_follow_link"]|4/7|
__x64_sys_delete_module|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_init_module|["file_send_sigiotask", "kernel_module_request", "kernel_read_file", "sk_free", "socket_sock_rcv_skb", "task_free", "key_permission"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "kernel_module_request", "kernel_read_file", "sk_free", "key_permission"]|2/7|
__x64_sys_finit_module|["file_permission", "inode_free", "file_send_sigiotask", "kernel_module_request", "kernel_post_read_file", "kernel_read_file", "sk_free", "socket_sock_rcv_skb", "task_free", "key_permission"]|["file_permission", "inode_free", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "kernel_module_request", "kernel_post_read_file", "kernel_read_file", "sk_free", "key_permission"]|4/10|
__x64_sys_setpriority|["task_setnice", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setnice", "file_send_sigiotask"]|1/3|
__x64_sys_getpriority|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_setregid|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_setgid|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_setreuid|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_setuid|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_setresuid|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_getresuid|[]|[]|[]|0/0|
__x64_sys_setresgid|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_getresgid|[]|[]|[]|0/0|
__x64_sys_setfsuid|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_setfsgid|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_getpid|[]|[]|[]|0/0|
__x64_sys_gettid|[]|[]|[]|0/0|
__x64_sys_getppid|[]|[]|[]|0/0|
__x64_sys_getuid|[]|[]|[]|0/0|
__x64_sys_geteuid|[]|[]|[]|0/0|
__x64_sys_getgid|[]|[]|[]|0/0|
__x64_sys_getegid|[]|[]|[]|0/0|
__x64_sys_times|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_utimes|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_setpgid|["task_setpgid", "file_send_sigiotask", "task_free"]|["task_setpgid", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_getpgid|["task_getpgid"]|[]|["task_getpgid"]|0/1|
__x64_sys_getpgrp|["task_getpgid"]|[]|["task_getpgid"]|0/1|
__x64_sys_getsid|["task_getsid"]|[]|["task_getsid"]|0/1|
__x64_sys_setsid|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_newuname|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_uname|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sethostname|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_gethostname|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_setdomainname|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_setrlimit|["task_setrlimit", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setrlimit", "file_send_sigiotask"]|1/3|
__x64_sys_getrusage|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_umask|[]|[]|[]|0/0|
__x64_sys_prctl|["inode_permission", "file_send_sigiotask", "task_prctl", "sk_free", "socket_sock_rcv_skb", "task_free"]|["inode_permission", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "task_prctl", "sk_free"]|3/6|
__x64_sys_getcpu|[]|[]|[]|0/0|
__x64_sys_sysinfo|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_iopl|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_ioperm|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_mprotect|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free", "file_mprotect"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "file_mprotect"]|2/6|
__x64_sys_pkey_mprotect|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free", "file_mprotect"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "file_mprotect"]|2/6|
__x64_sys_pkey_alloc|["file_send_sigiotask", "task_free"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_pkey_free|["file_send_sigiotask", "task_free"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_capget|["task_free", "capget", "file_send_sigiotask"]|["task_free"]|["capget", "file_send_sigiotask"]|1/3|
__x64_sys_capset|["capset", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["capset", "file_send_sigiotask", "sk_free"]|2/5|
__x64_sys_brk|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_mmap_pgoff|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "sb_free", "vm_enough_memory_mm", "mmap_file", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "mmap_munmap", "sb_free", "mmap_file", "task_free"]|["file_alloc", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "d_instantiate"]|6/11|
__x64_sys_munmap|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_remap_file_pages|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "sb_free", "vm_enough_memory_mm", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "mmap_munmap", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "d_instantiate"]|5/10|
__x64_sys_mmap|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "sb_free", "vm_enough_memory_mm", "mmap_file", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "mmap_munmap", "sb_free", "mmap_file", "task_free"]|["file_alloc", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "d_instantiate"]|6/11|
__x64_sys_msgsnd|["msg_queue_msgrcv", "file_send_sigiotask", "msg_msg_alloc", "ipc_permission", "msg_msg_free", "task_free", "msg_queue_msgsnd"]|["msg_queue_msgrcv", "msg_msg_alloc", "msg_msg_free", "task_free", "msg_queue_msgsnd"]|["file_send_sigiotask", "ipc_permission"]|5/7|
__x64_sys_msgrcv|["msg_queue_msgrcv", "file_send_sigiotask", "msg_msg_free", "task_free", "ipc_permission"]|["msg_queue_msgrcv", "msg_msg_free", "task_free"]|["file_send_sigiotask", "ipc_permission"]|3/5|
__x64_sys_msgget|["file_send_sigiotask", "task_free", "ipc_permission"]|["task_free"]|["file_send_sigiotask", "ipc_permission"]|1/3|
__x64_sys_msgctl|["file_send_sigiotask", "msg_queue_msgctl", "msg_msg_free", "task_free", "ipc_permission"]|["msg_msg_free", "task_free"]|["file_send_sigiotask", "msg_queue_msgctl", "ipc_permission"]|2/5|
__x64_sys_process_vm_readv|["inode_free", "ptrace_access_check", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["ptrace_access_check", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/7|
__x64_sys_process_vm_writev|["inode_free", "ptrace_access_check", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["ptrace_access_check", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/7|
__x64_sys_ptrace|["inode_free", "ptrace_access_check", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "ptrace_traceme", "sk_free", "socket_sock_rcv_skb", "task_free"]|["inode_free", "mmap_munmap", "socket_sock_rcv_skb", "task_free"]|["ptrace_access_check", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "ptrace_traceme", "sk_free"]|4/10|
__x64_sys_shmget|["file_send_sigiotask", "task_free", "ipc_permission"]|["task_free"]|["file_send_sigiotask", "ipc_permission"]|1/3|
__x64_sys_shmctl|["file_send_sigiotask", "task_free", "shm_shmctl", "ipc_permission"]|["task_free"]|["file_send_sigiotask", "shm_shmctl", "ipc_permission"]|1/4|
__x64_sys_shmat|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "shm_shmat", "mmap_addr", "mmap_munmap", "sb_free", "vm_enough_memory_mm", "mmap_file", "d_instantiate", "task_free", "ipc_permission"]|["inode_alloc", "inode_free", "shm_shmat", "mmap_munmap", "sb_free", "mmap_file", "task_free"]|["file_alloc", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "d_instantiate", "ipc_permission"]|7/13|
__x64_sys_shmdt|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_vmsplice|["file_permission", "inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_splice|["file_permission", "inode_free", "file_send_sigiotask", "file_splice_pipe_to_pipe", "task_free"]|["file_permission", "inode_free", "file_splice_pipe_to_pipe", "task_free"]|["file_send_sigiotask"]|4/5|
__x64_sys_tee|["file_splice_pipe_to_pipe", "task_free", "file_send_sigiotask"]|["file_splice_pipe_to_pipe", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_time|[]|[]|[]|0/0|
__x64_sys_stime|["settime64", "task_free", "file_send_sigiotask"]|["task_free"]|["settime64", "file_send_sigiotask"]|1/3|
__x64_sys_gettimeofday|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_settimeofday|["settime64", "task_free", "file_send_sigiotask"]|["task_free"]|["settime64", "file_send_sigiotask"]|1/3|
__x64_sys_adjtimex|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_nanosleep|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_alarm|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_getgroups|[]|[]|[]|0/0|
__x64_sys_getgroups16|[]|[]|[]|0/0|
__x64_sys_setgroups|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_setgroups16|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_acct|["file_open", "file_alloc", "inode_setattr", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["file_open", "inode_setattr", "task_free", "inode_create", "inode_permission", "inode_free", "sb_free"]|["file_alloc", "inode_need_killpriv", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|7/13|
__x64_sys_personality|[]|[]|[]|0/0|
__x64_sys_sigpending|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sigprocmask|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sigaltstack|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_getitimer|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_setitimer|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_timer_create|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_timer_gettime|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_timer_getoverrun|[]|[]|[]|0/0|
__x64_sys_timer_settime|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_timer_delete|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_clock_settime|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_clock_gettime|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_clock_adjtime|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_clock_getres|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_clock_nanosleep|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_nice|["task_setnice", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setnice", "file_send_sigiotask"]|1/3|
__x64_sys_sched_setscheduler|["task_setscheduler", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_sched_setparam|["task_setscheduler", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_sched_setattr|["task_setscheduler", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_sched_getscheduler|["task_getscheduler"]|[]|["task_getscheduler"]|0/1|
__x64_sys_sched_getparam|["task_getscheduler", "task_free", "file_send_sigiotask"]|["task_free"]|["task_getscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_sched_getattr|["task_getscheduler", "task_free", "file_send_sigiotask"]|["task_free"]|["task_getscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_sched_setaffinity|["task_setscheduler", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_sched_getaffinity|["task_getscheduler", "task_free", "file_send_sigiotask"]|["task_free"]|["task_getscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_sched_yield|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sched_get_priority_max|[]|[]|[]|0/0|
__x64_sys_sched_get_priority_min|[]|[]|[]|0/0|
__x64_sys_sched_rr_get_interval|["task_getscheduler", "task_free", "file_send_sigiotask"]|["task_free"]|["task_getscheduler", "file_send_sigiotask"]|1/3|
__x64_sys_reboot|["inode_alloc", "file_send_sigiotask", "task_setscheduler", "task_kill", "sb_statfs", "mmap_addr", "mmap_munmap", "kernel_module_request", "sb_free", "inode_free", "vm_enough_memory_mm", "sk_free", "socket_sock_rcv_skb", "task_free", "file_set_fowner"]|["inode_alloc", "task_kill", "mmap_munmap", "sb_free", "inode_free", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "task_setscheduler", "sb_statfs", "mmap_addr", "kernel_module_request", "vm_enough_memory_mm", "sk_free", "file_set_fowner"]|7/15|
__x64_sys_restart_syscall|[]|[]|[]|0/0|
__x64_sys_kexec_load|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_kexec_file_load|["file_permission", "inode_free", "file_send_sigiotask", "kernel_module_request", "kernel_post_read_file", "kernel_read_file", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask", "kernel_module_request", "kernel_post_read_file", "kernel_read_file"]|3/7|
__x64_sys_exit|["file_send_sigiotask", "inode_free", "task_kill", "sb_statfs", "mmap_addr", "mmap_munmap", "kernel_module_request", "sb_free", "vm_enough_memory_mm", "sk_free", "socket_sock_rcv_skb", "task_free", "file_set_fowner"]|["inode_free", "task_kill", "mmap_munmap", "sb_free", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sb_statfs", "mmap_addr", "kernel_module_request", "vm_enough_memory_mm", "sk_free", "file_set_fowner"]|6/13|
__x64_sys_exit_group|["file_send_sigiotask", "inode_free", "task_kill", "sb_statfs", "mmap_addr", "mmap_munmap", "kernel_module_request", "sb_free", "vm_enough_memory_mm", "sk_free", "socket_sock_rcv_skb", "task_free", "file_set_fowner"]|["inode_free", "task_kill", "mmap_munmap", "sb_free", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sb_statfs", "mmap_addr", "kernel_module_request", "vm_enough_memory_mm", "sk_free", "file_set_fowner"]|6/13|
__x64_sys_wait4|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_waitid|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_waitpid|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_set_tid_address|[]|[]|[]|0/0|
__x64_sys_futex|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|2/5|
__x64_sys_init_module|["file_send_sigiotask", "kernel_module_request", "kernel_read_file", "sk_free", "socket_sock_rcv_skb", "task_free", "key_permission"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "kernel_module_request", "kernel_read_file", "sk_free", "key_permission"]|2/7|
__x64_sys_delete_module|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sigsuspend|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_rt_sigsuspend|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_rt_sigaction|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_rt_sigprocmask|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_rt_sigpending|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_rt_sigtimedwait|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_rt_tgsigqueueinfo|["task_kill", "file_send_sigiotask", "task_free"]|["task_kill", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_kill|["task_kill", "file_send_sigiotask", "task_free"]|["task_kill", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_tgkill|["task_kill", "file_send_sigiotask", "task_free"]|["task_kill", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_tkill|["task_kill", "file_send_sigiotask", "task_free"]|["task_kill", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_rt_sigqueueinfo|["task_kill", "file_send_sigiotask", "task_free"]|["task_kill", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_sgetmask|[]|[]|[]|0/0|
__x64_sys_ssetmask|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_signal|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_pause|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sync|["sb_free", "inode_free", "task_free", "file_send_sigiotask"]|["sb_free", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_fsync|["inode_free", "task_free", "file_send_sigiotask"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_fdatasync|["inode_free", "task_free", "file_send_sigiotask"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_bdflush|["file_send_sigiotask", "inode_free", "task_kill", "sb_statfs", "mmap_addr", "mmap_munmap", "kernel_module_request", "sb_free", "vm_enough_memory_mm", "sk_free", "socket_sock_rcv_skb", "task_free", "file_set_fowner"]|["inode_free", "task_kill", "mmap_munmap", "sb_free", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sb_statfs", "mmap_addr", "kernel_module_request", "vm_enough_memory_mm", "sk_free", "file_set_fowner"]|6/13|
__x64_sys_oldumount|["inode_permission", "sb_umount", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["sb_umount", "file_send_sigiotask", "inode_follow_link"]|4/7|
__x64_sys_stat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "inode_getattr", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_getattr", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_statfs|["inode_permission", "inode_free", "sb_statfs", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["sb_statfs", "file_send_sigiotask", "inode_follow_link"]|4/7|
__x64_sys_statfs64|["inode_permission", "inode_free", "sb_statfs", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["sb_statfs", "file_send_sigiotask", "inode_follow_link"]|4/7|
__x64_sys_fstatfs|["sb_statfs", "task_free", "file_send_sigiotask"]|["task_free"]|["sb_statfs", "file_send_sigiotask"]|1/3|
__x64_sys_fstatfs64|["sb_statfs", "task_free", "file_send_sigiotask"]|["task_free"]|["sb_statfs", "file_send_sigiotask"]|1/3|
__x64_sys_lstat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "inode_getattr", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_getattr", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_fstat|["inode_getattr", "task_free", "file_send_sigiotask"]|["inode_getattr", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_newstat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "inode_getattr", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_getattr", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_newlstat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "inode_getattr", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_getattr", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_newfstat|["inode_getattr", "task_free", "file_send_sigiotask"]|["inode_getattr", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_ustat|["sb_free", "sb_statfs", "task_free", "file_send_sigiotask"]|["sb_free", "task_free"]|["sb_statfs", "file_send_sigiotask"]|2/4|
__x64_sys_setxattr|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_post_setxattr", "sb_free", "inode_setsecurity", "task_free", "inode_setxattr"]|["inode_permission", "inode_free", "inode_post_setxattr", "sb_free", "task_free", "inode_setxattr"]|["inode_follow_link", "file_send_sigiotask", "inode_setsecurity"]|6/9|
__x64_sys_lsetxattr|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_post_setxattr", "sb_free", "inode_setsecurity", "task_free", "inode_setxattr"]|["inode_permission", "inode_free", "inode_post_setxattr", "sb_free", "task_free", "inode_setxattr"]|["inode_follow_link", "file_send_sigiotask", "inode_setsecurity"]|6/9|
__x64_sys_fsetxattr|["inode_permission", "inode_free", "file_send_sigiotask", "inode_post_setxattr", "inode_setsecurity", "task_free", "inode_setxattr"]|["inode_permission", "inode_free", "inode_post_setxattr", "task_free", "inode_setxattr"]|["file_send_sigiotask", "inode_setsecurity"]|5/7|
__x64_sys_getxattr|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "sb_free", "inode_getxattr", "task_free", "inode_getsecurity"]|["inode_permission", "inode_free", "sb_free", "inode_getxattr", "task_free", "inode_getsecurity"]|["inode_follow_link", "file_send_sigiotask"]|6/8|
__x64_sys_lgetxattr|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "sb_free", "inode_getxattr", "task_free", "inode_getsecurity"]|["inode_permission", "inode_free", "sb_free", "inode_getxattr", "task_free", "inode_getsecurity"]|["inode_follow_link", "file_send_sigiotask"]|6/8|
__x64_sys_fgetxattr|["inode_permission", "file_send_sigiotask", "inode_getxattr", "task_free", "inode_getsecurity"]|["inode_permission", "inode_getxattr", "task_free", "inode_getsecurity"]|["file_send_sigiotask"]|4/5|
__x64_sys_listxattr|["inode_permission", "inode_free", "file_send_sigiotask", "inode_listsecurity", "sb_free", "inode_follow_link", "task_free", "inode_listxattr"]|["inode_permission", "inode_free", "inode_listsecurity", "sb_free", "task_free", "inode_listxattr"]|["file_send_sigiotask", "inode_follow_link"]|6/8|
__x64_sys_llistxattr|["inode_permission", "inode_free", "file_send_sigiotask", "inode_listsecurity", "sb_free", "inode_follow_link", "task_free", "inode_listxattr"]|["inode_permission", "inode_free", "inode_listsecurity", "sb_free", "task_free", "inode_listxattr"]|["file_send_sigiotask", "inode_follow_link"]|6/8|
__x64_sys_flistxattr|["inode_listsecurity", "file_send_sigiotask", "task_free", "inode_listxattr"]|["inode_listsecurity", "task_free", "inode_listxattr"]|["file_send_sigiotask"]|3/4|
__x64_sys_removexattr|["inode_permission", "inode_free", "file_send_sigiotask", "inode_removexattr", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_removexattr", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_lremovexattr|["inode_permission", "inode_free", "file_send_sigiotask", "inode_removexattr", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "inode_removexattr", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_fremovexattr|["inode_permission", "inode_free", "inode_removexattr", "file_send_sigiotask", "task_free"]|["inode_permission", "inode_free", "inode_removexattr", "task_free"]|["file_send_sigiotask"]|4/5|
__x64_sys_brk|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_mremap|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_msync|["inode_free", "task_free", "file_send_sigiotask"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_fadvise64|["file_send_sigiotask", "task_free"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_fadvise64_64|["file_send_sigiotask", "task_free"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_mlock|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|2/5|
__x64_sys_munlock|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|2/5|
__x64_sys_mlockall|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|2/5|
__x64_sys_munlockall|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|2/5|
__x64_sys_madvise|["file_permission", "inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_mincore|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_pivot_root|["inode_permission", "inode_free", "file_send_sigiotask", "sb_pivotroot", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "sb_pivotroot", "inode_follow_link"]|4/7|
__x64_sys_fcntl|["file_lock", "inode_free", "file_send_sigiotask", "file_fcntl", "task_free", "file_set_fowner"]|["file_lock", "inode_free", "task_free"]|["file_send_sigiotask", "file_fcntl", "file_set_fowner"]|3/6|
__x64_sys_io_setup|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "sb_free", "vm_enough_memory_mm", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "mmap_munmap", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "d_instantiate"]|5/10|
__x64_sys_io_destroy|["inode_free", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "vm_enough_memory_mm", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|3/6|
__x64_sys_io_getevents|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_io_submit|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_io_cancel|[]|[]|[]|0/0|
__x64_sys_readlink|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_readlink", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_readlink", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_setregid16|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_setgid16|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_setreuid16|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_setuid16|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_setresuid16|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_getresuid16|[]|[]|[]|0/0|
__x64_sys_setresgid16|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_getresgid16|[]|[]|[]|0/0|
__x64_sys_setfsuid16|["task_fix_setuid", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["task_fix_setuid", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|3/5|
__x64_sys_setfsgid16|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_getgroups16|[]|[]|[]|0/0|
__x64_sys_setgroups16|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_getuid16|[]|[]|[]|0/0|
__x64_sys_geteuid16|[]|[]|[]|0/0|
__x64_sys_getgid16|[]|[]|[]|0/0|
__x64_sys_getegid16|[]|[]|[]|0/0|
__x64_sys_utime|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_readahead|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_getcwd|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_lookup_dcookie|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_quotactl|["inode_alloc", "inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "sb_free", "quotactl", "task_free"]|["inode_alloc", "inode_permission", "inode_free", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "quotactl"]|5/8|
__x64_sys_getdents|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_getdents64|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_poll|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_epoll_create|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_epoll_create1|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_epoll_ctl|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_epoll_wait|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_epoll_pwait|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_olduname|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_getrlimit|["task_setrlimit", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setrlimit", "file_send_sigiotask"]|1/3|
__x64_sys_old_getrlimit|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_prlimit64|["task_prlimit", "task_setrlimit", "file_send_sigiotask", "task_free"]|["task_free"]|["task_prlimit", "task_setrlimit", "file_send_sigiotask"]|1/4|
__x64_sys_semget|["file_send_sigiotask", "task_free", "ipc_permission"]|["task_free"]|["file_send_sigiotask", "ipc_permission"]|1/3|
__x64_sys_semop|["file_send_sigiotask", "sem_semop", "task_free", "ipc_permission"]|["task_free"]|["file_send_sigiotask", "sem_semop", "ipc_permission"]|1/4|
__x64_sys_semctl|["file_send_sigiotask", "sem_semctl", "task_free", "ipc_permission"]|["task_free"]|["file_send_sigiotask", "sem_semctl", "ipc_permission"]|1/4|
__x64_sys_semtimedop|["file_send_sigiotask", "sem_semop", "task_free", "ipc_permission"]|["task_free"]|["file_send_sigiotask", "sem_semop", "ipc_permission"]|1/4|
__x64_sys_mq_open|["inode_create", "inode_permission", "inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "file_free", "file_open", "task_free"]|["inode_create", "inode_permission", "inode_free", "sb_free", "file_open", "task_free"]|["file_alloc", "file_send_sigiotask", "file_free"]|6/9|
__x64_sys_mq_unlink|["inode_permission", "inode_free", "file_send_sigiotask", "inode_unlink", "task_free"]|["inode_permission", "inode_free", "inode_unlink", "task_free"]|["file_send_sigiotask"]|4/5|
__x64_sys_mq_timedsend|["mq_timedsend", "task_kill", "file_send_sigiotask", "msg_msg_alloc", "msg_msg_free", "sk_free", "task_free"]|["mq_timedsend", "task_kill", "msg_msg_alloc", "msg_msg_free", "task_free"]|["file_send_sigiotask", "sk_free"]|5/7|
__x64_sys_mq_timedreceive|["file_send_sigiotask", "mq_timedreceive", "msg_msg_free", "task_free"]|["mq_timedreceive", "msg_msg_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_mq_notify|["sk_free", "task_free", "file_send_sigiotask"]|["task_free"]|["sk_free", "file_send_sigiotask"]|1/3|
__x64_sys_mq_getsetattr|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_swapon|["file_open", "sk_free", "file_alloc", "inode_setattr", "socket_sock_rcv_skb", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "inode_alloc", "file_send_sigiotask", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["file_open", "inode_setattr", "socket_sock_rcv_skb", "task_free", "inode_create", "inode_permission", "inode_free", "inode_alloc", "sb_free"]|["sk_free", "file_alloc", "inode_need_killpriv", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|9/16|
__x64_sys_swapoff|["file_open", "file_alloc", "inode_setattr", "vm_enough_memory_mm", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "mmap_addr", "file_send_sigiotask", "mmap_munmap", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["file_open", "inode_setattr", "task_free", "inode_create", "inode_permission", "inode_free", "mmap_munmap", "sb_free"]|["file_alloc", "vm_enough_memory_mm", "inode_need_killpriv", "mmap_addr", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|8/16|
__x64_sys_sysctl|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sysinfo|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sysfs|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_syslog|["file_send_sigiotask", "syslog", "task_free"]|["task_free"]|["file_send_sigiotask", "syslog"]|1/3|
__x64_sys_add_key|["file_send_sigiotask", "key_alloc", "sk_free", "socket_sock_rcv_skb", "task_free", "key_permission"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "key_alloc", "sk_free", "key_permission"]|2/6|
__x64_sys_request_key|["file_send_sigiotask", "key_alloc", "sk_free", "socket_sock_rcv_skb", "task_free", "key_permission"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "key_alloc", "sk_free", "key_permission"]|2/6|
__x64_sys_keyctl|["file_send_sigiotask", "key_getsecurity", "cred_alloc_blank", "kernel_module_request", "key_alloc", "sk_free", "socket_sock_rcv_skb", "task_free", "key_permission"]|["cred_alloc_blank", "socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "key_getsecurity", "kernel_module_request", "key_alloc", "sk_free", "key_permission"]|3/9|
__x64_sys_ioprio_set|["task_setioprio", "file_send_sigiotask", "task_free"]|["task_free"]|["task_setioprio", "file_send_sigiotask"]|1/3|
__x64_sys_ioprio_get|["task_getioprio", "file_send_sigiotask", "task_free"]|["task_free"]|["task_getioprio", "file_send_sigiotask"]|1/3|
__x64_sys_set_mempolicy|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_migrate_pages|["inode_free", "vm_enough_memory_mm", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "task_movememory", "ptrace_access_check", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["vm_enough_memory_mm", "file_send_sigiotask", "mmap_addr", "task_movememory", "ptrace_access_check"]|3/8|
__x64_sys_move_pages|["inode_free", "vm_enough_memory_mm", "file_send_sigiotask", "mmap_addr", "mmap_munmap", "task_movememory", "ptrace_access_check", "task_free"]|["inode_free", "mmap_munmap", "task_free"]|["vm_enough_memory_mm", "file_send_sigiotask", "mmap_addr", "task_movememory", "ptrace_access_check"]|3/8|
__x64_sys_mbind|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|2/5|
__x64_sys_get_mempolicy|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|1/4|
__x64_sys_inotify_init|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_inotify_init1|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_inotify_add_watch|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|4/6|
__x64_sys_inotify_rm_watch|["inode_free", "task_free", "file_send_sigiotask"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_futimesat|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_newfstatat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "inode_getattr", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_getattr", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_readlinkat|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_readlink", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_readlink", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_utimensat|["inode_permission", "inode_follow_link", "inode_free", "file_send_sigiotask", "inode_setattr", "sb_free", "inode_killpriv", "inode_need_killpriv", "task_free"]|["inode_permission", "inode_free", "inode_setattr", "sb_free", "task_free"]|["inode_follow_link", "file_send_sigiotask", "inode_killpriv", "inode_need_killpriv"]|5/9|
__x64_sys_sync_file_range|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_sync_file_range2|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_get_robust_list|["file_send_sigiotask", "ptrace_access_check", "task_free"]|["task_free"]|["file_send_sigiotask", "ptrace_access_check"]|1/3|
__x64_sys_set_robust_list|[]|[]|[]|0/0|
__x64_sys_signalfd|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_signalfd4|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_timerfd_create|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_timerfd_settime|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_timerfd_gettime|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_eventfd|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_eventfd2|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_memfd_create|["inode_alloc", "inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "vm_enough_memory_mm", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "vm_enough_memory_mm", "d_instantiate"]|4/8|
__x64_sys_userfaultfd|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_old_readdir|["file_permission", "inode_free", "task_free", "file_send_sigiotask"]|["file_permission", "inode_free", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_fanotify_init|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|3/6|
__x64_sys_fanotify_mark|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|4/6|
__x64_sys_syncfs|["inode_free", "task_free", "file_send_sigiotask"]|["inode_free", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_perf_event_open|["inode_free", "file_alloc", "file_send_sigiotask", "sb_free", "ptrace_access_check", "d_instantiate", "task_free"]|["inode_free", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "ptrace_access_check", "d_instantiate"]|3/7|
__x64_sys_name_to_handle_at|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "task_free"]|["inode_permission", "inode_free", "sb_free", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|4/6|
__x64_sys_open_by_handle_at|["file_open", "file_permission", "file_alloc", "inode_setattr", "inode_need_killpriv", "task_free", "inode_create", "inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_killpriv", "file_free", "inode_follow_link"]|["file_open", "file_permission", "inode_setattr", "task_free", "inode_create", "inode_permission", "inode_free", "sb_free"]|["file_alloc", "inode_need_killpriv", "file_send_sigiotask", "inode_killpriv", "file_free", "inode_follow_link"]|8/14|
__x64_sys_setns|["inode_alloc", "inode_free", "sb_copy_data", "file_send_sigiotask", "sb_kern_mount", "sb_free", "sk_free", "socket_sock_rcv_skb", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "sb_free", "socket_sock_rcv_skb", "task_free"]|["sb_copy_data", "file_send_sigiotask", "sb_kern_mount", "sk_free", "d_instantiate"]|5/10|
__x64_sys_seccomp|["file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["file_send_sigiotask", "sk_free"]|2/4|
__x64_sys_getrandom|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_bpf|["sk_free", "bpf_map", "d_instantiate", "file_alloc", "sb_free", "bpf_prog_alloc", "socket_sock_rcv_skb", "task_free", "inode_create", "inode_permission", "inode_free", "bpf_map_free", "inode_alloc", "inode_follow_link", "bpf_map_alloc", "file_send_sigiotask", "bpf_prog", "bpf", "bpf_prog_free"]|["sb_free", "socket_sock_rcv_skb", "task_free", "inode_create", "inode_permission", "inode_free", "inode_alloc"]|["sk_free", "bpf_map", "d_instantiate", "file_alloc", "bpf_prog_alloc", "bpf_map_free", "inode_follow_link", "bpf_map_alloc", "file_send_sigiotask", "bpf_prog", "bpf", "bpf_prog_free"]|7/19|
__x64_sys_membarrier|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_mlock2|["inode_free", "file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm", "task_free"]|["inode_free", "task_free"]|["file_send_sigiotask", "mmap_addr", "vm_enough_memory_mm"]|2/5|
__x64_sys_statx|["inode_permission", "inode_free", "file_send_sigiotask", "sb_free", "inode_follow_link", "inode_getattr", "task_free"]|["inode_permission", "inode_free", "sb_free", "inode_getattr", "task_free"]|["file_send_sigiotask", "inode_follow_link"]|5/7|
__x64_sys_shutdown|["file_send_sigiotask", "task_free", "socket_shutdown"]|["task_free"]|["file_send_sigiotask", "socket_shutdown"]|1/3|
__x64_sys_setsockopt|["socket_setsockopt", "file_send_sigiotask", "sk_free", "socket_sock_rcv_skb", "task_free"]|["socket_sock_rcv_skb", "task_free"]|["socket_setsockopt", "file_send_sigiotask", "sk_free"]|2/5|
__x64_sys_getsockopt|["socket_getsockopt", "socket_getpeersec_stream", "task_free", "file_send_sigiotask"]|["task_free"]|["socket_getsockopt", "socket_getpeersec_stream", "file_send_sigiotask"]|1/4|
__x64_sys_bind|["socket_bind", "task_free", "file_send_sigiotask"]|["socket_bind", "task_free"]|["file_send_sigiotask"]|2/3|
__x64_sys_connect|["task_free", "socket_connect", "file_send_sigiotask"]|["task_free", "socket_connect"]|["file_send_sigiotask"]|2/3|
__x64_sys_accept|["inode_alloc", "inode_free", "file_alloc", "socket_accept", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "socket_accept", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|5/8|
__x64_sys_accept4|["inode_alloc", "inode_free", "file_alloc", "socket_accept", "file_send_sigiotask", "sb_free", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "socket_accept", "sb_free", "task_free"]|["file_alloc", "file_send_sigiotask", "d_instantiate"]|5/8|
__x64_sys_getsockname|["file_send_sigiotask", "socket_getsockname", "task_free"]|["task_free"]|["file_send_sigiotask", "socket_getsockname"]|1/3|
__x64_sys_getpeername|["socket_getpeername", "task_free", "file_send_sigiotask"]|["task_free"]|["socket_getpeername", "file_send_sigiotask"]|1/3|
__x64_sys_send|["socket_sendmsg_always", "file_send_sigiotask", "socket_sendmsg", "task_free"]|["socket_sendmsg_always", "socket_sendmsg", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_sendto|["socket_sendmsg_always", "file_send_sigiotask", "socket_sendmsg", "task_free"]|["socket_sendmsg_always", "socket_sendmsg", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_sendmsg|["socket_sendmsg_always", "file_send_sigiotask", "socket_sendmsg", "task_free"]|["socket_sendmsg_always", "socket_sendmsg", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_sendmmsg|["socket_sendmsg_always", "file_send_sigiotask", "socket_sendmsg", "task_free"]|["socket_sendmsg_always", "socket_sendmsg", "task_free"]|["file_send_sigiotask"]|3/4|
__x64_sys_recv|["socket_recvmsg", "task_free", "socket_recvmsg_always", "file_send_sigiotask"]|["socket_recvmsg", "task_free", "socket_recvmsg_always"]|["file_send_sigiotask"]|3/4|
__x64_sys_recvfrom|["socket_recvmsg", "task_free", "socket_recvmsg_always", "file_send_sigiotask"]|["socket_recvmsg", "task_free", "socket_recvmsg_always"]|["file_send_sigiotask"]|3/4|
__x64_sys_recvmsg|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_recvmmsg|["task_free", "file_send_sigiotask"]|["task_free"]|["file_send_sigiotask"]|1/2|
__x64_sys_socket|["inode_alloc", "socket_create", "inode_free", "file_alloc", "kernel_module_request", "file_send_sigiotask", "socket_post_create", "sb_free", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "socket_post_create", "sb_free", "task_free"]|["socket_create", "file_alloc", "kernel_module_request", "file_send_sigiotask", "d_instantiate"]|5/10|
__x64_sys_socketpair|["inode_alloc", "socket_create", "inode_free", "file_alloc", "kernel_module_request", "file_send_sigiotask", "socket_post_create", "sb_free", "d_instantiate", "task_free"]|["inode_alloc", "inode_free", "socket_post_create", "sb_free", "task_free"]|["socket_create", "file_alloc", "kernel_module_request", "file_send_sigiotask", "d_instantiate"]|5/10|
__x64_sys_socketcall|["socket_setsockopt", "socket_connect", "sk_free", "d_instantiate", "socket_sendmsg", "socket_getsockopt", "socket_recvmsg", "socket_getsockname", "file_alloc", "socket_accept", "socket_sock_rcv_skb", "task_free", "socket_listen", "inode_free", "socket_recvmsg_always", "socket_getpeername", "socket_sendmsg_always", "kernel_module_request", "socket_getpeersec_stream", "inode_alloc", "socket_create", "file_send_sigiotask", "socket_shutdown", "socket_post_create", "sb_free", "socket_bind"]|["socket_connect", "socket_sendmsg", "socket_recvmsg", "socket_accept", "socket_sock_rcv_skb", "task_free", "socket_listen", "inode_free", "socket_recvmsg_always", "socket_sendmsg_always", "inode_alloc", "socket_post_create", "sb_free", "socket_bind"]|["socket_setsockopt", "sk_free", "d_instantiate", "socket_getsockopt", "socket_getsockname", "file_alloc", "socket_getpeername", "kernel_module_request", "socket_getpeersec_stream", "socket_create", "file_send_sigiotask", "socket_shutdown"]|14/26|
__x64_sys_listen|["task_free", "socket_listen", "file_send_sigiotask"]|["task_free", "socket_listen"]|["file_send_sigiotask"]|2/3|