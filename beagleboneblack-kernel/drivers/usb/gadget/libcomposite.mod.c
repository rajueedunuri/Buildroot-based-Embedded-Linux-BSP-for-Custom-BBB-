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
	{ 0x402b8281, "__request_module" },
	{ 0xf59b850f, "device_remove_file" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x30e11af6, "usb_gadget_deactivate" },
	{ 0x97255bdf, "strlen" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x346c27d8, "config_item_put" },
	{ 0xe71de2f9, "config_item_init_type_name" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x64ea6a5d, "usb_gadget_unregister_driver" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x9df84be3, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xde2a31af, "usb_gadget_activate" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0xf32f580, "init_uts_ns" },
	{ 0xcd5e4313, "configfs_register_subsystem" },
	{ 0x167c0253, "_dev_err" },
	{ 0x8dec8d1e, "device_create_file" },
	{ 0x7e73f32d, "usb_ep_dequeue" },
	{ 0xd159ab8, "module_put" },
	{ 0xc69cbeba, "config_item_set_name" },
	{ 0x70a19267, "_dev_info" },
	{ 0x6842cab8, "usb_gadget_vbus_draw" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xd3a2625, "usb_gadget_set_selfpowered" },
	{ 0xbe5dd522, "configfs_unregister_subsystem" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x18cffec0, "usb_gadget_ep_match_desc" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb1861907, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xff5eec61, "config_group_init" },
	{ 0x8522d6c6, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0314B9CE3A75F03315C4870");
