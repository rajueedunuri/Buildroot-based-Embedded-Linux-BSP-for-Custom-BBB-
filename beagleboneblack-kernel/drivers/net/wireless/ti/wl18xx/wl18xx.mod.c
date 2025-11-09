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
	{ 0xb7fb23fb, "wl12xx_cmd_build_probe_req" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x21f422fc, "wlcore_set_key" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x227d2c1e, "generic_file_llseek" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0xf2a5cf3e, "wlcore_event_beacon_loss" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb559f11, "wlcore_event_dummy_packet" },
	{ 0x44876161, "wlcore_event_inactive_sta" },
	{ 0xfb87edec, "wlcore_event_ba_rx_constraint" },
	{ 0x66029041, "ieee80211_radar_detected" },
	{ 0xdb9da5f9, "wlcore_event_fw_logger" },
	{ 0x785635c, "wlcore_event_rssi_trigger" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xa6de5ed, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x4dafe563, "wlcore_probe" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x5b227a11, "wlcore_alloc_hw" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6085c124, "wl1271_cmd_configure" },
	{ 0xc48d5a1f, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0x7acda787, "cancel_delayed_work" },
	{ 0xe829e60c, "default_llseek" },
	{ 0xe165d9e6, "wlcore_event_sched_scan_completed" },
	{ 0xea21f335, "wlcore_boot_upload_firmware" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbf867a7e, "wlcore_set_partition" },
	{ 0x328a05f1, "strncpy" },
	{ 0x2b70936a, "wlcore_enable_interrupts" },
	{ 0x3913b193, "nla_put" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc26f3f7e, "irq_get_irq_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x4c3212dd, "simple_open" },
	{ 0xe8b52404, "ieee80211_queue_delayed_work" },
	{ 0x409ed6de, "__cfg80211_send_event_skb" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x973d0f9e, "kstrtoul_from_user" },
	{ 0xfeaff69a, "wlcore_event_channel_switch" },
	{ 0x28818be2, "__cfg80211_alloc_event_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8d344b0f, "wlcore_disable_interrupts" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x796aa080, "wlcore_remove" },
	{ 0xf4dd5647, "ieee80211_find_sta" },
	{ 0x53556b28, "kstrtou8_from_user" },
	{ 0x92520be0, "wlcore_event_max_tx_failure" },
	{ 0x7db8271a, "wl1271_free_tx_id" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x56356ac, "ieee80211_stop_rx_ba_session" },
	{ 0x52170d47, "wlcore_scan_sched_scan_results" },
	{ 0x8d6faf3, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4631b7de, "wlcore_free_hw" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x91da5146, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0x89c719ef, "wl1271_debugfs_update_stats" },
	{ 0x5d971265, "wlcore_set_scan_chan_params" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0x944230d7, "wlcore_boot_run_firmware" },
	{ 0x132abb5d, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x16c28d27, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x6cb067cf, "wlcore_event_roc_complete" },
	{ 0x99bb8806, "memmove" },
	{ 0x4acb8dde, "wl12xx_is_dummy_packet" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd02584b2, "wl1271_cmd_send" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0x3f546e9d, "ieee80211_connection_loss" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "49FE7672BDAAED72D0FFA5A");
