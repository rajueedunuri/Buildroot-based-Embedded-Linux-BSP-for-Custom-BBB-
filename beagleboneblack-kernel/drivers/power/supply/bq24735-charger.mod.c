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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x89d1327f, "devm_kasprintf" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x50e74207, "devm_power_supply_register" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x139badf5, "power_supply_changed" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xfb24a89b, "power_supply_get_drvdata" },
	{ 0xb84e0f55, "i2c_smbus_read_word_data" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0x167c0253, "_dev_err" },
	{ 0xa4fed27f, "i2c_smbus_write_word_data" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,bq24735");
MODULE_ALIAS("of:N*T*Cti,bq24735C*");
MODULE_ALIAS("i2c:bq24735-charger");

MODULE_INFO(srcversion, "E681F8F33572B5C574155EE");
