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
	{ 0x8572ba46, "usb_function_deactivate" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xa4e734ae, "usb_gstrings_attach" },
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0xfd1e5911, "gserial_connect" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0x91715312, "sprintf" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0x1e20ee78, "usb_function_activate" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0x551b0a28, "gserial_disconnect" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0x167c0253, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0xd9e694cb, "usb_assign_descriptors" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial";


MODULE_INFO(srcversion, "A2084EAF6478F8BC986F86E");
