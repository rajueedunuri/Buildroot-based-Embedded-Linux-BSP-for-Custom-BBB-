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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5d787991, "skb_queue_head" },
	{ 0x240f8bc4, "hci_recv_diag" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x29e34f5d, "_raw_spin_lock_irqsave_nested" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x815588a6, "clk_enable" },
	{ 0x8ca8bde1, "rcu_sync_lockdep_assert" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x291bd046, "__hci_cmd_sync" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0xf112da85, "bt_warn" },
	{ 0x7a1c6fe6, "hci_register_dev" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x8d9166d9, "btbcm_patchram" },
	{ 0xe2ed6f45, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x777c1b98, "hci_reset_dev" },
	{ 0xa764cad7, "tty_unthrottle" },
	{ 0xe57e0861, "btbcm_set_bdaddr" },
	{ 0x4b9a271, "__percpu_down_read" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xdc7c0242, "serdev_device_close" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x16d9bd59, "hci_unregister_dev" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0xa381c0d8, "serdev_device_write_buf" },
	{ 0x47022514, "bt_err" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd7442057, "bt_info" },
	{ 0x302dea3b, "lock_release" },
	{ 0x3b366ae4, "serdev_device_set_tiocm" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x61393095, "lock_acquire" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x1b3c1ff8, "__serdev_device_driver_register" },
	{ 0x71c90087, "memcmp" },
	{ 0x3c13784e, "__percpu_init_rwsem" },
	{ 0x826ff346, "tty_ldisc_flush" },
	{ 0xd8e4198d, "baswap" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x9591487a, "n_tty_ioctl_helper" },
	{ 0x9a514386, "hci_alloc_dev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x352e9022, "skb_push" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x74f5d00f, "serdev_device_get_tiocm" },
	{ 0x96c2623f, "serdev_device_write_flush" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x167c0253, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe1febbed, "percpu_up_write" },
	{ 0xe9a7fe16, "nvmem_cell_read" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x70a19267, "_dev_info" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x5bfde6c4, "tty_driver_flush_buffer" },
	{ 0xf8b96ad1, "devm_free_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x9473e4f2, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x28c4109e, "__percpu_up_read" },
	{ 0x9d669763, "memcpy" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0xd33afa9, "serdev_device_set_flow_control" },
	{ 0x926c2a0b, "btbcm_initialize" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0x5144f908, "nvmem_cell_get" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x2eeeb5a0, "btbcm_finalize" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1a05b300, "hci_free_dev" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0x49f10551, "serdev_device_set_baudrate" },
	{ 0x10173e71, "tty_register_ldisc" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x26edf7c4, "percpu_down_write" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0xc66499f9, "tty_set_termios" },
	{ 0x8550678c, "percpu_free_rwsem" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,btbcm";

MODULE_ALIAS("of:N*T*Cti,cc2560");
MODULE_ALIAS("of:N*T*Cti,cc2560C*");
MODULE_ALIAS("of:N*T*Cti,wl1271-st");
MODULE_ALIAS("of:N*T*Cti,wl1271-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1273-st");
MODULE_ALIAS("of:N*T*Cti,wl1273-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1281-st");
MODULE_ALIAS("of:N*T*Cti,wl1281-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1283-st");
MODULE_ALIAS("of:N*T*Cti,wl1283-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1285-st");
MODULE_ALIAS("of:N*T*Cti,wl1285-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1801-st");
MODULE_ALIAS("of:N*T*Cti,wl1801-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1805-st");
MODULE_ALIAS("of:N*T*Cti,wl1805-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1807-st");
MODULE_ALIAS("of:N*T*Cti,wl1807-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1831-st");
MODULE_ALIAS("of:N*T*Cti,wl1831-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1835-st");
MODULE_ALIAS("of:N*T*Cti,wl1835-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1837-st");
MODULE_ALIAS("of:N*T*Cti,wl1837-stC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");

MODULE_INFO(srcversion, "9A094B958A4698985788091");
