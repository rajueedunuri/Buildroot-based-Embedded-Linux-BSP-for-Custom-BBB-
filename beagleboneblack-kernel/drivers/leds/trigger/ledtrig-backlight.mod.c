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
	{ 0xfe950d5d, "led_trigger_unregister" },
	{ 0x2e2af68c, "led_trigger_register" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x167c0253, "_dev_err" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0x91715312, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8ea17629, "led_set_brightness_nosleep" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EA9FFAF38C347D9390E0C09");
