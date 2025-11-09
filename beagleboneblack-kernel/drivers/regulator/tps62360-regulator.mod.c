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
	{ 0xc1975b3b, "regulator_set_voltage_time_sel" },
	{ 0x5f9515d, "regulator_map_voltage_linear" },
	{ 0xfc3b58bf, "regulator_list_voltage_linear" },
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0x4d3f2de4, "of_get_regulator_init_data" },
	{ 0xeafe36dc, "devm_gpio_request_one" },
	{ 0xba3e02a3, "devm_regulator_register" },
	{ 0xbb99a279, "regmap_write" },
	{ 0xa5083211, "__devm_regmap_init_i2c" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c877783, "gpiod_set_raw_value_cansleep" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x55c64190, "rdev_get_drvdata" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x167c0253, "_dev_err" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tps62360");
MODULE_ALIAS("i2c:tps62361");
MODULE_ALIAS("i2c:tps62362");
MODULE_ALIAS("i2c:tps62363");
MODULE_ALIAS("of:N*T*Cti,tps62360");
MODULE_ALIAS("of:N*T*Cti,tps62360C*");
MODULE_ALIAS("of:N*T*Cti,tps62361");
MODULE_ALIAS("of:N*T*Cti,tps62361C*");
MODULE_ALIAS("of:N*T*Cti,tps62362");
MODULE_ALIAS("of:N*T*Cti,tps62362C*");
MODULE_ALIAS("of:N*T*Cti,tps62363");
MODULE_ALIAS("of:N*T*Cti,tps62363C*");

MODULE_INFO(srcversion, "3CDBFEC520733D678E4C707");
