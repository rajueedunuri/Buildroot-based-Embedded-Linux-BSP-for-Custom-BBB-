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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xe45973d3, "skcipher_walk_done" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x57cc3374, "skcipher_walk_virt" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x51c56635, "skcipher_register_instance" },
	{ 0xbdd4c188, "crypto_inst_setname" },
	{ 0xa9009edb, "crypto_mod_put" },
	{ 0x97021b1c, "crypto_init_spawn" },
	{ 0x516235b0, "crypto_attr_alg2" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xdc628de6, "crypto_spawn_tfm" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d6faa67, "crypto_drop_spawn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "03482A7A5F405C77FECB0F5");
