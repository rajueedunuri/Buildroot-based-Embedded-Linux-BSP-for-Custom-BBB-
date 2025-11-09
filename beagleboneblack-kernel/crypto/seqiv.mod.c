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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x42e7a297, "scatterwalk_map_and_copy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfa4a10a6, "aead_exit_geniv" },
	{ 0xd85d5e7e, "aead_init_geniv" },
	{ 0xb914080f, "aead_register_instance" },
	{ 0xcfd98bda, "aead_geniv_free" },
	{ 0x8312b7f7, "aead_geniv_alloc" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8BA92FA19F140B0C3198607");
