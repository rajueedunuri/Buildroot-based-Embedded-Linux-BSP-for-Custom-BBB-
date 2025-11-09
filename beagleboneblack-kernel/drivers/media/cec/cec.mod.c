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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4994a4cc, "bus_register" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x8dda7239, "single_open" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xfb03ebf0, "single_release" },
	{ 0xd981555c, "seq_puts" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x6e617324, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0xd4a5646e, "seq_read" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x7acda787, "cancel_delayed_work" },
	{ 0xdd18506f, "wait_for_completion_killable" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5d5832ca, "kthread_stop" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3b12f40c, "put_device" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xc3fbc09c, "debugfs_create_devm_seqfile" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x21d7eab7, "cdev_device_add" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x8d3d4aad, "get_device" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xfe86419a, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x721b1851, "skip_spaces" },
	{ 0x4232d702, "device_initialize" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xc3421d8b, "cdev_device_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x68f79fd7, "complete" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E12519EEA92A8D593D52F9B");
