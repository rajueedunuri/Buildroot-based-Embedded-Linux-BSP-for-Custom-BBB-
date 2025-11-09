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
	{ 0x321a496, "tsc200x_pm_ops" },
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x167c0253, "_dev_err" },
	{ 0xe0466aa3, "i2c_smbus_write_byte" },
	{ 0xbc4556b2, "tsc200x_regmap_config" },
	{ 0x55ce8a66, "tsc200x_probe" },
	{ 0xa5083211, "__devm_regmap_init_i2c" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7010a52, "tsc200x_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tsc200x-core";

MODULE_ALIAS("of:N*T*Cti,tsc2004");
MODULE_ALIAS("of:N*T*Cti,tsc2004C*");
MODULE_ALIAS("i2c:tsc2004");

MODULE_INFO(srcversion, "19406F31EF303414BC430C4");
