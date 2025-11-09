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
	{ 0x71c90087, "memcmp" },
	{ 0x25091a4a, "input_match_device_id" },
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x302dea3b, "lock_release" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x61393095, "lock_acquire" },
	{ 0xdfa5d76d, "input_class" },
	{ 0x7c32d0f0, "printk" },
	{ 0x21d7eab7, "cdev_device_add" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0x3a299d03, "input_register_handle" },
	{ 0x4232d702, "device_initialize" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xf7f16b3f, "input_get_new_minor" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xf4dc3ec3, "input_open_device" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x97255bdf, "strlen" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb70789e, "__might_fault" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x37a0cba, "kfree" },
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
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "DE1472AA05D7205AC865D44");
