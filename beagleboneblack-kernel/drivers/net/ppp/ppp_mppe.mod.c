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
	{ 0x5bd66e30, "ppp_unregister_compressor" },
	{ 0x75ecab09, "ppp_register_compressor" },
	{ 0x5f754e5a, "memset" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x34281783, "crypto_alloc_shash" },
	{ 0xf26c97d7, "crypto_alloc_skcipher" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x1d038704, "crypto_shash_final" },
	{ 0xecc8fd1a, "crypto_shash_update" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x7c32d0f0, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "DABF7D7EE9FDD596533B063");
