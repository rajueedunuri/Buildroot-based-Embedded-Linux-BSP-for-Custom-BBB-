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
	{ 0x10bb9cfa, "shash_register_instance" },
	{ 0x40611f4d, "shash_free_instance" },
	{ 0x97021b1c, "crypto_init_spawn" },
	{ 0xd3db85f6, "crypto_alloc_instance2" },
	{ 0x516235b0, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0xdc628de6, "crypto_spawn_tfm" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xb94dcc6c, "crypto_ahash_setkey" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0xe06699b2, "sg_next" },
	{ 0x8c9edf60, "crypto_ahash_finup" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb03703b6, "crypto_ahash_type" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x766d6d96, "crypto_grab_skcipher" },
	{ 0x68514f5f, "crypto_init_ahash_spawn" },
	{ 0xa9009edb, "crypto_mod_put" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd087a558, "crypto_find_alg" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xb914080f, "aead_register_instance" },
	{ 0xb81960ca, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d6faa67, "crypto_drop_spawn" },
	{ 0xd45b87bd, "crypto_grab_aead" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x47fc6eb5, "crypto_spawn_tfm2" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0xbe5e1e5f, "crypto_aead_setkey" },
	{ 0xe54719f5, "crypto_aead_setauthsize" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x6d8747a0, "scatterwalk_ffwd" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x42e7a297, "scatterwalk_map_and_copy" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "34E47433AC5C9E421F5ECC0");
