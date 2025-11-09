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
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb12abed6, "netdev_info" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7444ebb0, "ieee80211_get_num_supported_channels" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x576a76d1, "wiphy_free" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2697d30e, "cfg80211_connect_done" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x227d2c1e, "generic_file_llseek" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0x6be6a39c, "cfg80211_inform_bss_data" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0x11ee6e23, "netif_carrier_on" },
	{ 0xa34e4bd3, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x207c4625, "netif_carrier_off" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0x7a3fa396, "netdev_alert" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x45d80560, "netif_rx" },
	{ 0x302dea3b, "lock_release" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x61393095, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0x1b197cb8, "netif_rx_ni" },
	{ 0x7acda787, "cancel_delayed_work" },
	{ 0xe829e60c, "default_llseek" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x35a5c72, "cfg80211_get_bss" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x5d5832ca, "kthread_stop" },
	{ 0x71c90087, "memcmp" },
	{ 0x98203087, "free_netdev" },
	{ 0x71ffe5a0, "wiphy_unregister" },
	{ 0x37bae835, "register_netdev" },
	{ 0x32d1dc40, "ieee80211_get_channel" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x70f66a80, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x352e9022, "skb_push" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x95f3e768, "cfg80211_michael_mic_failure" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x4c3212dd, "simple_open" },
	{ 0xea90d6ce, "request_firmware_nowait" },
	{ 0xc1275c70, "cfg80211_ibss_joined" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe6938daa, "ieee80211_bss_get_ie" },
	{ 0xacba7339, "netif_device_attach" },
	{ 0x24c4f0b3, "netif_device_detach" },
	{ 0x54cc636f, "cfg80211_put_bss" },
	{ 0x791582c6, "wiphy_register" },
	{ 0x21eb2594, "_raw_spin_unlock_bh" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf29ffc91, "wiphy_new_nm" },
	{ 0x8768bc79, "alloc_netdev_mqs" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xedc9fced, "eth_type_trans" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0x3d95a8c1, "pskb_expand_head" },
	{ 0x4172dc03, "netdev_err" },
	{ 0x2aefb937, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x85f31ebe, "cfg80211_disconnected" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x87b98379, "eth_validate_addr" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x11d663bc, "regulatory_hint" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0xaf6159e7, "cfg80211_scan_done" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";


MODULE_INFO(srcversion, "69B8634E0333389940ABD89");
