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
	{ 0xb7cdf37, "crypto_unregister_template" },
	{ 0x6e78b6d2, "crypto_register_template" },
	{ 0x4470b7b6, "shash_no_setkey" },
	{ 0x40611f4d, "shash_free_instance" },
	{ 0x10bb9cfa, "shash_register_instance" },
	{ 0x66744a37, "crypto_init_shash_spawn" },
	{ 0xd3db85f6, "crypto_alloc_instance2" },
	{ 0xa9009edb, "crypto_mod_put" },
	{ 0x5917c7b8, "shash_attr_alg" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x47fc6eb5, "crypto_spawn_tfm2" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0x1d038704, "crypto_shash_final" },
	{ 0x81544ea0, "crypto_shash_finup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x551cda15, "crypto_shash_digest" },
	{ 0xecc8fd1a, "crypto_shash_update" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FEC2397A47D235AB2E41293");
