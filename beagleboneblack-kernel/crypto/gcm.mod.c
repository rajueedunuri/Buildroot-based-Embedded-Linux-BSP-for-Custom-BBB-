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
	{ 0xe06699b2, "sg_next" },
	{ 0x8c9edf60, "crypto_ahash_finup" },
	{ 0x9da2e67d, "crypto_req_done" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0xb94dcc6c, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe4effcd5, "sg_init_one" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb03703b6, "crypto_ahash_type" },
	{ 0x84b183ae, "strncmp" },
	{ 0x766d6d96, "crypto_grab_skcipher" },
	{ 0xa9009edb, "crypto_mod_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x68514f5f, "crypto_init_ahash_spawn" },
	{ 0xd087a558, "crypto_find_alg" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xb914080f, "aead_register_instance" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd45b87bd, "crypto_grab_aead" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xf40b2297, "__crypto_memneq" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x6d8747a0, "scatterwalk_ffwd" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x42e7a297, "scatterwalk_map_and_copy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d6faa67, "crypto_drop_spawn" },
	{ 0xae4ab44, "crypto_get_default_null_skcipher" },
	{ 0x47fc6eb5, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0xbe5e1e5f, "crypto_aead_setkey" },
	{ 0xe54719f5, "crypto_aead_setauthsize" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3FA8CA4E517B4FA661639A7");
