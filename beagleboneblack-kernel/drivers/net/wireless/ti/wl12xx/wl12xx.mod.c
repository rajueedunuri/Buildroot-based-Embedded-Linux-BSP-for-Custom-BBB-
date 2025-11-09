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
	{ 0x7b02fe19, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x21f422fc, "wlcore_set_key" },
	{ 0x8aefcae6, "wl1271_acx_init_mem_config" },
	{ 0x227d2c1e, "generic_file_llseek" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0xf2a5cf3e, "wlcore_event_beacon_loss" },
	{ 0xb559f11, "wlcore_event_dummy_packet" },
	{ 0x44876161, "wlcore_event_inactive_sta" },
	{ 0xfb87edec, "wlcore_event_ba_rx_constraint" },
	{ 0x102054a2, "wl1271_acx_pm_config" },
	{ 0x65f53aed, "wlcore_calc_packet_alignment" },
	{ 0x785635c, "wlcore_event_rssi_trigger" },
	{ 0xa6de5ed, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x4dafe563, "wlcore_probe" },
	{ 0x5b227a11, "wlcore_alloc_hw" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0x6826a922, "wl1271_acx_set_ht_capabilities" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6085c124, "wl1271_cmd_configure" },
	{ 0xc48d5a1f, "param_ops_charp" },
	{ 0x5ddf357b, "wl1271_cmd_data_path" },
	{ 0xc7161228, "wl12xx_acx_mem_cfg" },
	{ 0x7acda787, "cancel_delayed_work" },
	{ 0xe165d9e6, "wlcore_event_sched_scan_completed" },
	{ 0xea21f335, "wlcore_boot_upload_firmware" },
	{ 0xfb402a2a, "wl1271_acx_sleep_auth" },
	{ 0x7c32d0f0, "printk" },
	{ 0xbf867a7e, "wlcore_set_partition" },
	{ 0x2b70936a, "wlcore_enable_interrupts" },
	{ 0x419a27fe, "wl1271_cmd_test" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x4c3212dd, "simple_open" },
	{ 0xe8b52404, "ieee80211_queue_delayed_work" },
	{ 0xfeaff69a, "wlcore_event_channel_switch" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8d344b0f, "wlcore_disable_interrupts" },
	{ 0x796aa080, "wlcore_remove" },
	{ 0x92520be0, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x52170d47, "wlcore_scan_sched_scan_results" },
	{ 0x1ead3b03, "wlcore_event_soft_gemini_sense" },
	{ 0x4631b7de, "wlcore_free_hw" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xa89ce0a8, "wlcore_tx_complete" },
	{ 0x91da5146, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0x89c719ef, "wl1271_debugfs_update_stats" },
	{ 0x5d971265, "wlcore_set_scan_chan_params" },
	{ 0x944230d7, "wlcore_boot_run_firmware" },
	{ 0x132abb5d, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x16c28d27, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6cb067cf, "wlcore_event_roc_complete" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd02584b2, "wl1271_cmd_send" },
	{ 0x132fb7b7, "wl1271_tx_min_rate_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "006AB4EAA9166CAB563FBC6");
