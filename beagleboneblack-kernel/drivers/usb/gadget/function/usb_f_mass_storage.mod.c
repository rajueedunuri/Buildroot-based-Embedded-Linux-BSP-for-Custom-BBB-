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
	{ 0xc2c697f3, "kernel_write" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa4e734ae, "usb_gstrings_attach" },
	{ 0x6681ac5c, "complete_and_exit" },
	{ 0xc8b84a9b, "up_read" },
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x489df60d, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0x97255bdf, "strlen" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf00f41be, "usb_ep_set_wedge" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x346c27d8, "config_item_put" },
	{ 0x548b84d7, "file_path" },
	{ 0xf6e1040, "debug_check_no_locks_held" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x55300ac1, "vfs_fsync" },
	{ 0x288be316, "usb_ep_set_halt" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0x3a83a5b2, "down_read" },
	{ 0x302dea3b, "lock_release" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0xf139f6cf, "kernel_read" },
	{ 0x61393095, "lock_acquire" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x7a2b51e4, "device_register" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x53466556, "freezing_slow_path" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x3ba53725, "unregister_gadget_item" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0x2ccccbd5, "usb_ep_clear_halt" },
	{ 0xc17cffe, "up_write" },
	{ 0x167c0253, "_dev_err" },
	{ 0x4e576c7d, "down_write" },
	{ 0x58d65c6d, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0xea56e299, "usb_composite_setup_continue" },
	{ 0x7e73f32d, "usb_ep_dequeue" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xbe3f237b, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf76e4a0b, "invalidate_mapping_pages" },
	{ 0xd9e694cb, "usb_assign_descriptors" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0xba585fe3, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x87886f14, "dev_set_name" },
	{ 0xdbead110, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x18c185a8, "__init_rwsem" },
	{ 0xe98f9a76, "filp_open" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "B259BFD2A9DE50098C9E891");
