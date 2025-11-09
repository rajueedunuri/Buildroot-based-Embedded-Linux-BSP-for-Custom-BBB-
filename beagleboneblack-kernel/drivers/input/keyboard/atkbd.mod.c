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
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x7e9d25f9, "serio_unregister_driver" },
	{ 0xfb9f8fc0, "__serio_register_driver" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0xc4c8d2c0, "serio_open" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x39824a8a, "ps2_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d8782a0, "ps2_handle_response" },
	{ 0x5b7fe66, "ps2_handle_ack" },
	{ 0x8b8c46c3, "serio_reconnect" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xe608e9ba, "input_event" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x167c0253, "_dev_err" },
	{ 0x213e4965, "ps2_is_keyboard_id" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4d667090, "input_free_device" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xb81960ca, "snprintf" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb46c75e, "serio_close" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x80bbe863, "ps2_command" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serio,libps2";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");
MODULE_ALIAS("serio:ty02pr22id*ex*");

MODULE_INFO(srcversion, "6E1ED821DD45AB1E44936C6");
