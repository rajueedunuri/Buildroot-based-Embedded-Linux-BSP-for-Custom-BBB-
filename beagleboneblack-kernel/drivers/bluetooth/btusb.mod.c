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
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x6e51a105, "btintel_set_event_mask" },
	{ 0xf3541a66, "btintel_load_ddc_config" },
	{ 0x8a9f138c, "btintel_send_intel_reset" },
	{ 0x7871a007, "btintel_download_firmware" },
	{ 0x91711524, "btintel_read_boot_params" },
	{ 0xb9a11b7b, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x59272479, "btintel_hw_error" },
	{ 0xd315c0e3, "btintel_set_diag" },
	{ 0x3add525b, "btintel_set_diag_mfg" },
	{ 0x9111c456, "btintel_set_bdaddr" },
	{ 0x741f257b, "btbcm_setup_apple" },
	{ 0xe57e0861, "btbcm_set_bdaddr" },
	{ 0xd371a433, "btbcm_setup_patchram" },
	{ 0x4b5cd907, "btrtl_shutdown_realtek" },
	{ 0x46369439, "btrtl_setup_realtek" },
	{ 0x5e70df00, "usb_enable_autosuspend" },
	{ 0x736f6be9, "usb_ifnum_to_if" },
	{ 0xf64be4aa, "usb_match_id" },
	{ 0x98f3a8b8, "of_property_read_variable_u16_array" },
	{ 0x7a1c6fe6, "hci_register_dev" },
	{ 0x4806d057, "usb_driver_claim_interface" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x4129ca77, "of_irq_get_byname" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x9a514386, "hci_alloc_dev" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x84c888f, "pm_wakeup_dev_event" },
	{ 0x240f8bc4, "hci_recv_diag" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x309399b5, "usb_set_interface" },
	{ 0x80fa8213, "usb_autopm_put_interface" },
	{ 0x4e996be7, "usb_autopm_get_interface" },
	{ 0x8214238, "btintel_check_bdaddr" },
	{ 0xa119a898, "btintel_set_event_mask_mfg" },
	{ 0xdb3c381b, "btintel_exit_mfg" },
	{ 0x71c90087, "memcmp" },
	{ 0x1a1f5803, "__hci_cmd_sync_ev" },
	{ 0x9aea338, "btintel_enter_mfg" },
	{ 0xaf46a25a, "btintel_read_version" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0xd7442057, "bt_info" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0xb81960ca, "snprintf" },
	{ 0x220aba45, "usb_bulk_msg" },
	{ 0x167c0253, "_dev_err" },
	{ 0xb6b1a9d5, "usb_control_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x291bd046, "__hci_cmd_sync" },
	{ 0x82e32a9e, "usb_driver_release_interface" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x1a05b300, "hci_free_dev" },
	{ 0x16d9bd59, "hci_unregister_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe90861c6, "usb_kill_anchored_urbs" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2c92219c, "usb_scuttle_anchored_urbs" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5a265389, "usb_get_from_anchor" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x50245fbb, "skb_put" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x47022514, "bt_err" },
	{ 0x3b104a61, "usb_unanchor_urb" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xc458796f, "usb_anchor_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xebb2d65, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,btintel,btbcm,btrtl,bluetooth";

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1248BD0A9030CBDB832F7F");
