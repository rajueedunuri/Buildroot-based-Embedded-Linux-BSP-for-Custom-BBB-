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
	{ 0x92e31f08, "power_supply_get_by_name" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x1ae98081, "power_supply_put" },
	{ 0xbbf88070, "power_supply_get_property" },
	{ 0xa9cd0cb9, "power_supply_get_by_phandle" },
	{ 0x136209db, "power_supply_reg_notifier" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x1fda871, "power_supply_register" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x3b3a099e, "idr_alloc" },
	{ 0x167c0253, "_dev_err" },
	{ 0x70a19267, "_dev_info" },
	{ 0xafa8fc84, "idr_remove" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0x6b81c38b, "power_supply_unreg_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b84259, "power_supply_unregister" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xdc3a7e18, "sysfs_notify" },
	{ 0x84b183ae, "strncmp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x81e9e1d4, "i2c_transfer" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfb24a89b, "power_supply_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,bq24150");
MODULE_ALIAS("of:N*T*Cti,bq24150C*");
MODULE_ALIAS("of:N*T*Cti,bq24150a");
MODULE_ALIAS("of:N*T*Cti,bq24150aC*");
MODULE_ALIAS("of:N*T*Cti,bq24151");
MODULE_ALIAS("of:N*T*Cti,bq24151C*");
MODULE_ALIAS("of:N*T*Cti,bq24151a");
MODULE_ALIAS("of:N*T*Cti,bq24151aC*");
MODULE_ALIAS("of:N*T*Cti,bq24152");
MODULE_ALIAS("of:N*T*Cti,bq24152C*");
MODULE_ALIAS("of:N*T*Cti,bq24153");
MODULE_ALIAS("of:N*T*Cti,bq24153C*");
MODULE_ALIAS("of:N*T*Cti,bq24153a");
MODULE_ALIAS("of:N*T*Cti,bq24153aC*");
MODULE_ALIAS("of:N*T*Cti,bq24155");
MODULE_ALIAS("of:N*T*Cti,bq24155C*");
MODULE_ALIAS("of:N*T*Cti,bq24156");
MODULE_ALIAS("of:N*T*Cti,bq24156C*");
MODULE_ALIAS("of:N*T*Cti,bq24156a");
MODULE_ALIAS("of:N*T*Cti,bq24156aC*");
MODULE_ALIAS("of:N*T*Cti,bq24157s");
MODULE_ALIAS("of:N*T*Cti,bq24157sC*");
MODULE_ALIAS("of:N*T*Cti,bq24158");
MODULE_ALIAS("of:N*T*Cti,bq24158C*");
MODULE_ALIAS("i2c:bq2415x");
MODULE_ALIAS("i2c:bq24150");
MODULE_ALIAS("i2c:bq24150a");
MODULE_ALIAS("i2c:bq24151");
MODULE_ALIAS("i2c:bq24151a");
MODULE_ALIAS("i2c:bq24152");
MODULE_ALIAS("i2c:bq24153");
MODULE_ALIAS("i2c:bq24153a");
MODULE_ALIAS("i2c:bq24155");
MODULE_ALIAS("i2c:bq24156");
MODULE_ALIAS("i2c:bq24156a");
MODULE_ALIAS("i2c:bq24157s");
MODULE_ALIAS("i2c:bq24158");

MODULE_INFO(srcversion, "FEF45DF82B2908AE3A50892");
