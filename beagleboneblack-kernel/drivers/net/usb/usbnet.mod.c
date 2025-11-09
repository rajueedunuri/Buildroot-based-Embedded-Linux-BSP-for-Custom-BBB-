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
	{ 0xb12abed6, "netdev_info" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x33643607, "ethtool_op_get_ts_info" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x78bb04dc, "mem_map" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0x11ee6e23, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5a265389, "usb_get_from_anchor" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x207c4625, "netif_carrier_off" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0x2c92219c, "usb_scuttle_anchored_urbs" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x4e996be7, "usb_autopm_get_interface" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x446747d4, "usb_get_urb" },
	{ 0x10480fff, "usb_unlink_urb" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x45d80560, "netif_rx" },
	{ 0x302dea3b, "lock_release" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x61393095, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x42cb4278, "usb_string" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x8dc53209, "mii_nway_restart" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe5b78504, "ethtool_op_get_link" },
	{ 0xb096bfc1, "_raw_spin_lock_nested" },
	{ 0x309399b5, "usb_set_interface" },
	{ 0x98203087, "free_netdev" },
	{ 0xe7e2f841, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x37bae835, "register_netdev" },
	{ 0xb6b1a9d5, "usb_control_msg" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6c209eab, "__alloc_percpu_gfp" },
	{ 0xee307e34, "mii_ethtool_set_link_ksettings" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0xacba7339, "netif_device_attach" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0x24c4f0b3, "netif_device_detach" },
	{ 0xfe87e547, "usb_autopm_get_interface_async" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb4afc7a2, "usb_clear_halt" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xedc9fced, "eth_type_trans" },
	{ 0x86ccf98c, "hex2bin" },
	{ 0x4172dc03, "netdev_err" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x9c40356f, "mii_ethtool_get_link_ksettings" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x11d5f16, "usb_autopm_get_interface_no_resume" },
	{ 0x87b98379, "eth_validate_addr" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x22e4bae2, "mii_link_ok" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x8665053d, "skb_tstamp_tx" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0xf1a0fb0b, "eth_mac_addr" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x80fa8213, "usb_autopm_put_interface" },
	{ 0xc458796f, "usb_anchor_urb" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x5030dc1b, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";


MODULE_INFO(srcversion, "E82AB494EB533E4A20C227E");
