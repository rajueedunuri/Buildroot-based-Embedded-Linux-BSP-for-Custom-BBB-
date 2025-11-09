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
	{ 0xf26c97d7, "crypto_alloc_skcipher" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xf1cb5b2b, "cryptd_free_skcipher" },
	{ 0xc8d4a106, "crypto_unregister_skciphers" },
	{ 0x67d07120, "cryptd_skcipher_queued" },
	{ 0xf7e53e92, "crypto_register_skciphers" },
	{ 0xc95a0b0e, "crypto_unregister_skcipher" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd7391c82, "crypto_register_skcipher" },
	{ 0x82343010, "cryptd_alloc_skcipher" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xffb1531a, "cryptd_skcipher_child" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";


MODULE_INFO(srcversion, "C8B1459EECA9242318FCE76");
