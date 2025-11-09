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
	{ 0x820b63f7, "param_ops_uint" },
	{ 0x153311da, "noop_llseek" },
	{ 0xcac33857, "input_unregister_handler" },
	{ 0x39d9b327, "input_register_handler" },
	{ 0xc3421d8b, "cdev_device_del" },
	{ 0xdfa5d76d, "input_class" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8ff0ae8, "input_unregister_handle" },
	{ 0x21d7eab7, "cdev_device_add" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0x3a299d03, "input_register_handle" },
	{ 0x4232d702, "device_initialize" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xf7f16b3f, "input_get_new_minor" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x9d669763, "memcpy" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0xb70789e, "__might_fault" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b12f40c, "put_device" },
	{ 0xf66134a3, "fasync_helper" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x302dea3b, "lock_release" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x61393095, "lock_acquire" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x8be81f46, "kill_fasync" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xf4dc3ec3, "input_open_device" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x484b4699, "input_close_device" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*1,*2,*k*110,*r*0,*1,*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*2,*k*r*8,*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*3,*k*14A,*r*a*0,*1,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*3,*k*145,*r*a*0,*1,*18,*1C,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*3,*k*110,*r*a*0,*1,*m*l*s*f*w*");

MODULE_INFO(srcversion, "AD9E0CA54048FC29C48672D");
