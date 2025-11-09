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
	{ 0x7570fe46, "cdev_del" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0xa4e734ae, "usb_gstrings_attach" },
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xb70789e, "__might_fault" },
	{ 0xa5d2e60, "device_destroy" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0x1c9b1de, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0x153311da, "noop_llseek" },
	{ 0xd42ab1b7, "device_create" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0xfb0f94f, "cdev_add" },
	{ 0xeb033e6, "alloc_ep_req" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xca9677f5, "class_destroy" },
	{ 0xd9e694cb, "usb_assign_descriptors" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdd978dea, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3b5eb5cd, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "F5076825F498FCA12F93934");
