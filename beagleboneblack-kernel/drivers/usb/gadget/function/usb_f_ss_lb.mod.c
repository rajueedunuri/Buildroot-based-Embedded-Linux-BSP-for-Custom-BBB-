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
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfd82705, "usb_ep_autoconfig_release" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x288be316, "usb_ep_set_halt" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0x5f754e5a, "memset" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0x167c0253, "_dev_err" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0xeb033e6, "alloc_ep_req" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x4e10bca2, "usb_string_id" },
	{ 0xd9e694cb, "usb_assign_descriptors" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "4F36F516318992291130C1C");
