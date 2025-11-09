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
	{ 0xe7007096, "regulator_enable" },
	{ 0x167c0253, "_dev_err" },
	{ 0x494c8333, "omapdss_device_register" },
	{ 0x6ef36fe7, "omapdss_display_init" },
	{ 0x8712dd72, "devm_gpiod_get_index" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5c014ae7, "omapdss_display_get_modes" },
	{ 0xe2c61a9f, "omapdss_device_unregister" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss-base";

MODULE_ALIAS("of:N*T*Comapdss,sharp,ls037v7dw01");
MODULE_ALIAS("of:N*T*Comapdss,sharp,ls037v7dw01C*");

MODULE_INFO(srcversion, "13D1E9F5AE1A4B092D89154");
