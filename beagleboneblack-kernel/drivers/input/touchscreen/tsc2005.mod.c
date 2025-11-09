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
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x3764c28e, "__spi_register_driver" },
	{ 0xbc4556b2, "tsc200x_regmap_config" },
	{ 0x55ce8a66, "tsc200x_probe" },
	{ 0x4e9e5db4, "__devm_regmap_init_spi" },
	{ 0x449dfcc1, "spi_setup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x5f19b8c8, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7010a52, "tsc200x_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tsc200x-core";

MODULE_ALIAS("of:N*T*Cti,tsc2005");
MODULE_ALIAS("of:N*T*Cti,tsc2005C*");

MODULE_INFO(srcversion, "99A4525D7F1E7F52C4A5AD1");
