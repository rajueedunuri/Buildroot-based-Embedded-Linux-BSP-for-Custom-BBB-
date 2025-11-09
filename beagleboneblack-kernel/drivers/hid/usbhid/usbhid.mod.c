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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa170bfae, "hid_add_device" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4cf24332, "__usb_get_extra_descriptor" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0x97255bdf, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6b33d4aa, "hid_parse_report" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0xeb1634e4, "usb_deregister_dev" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x932876eb, "__hid_request" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x4e996be7, "usb_autopm_get_interface" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x10480fff, "usb_unlink_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5495392, "hid_debug" },
	{ 0x7d66bb93, "hid_input_report" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x51a419be, "usb_block_urb" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc48d5a1f, "param_ops_charp" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x42cb4278, "usb_string" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0x71c90087, "memcmp" },
	{ 0x22db8022, "hid_hw_close" },
	{ 0xe7e2f841, "usb_autopm_put_interface_async" },
	{ 0x3c63f4cf, "usb_unpoison_urb" },
	{ 0xf66134a3, "fasync_helper" },
	{ 0x578fb82c, "hid_check_keys_pressed" },
	{ 0x3e8be41c, "usb_register_dev" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0xb6b1a9d5, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xb0e332f6, "hid_hw_open" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x153311da, "noop_llseek" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x2a0e8227, "hid_set_field" },
	{ 0xab4e4dd1, "usb_free_coherent" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc11b7973, "usb_queue_reset_device" },
	{ 0x20b2c519, "hid_alloc_report_buf" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xfe87e547, "usb_autopm_get_interface_async" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb4afc7a2, "usb_clear_halt" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xc596de81, "usb_find_interface" },
	{ 0x2ed4daf6, "usb_interrupt_msg" },
	{ 0x5017fef2, "hid_destroy_device" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xe6eb9e28, "hid_allocate_device" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x11d5f16, "usb_autopm_get_interface_no_resume" },
	{ 0xf8e57f06, "usb_autopm_put_interface_no_suspend" },
	{ 0x14937d7, "hidinput_count_leds" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8222be2b, "prepare_to_wait" },
	{ 0xb97e294e, "param_array_ops" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x8be81f46, "kill_fasync" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x66e1d1bf, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x820b63f7, "param_ops_uint" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x80fa8213, "usb_autopm_put_interface" },
	{ 0xb7875c92, "device_set_wakeup_enable" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0xd2d180bc, "hid_lookup_quirk" },
	{ 0x4a3f5f0d, "hid_output_report" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "BB028133753BE07C4DA8988");
