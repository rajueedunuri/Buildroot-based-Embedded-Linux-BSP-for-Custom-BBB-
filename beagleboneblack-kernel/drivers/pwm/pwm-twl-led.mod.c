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
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe9ed19fd, "pwmchip_add" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xc99e2a55, "twl_rev" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7f7af0e2, "pwmchip_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,twl4030-pwmled");
MODULE_ALIAS("of:N*T*Cti,twl4030-pwmledC*");
MODULE_ALIAS("of:N*T*Cti,twl6030-pwmled");
MODULE_ALIAS("of:N*T*Cti,twl6030-pwmledC*");

MODULE_INFO(srcversion, "28CA441885402E44F758984");
