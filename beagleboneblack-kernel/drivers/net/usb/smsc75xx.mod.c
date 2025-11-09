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
	{ 0x1dcb64e9, "usbnet_disconnect" },
	{ 0x8d8a9d6, "usbnet_probe" },
	{ 0x99046675, "usbnet_set_link_ksettings" },
	{ 0xfb2e046f, "usbnet_get_link_ksettings" },
	{ 0x426f5f42, "usbnet_get_link" },
	{ 0xe6fb4c02, "usbnet_nway_reset" },
	{ 0xa890255b, "usbnet_set_msglevel" },
	{ 0x9ec9fb1c, "usbnet_get_msglevel" },
	{ 0xffa83bb9, "usbnet_get_drvinfo" },
	{ 0x1e4cb2a9, "usbnet_get_stats64" },
	{ 0xfd48aa81, "usbnet_tx_timeout" },
	{ 0x87b98379, "eth_validate_addr" },
	{ 0xf1a0fb0b, "eth_mac_addr" },
	{ 0x6cab3146, "usbnet_start_xmit" },
	{ 0xcff4bbf8, "usbnet_stop" },
	{ 0xcc950faa, "usbnet_open" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd61a9c4e, "of_get_mac_address" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xc185bee3, "usbnet_get_endpoints" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8dc53209, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1f3bdcaa, "usbnet_defer_kevent" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x29d4b792, "usbnet_resume" },
	{ 0xb12abed6, "netdev_info" },
	{ 0xf242264b, "usbnet_suspend" },
	{ 0xdabe6eb5, "usbnet_change_mtu" },
	{ 0xbc1b4834, "mii_ethtool_gset" },
	{ 0x6fb78c2a, "mii_check_media" },
	{ 0x5f754e5a, "memset" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x34f25f3, "usbnet_read_cmd" },
	{ 0xdf6f443, "usbnet_read_cmd_nopm" },
	{ 0xf7c56bd2, "usbnet_write_cmd" },
	{ 0x8c8cf1d4, "usbnet_write_cmd_nopm" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x314833ee, "usbnet_skb_return" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0x2a618956, "skb_clone" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0xf102732a, "crc16" },
	{ 0xb4039c77, "generic_mii_ioctl" },
	{ 0x63a80102, "netdev_warn" },
	{ 0xb7875c92, "device_set_wakeup_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x122170da, "crc32_le" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x352e9022, "skb_push" },
	{ 0x3d95a8c1, "pskb_expand_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,usbcore";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "928563C8E9668CE4C66A7E9");
