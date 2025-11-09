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
	{ 0xae4f420b, "no_llseek" },
	{ 0xcac33857, "input_unregister_handler" },
	{ 0x39d9b327, "input_register_handler" },
	{ 0x80df7f97, "arm_clear_user" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xe65d310e, "input_ff_upload" },
	{ 0x38a9c2c7, "input_ff_effect_from_user" },
	{ 0x24236a27, "input_grab_device" },
	{ 0x34a2f2a3, "bitmap_zalloc" },
	{ 0x32fc4a5a, "input_ff_erase" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x9d669763, "memcpy" },
	{ 0xc845b69, "bitmap_alloc" },
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x302dea3b, "lock_release" },
	{ 0x61393095, "lock_acquire" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0xdfa5d76d, "input_class" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x7c32d0f0, "printk" },
	{ 0x21d7eab7, "cdev_device_add" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0x3a299d03, "input_register_handle" },
	{ 0x4232d702, "device_initialize" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf7f16b3f, "input_get_new_minor" },
	{ 0xf4dc3ec3, "input_open_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb1f16974, "input_inject_event" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x8f68bd97, "input_set_keycode" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x38fef169, "input_get_keycode" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xb70789e, "__might_fault" },
	{ 0x97255bdf, "strlen" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0x7b49487f, "lock_is_held_type" },
	{ 0x8267cf15, "input_release_device" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0xf66134a3, "fasync_helper" },
	{ 0x3b12f40c, "put_device" },
	{ 0x8ff0ae8, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0xc3421d8b, "cdev_device_del" },
	{ 0x484b4699, "input_close_device" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x8be81f46, "kill_fasync" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xdf6700c6, "input_flush_device" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "C150F168371B920FE538C6F");
