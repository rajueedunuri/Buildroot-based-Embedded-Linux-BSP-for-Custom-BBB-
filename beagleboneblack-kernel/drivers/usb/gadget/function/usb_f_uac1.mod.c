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
	{ 0xa4e734ae, "usb_gstrings_attach" },
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0xcde63fb0, "g_audio_cleanup" },
	{ 0x1082a0e0, "u_audio_start_capture" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0x167c0253, "_dev_err" },
	{ 0x92f0d462, "g_audio_setup" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0x32f4f7e3, "u_audio_stop_playback" },
	{ 0x774d5541, "u_audio_stop_capture" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9342ab68, "u_audio_start_playback" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xd9e694cb, "usb_assign_descriptors" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_audio";


MODULE_INFO(srcversion, "467805F9E6A882439F57C85");
