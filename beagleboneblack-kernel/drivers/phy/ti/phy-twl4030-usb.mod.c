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
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe7007096, "regulator_enable" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdc3a7e18, "sysfs_notify" },
	{ 0x9492220, "musb_mailbox" },
	{ 0x18e4522e, "kobject_uevent" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0xc4eca51c, "of_phy_simple_xlate" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x70a19267, "_dev_info" },
	{ 0x84ac8e7b, "phy_create_lookup" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x8dec8d1e, "device_create_file" },
	{ 0x42a7450a, "usb_add_phy_dev" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xef00d130, "__devm_of_phy_provider_register" },
	{ 0xf3144b66, "devm_phy_create" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0xf59b850f, "device_remove_file" },
	{ 0x7acda787, "cancel_delayed_work" },
	{ 0xdf5a354, "usb_remove_phy" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=musb_hdrc";

MODULE_ALIAS("of:N*T*Cti,twl4030-usb");
MODULE_ALIAS("of:N*T*Cti,twl4030-usbC*");

MODULE_INFO(srcversion, "4A68BC6AC964846D14E54D4");
