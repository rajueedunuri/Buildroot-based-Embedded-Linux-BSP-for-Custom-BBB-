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
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0x1b84259, "power_supply_unregister" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xba3e02a3, "devm_regulator_register" },
	{ 0x5f754e5a, "memset" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x357716de, "power_supply_get_battery_info" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0x1fda871, "power_supply_register" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x328a05f1, "strncpy" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1d4f24dc, "device_property_present" },
	{ 0x55c64190, "rdev_get_drvdata" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe63f0c69, "power_supply_set_input_current_limit_from_supplier" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xfb24a89b, "power_supply_get_drvdata" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x167c0253, "_dev_err" },
	{ 0x139badf5, "power_supply_changed" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xc48e6d20, "i2c_smbus_write_byte_data" },
	{ 0xa9fd6595, "i2c_smbus_read_byte_data" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,bq24190");
MODULE_ALIAS("of:N*T*Cti,bq24190C*");
MODULE_ALIAS("of:N*T*Cti,bq24192i");
MODULE_ALIAS("of:N*T*Cti,bq24192iC*");
MODULE_ALIAS("i2c:bq24190");
MODULE_ALIAS("i2c:bq24192i");

MODULE_INFO(srcversion, "4D02E950484B2358674B568");
