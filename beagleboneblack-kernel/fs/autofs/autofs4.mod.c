#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9e2dc0be, "module_layout" },
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x12cc3893, "drop_nlink" },
	{ 0x95c0278e, "put_pid" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x47ef3bc6, "lock_set_class" },
	{ 0x1bbe925a, "get_task_pid" },
	{ 0x97255bdf, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x68d81c39, "path_is_mountpoint" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xcbeb0b63, "pid_vnr" },
	{ 0xb70789e, "__might_fault" },
	{ 0x5edd87e2, "lockref_get" },
	{ 0x59a82d71, "dput" },
	{ 0x6e617324, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x3f99d08e, "inc_nlink" },
	{ 0xa1b61f76, "dentry_open" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d35be06, "rename_lock" },
	{ 0xbb2625b4, "d_add" },
	{ 0xbb71b10a, "generic_read_dir" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x914eb160, "mount_nodev" },
	{ 0x22e59601, "path_get" },
	{ 0x201cd1b, "may_umount" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x55ffc7da, "complete_all" },
	{ 0x302dea3b, "lock_release" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0x352859e5, "dcache_dir_lseek" },
	{ 0xa28e506e, "misc_register" },
	{ 0x61393095, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0x8529f257, "kill_litter_super" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd2dbe041, "_raw_spin_trylock" },
	{ 0x71c90087, "memcmp" },
	{ 0xb096bfc1, "_raw_spin_lock_nested" },
	{ 0x328a05f1, "strncpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1578417f, "set_nlink" },
	{ 0xd58da5ab, "__close_fd" },
	{ 0x153311da, "noop_llseek" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xdd27fa87, "memchr" },
	{ 0x4e3567f7, "match_int" },
	{ 0x58d65c6d, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5a8f88a4, "__task_pid_nr_ns" },
	{ 0x6ea28721, "path_has_submounts" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7171121c, "overflowgid" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x80e7cf01, "d_drop" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x5dc1171a, "may_umount_tree" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x800fb92b, "full_name_hash" },
	{ 0x80cf9a6d, "path_put" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x7ae315c5, "simple_empty" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xede11a1c, "dcache_readdir" },
	{ 0xfbf1e258, "register_filesystem" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xa14cbfee, "d_lookup" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x97386b2f, "find_get_pid" },
	{ 0x6d85cafe, "dcache_dir_open" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xd911ba15, "dcache_dir_close" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x58e7a65b, "follow_up" },
	{ 0x9d669763, "memcpy" },
	{ 0x479fe313, "current_time" },
	{ 0xbe98d3aa, "fd_install" },
	{ 0x2d4380fd, "fget" },
	{ 0xb0073de9, "d_make_root" },
	{ 0xf015613c, "__kernel_write" },
	{ 0x65bef9b7, "simple_statfs" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xd3aba32b, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x58974051, "new_inode" },
	{ 0x1fb993b0, "follow_down_one" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x531d3783, "clear_inode" },
	{ 0x6b6948bc, "misc_deregister" },
	{ 0xb504751d, "clear_nlink" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb8f812ef, "kern_path_mountpoint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CE2EB1EFC33B0033FD29FA5");
