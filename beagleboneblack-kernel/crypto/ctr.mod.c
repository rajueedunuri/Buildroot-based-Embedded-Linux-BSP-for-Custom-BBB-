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
	{ 0xee948b4c, "crypto_blkcipher_type" },
	{ 0xa9009edb, "crypto_mod_put" },
	{ 0x7474fc1a, "crypto_alloc_instance" },
	{ 0x516235b0, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0xdc628de6, "crypto_spawn_tfm" },
	{ 0x9f7974da, "blkcipher_walk_done" },
	{ 0x12e3b0cb, "blkcipher_walk_virt_block" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x51c56635, "skcipher_register_instance" },
	{ 0xb81960ca, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d6faa67, "crypto_drop_spawn" },
	{ 0x766d6d96, "crypto_grab_skcipher" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x47fc6eb5, "crypto_spawn_tfm2" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BD2D9DDD72436F2F29C4914");
