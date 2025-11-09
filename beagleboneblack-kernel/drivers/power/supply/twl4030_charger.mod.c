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
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x8dec8d1e, "device_create_file" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x50e74207, "devm_power_supply_register" },
	{ 0x1f103d03, "devm_usb_get_phy_by_node" },
	{ 0x81104fec, "of_get_compatible_child" },
	{ 0x187a6892, "devm_iio_channel_get" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xf59b850f, "device_remove_file" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x684ddf8a, "_dev_crit" },
	{ 0x139badf5, "power_supply_changed" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x2197bf57, "iio_read_channel_processed" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0x167c0253, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xb81960ca, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cti,twl4030-bci");
MODULE_ALIAS("of:N*T*Cti,twl4030-bciC*");

MODULE_INFO(srcversion, "E39440B283421F676CF0818");
