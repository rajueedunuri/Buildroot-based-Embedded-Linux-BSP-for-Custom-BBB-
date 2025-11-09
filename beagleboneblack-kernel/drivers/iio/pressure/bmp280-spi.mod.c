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
	{ 0x427db7b0, "bmp280_dev_pm_ops" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x3764c28e, "__spi_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3d34ad2d, "spi_write_then_read" },
	{ 0x1135c597, "bmp280_regmap_config" },
	{ 0xfbb318f5, "bmp180_regmap_config" },
	{ 0x167c0253, "_dev_err" },
	{ 0x28117fe, "bmp280_common_probe" },
	{ 0x7aa5f0d3, "__devm_regmap_init" },
	{ 0x449dfcc1, "spi_setup" },
	{ 0x39ee86a6, "spi_get_device_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x10ac839b, "bmp280_common_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bmp280";

MODULE_ALIAS("spi:bmp180");
MODULE_ALIAS("spi:bmp181");
MODULE_ALIAS("spi:bmp280");
MODULE_ALIAS("spi:bme280");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp181");
MODULE_ALIAS("of:N*T*Cbosch,bmp181C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");

MODULE_INFO(srcversion, "574F9F2823ACD5BFD47D8A2");
