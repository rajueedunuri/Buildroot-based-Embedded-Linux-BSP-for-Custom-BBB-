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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xa5d2e60, "device_destroy" },
	{ 0x513aec5a, "__register_chrdev" },
	{ 0x91715312, "sprintf" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x7c32d0f0, "printk" },
	{ 0x153311da, "noop_llseek" },
	{ 0xd42ab1b7, "device_create" },
	{ 0xd159ab8, "module_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xca9677f5, "class_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdd978dea, "__class_create" },
	{ 0x8522d6c6, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "52CD0E38D9070373E5FDC78");
