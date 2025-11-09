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
	{ 0xd84eb48f, "crypto_unregister_shash" },
	{ 0xd6d64d69, "crypto_register_shash" },
	{ 0x5a4d313e, "gf128mul_4k_lle" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x83581089, "gf128mul_init_4k_lle" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7a4497db, "kzfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gf128mul";


MODULE_INFO(srcversion, "14775E07C89BA0C720C24C9");
