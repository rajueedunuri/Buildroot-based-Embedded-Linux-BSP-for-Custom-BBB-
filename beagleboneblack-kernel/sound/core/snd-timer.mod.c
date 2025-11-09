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
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x24ed3e93, "snd_register_device" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xad750856, "snd_device_initialize" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0x6e617324, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x9a897c21, "snd_device_new" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x81598760, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf66134a3, "fasync_helper" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd159ab8, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x8d3d4aad, "get_device" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x633284e4, "snd_info_free_entry" },
	{ 0x8be81f46, "kill_fasync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x9994735f, "snd_info_create_module_entry" },
	{ 0x48dd6941, "snd_info_register" },
	{ 0x8522d6c6, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "1879ADF57C9DCB79D962541");
