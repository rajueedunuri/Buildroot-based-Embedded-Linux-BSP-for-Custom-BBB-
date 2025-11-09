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
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x22364f7a, "w1_add_master_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x70a19267, "_dev_info" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x6b533409, "w1_remove_master_device" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xd159ab8, "module_put" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";

MODULE_ALIAS("of:N*T*Cti,omap3-1w");
MODULE_ALIAS("of:N*T*Cti,omap3-1wC*");
MODULE_ALIAS("of:N*T*Cti,am4372-hdq");
MODULE_ALIAS("of:N*T*Cti,am4372-hdqC*");

MODULE_INFO(srcversion, "D271E2DCBA2F66B171EE3A6");
