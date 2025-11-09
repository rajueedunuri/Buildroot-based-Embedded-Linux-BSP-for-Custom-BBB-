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
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x3764c28e, "__spi_register_driver" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x494c8333, "omapdss_device_register" },
	{ 0x6ef36fe7, "omapdss_display_init" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x449dfcc1, "spi_setup" },
	{ 0x5c014ae7, "omapdss_display_get_modes" },
	{ 0xe2c61a9f, "omapdss_device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x5f19b8c8, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss-base";

MODULE_ALIAS("spi:toppoly,td028ttec1");
MODULE_ALIAS("spi:tpo,td028ttec1");
MODULE_ALIAS("of:N*T*Comapdss,tpo,td028ttec1");
MODULE_ALIAS("of:N*T*Comapdss,tpo,td028ttec1C*");
MODULE_ALIAS("of:N*T*Comapdss,toppoly,td028ttec1");
MODULE_ALIAS("of:N*T*Comapdss,toppoly,td028ttec1C*");

MODULE_INFO(srcversion, "EA2A693BCDD9D14F45B39A5");
