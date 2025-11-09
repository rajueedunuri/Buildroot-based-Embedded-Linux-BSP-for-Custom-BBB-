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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd1abe064, "sg_copy_to_buffer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4586603d, "crypto_default_rng" },
	{ 0x9a12d07b, "sg_copy_from_buffer" },
	{ 0x40bb8892, "crypto_register_kpp" },
	{ 0x668402aa, "crypto_put_default_rng" },
	{ 0x6ff607b6, "crypto_get_default_rng" },
	{ 0x7c32d0f0, "printk" },
	{ 0x42685d7, "sg_nents_for_len" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc66dca4, "crypto_unregister_kpp" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B912A16E6F1C8D76D0E6278");
