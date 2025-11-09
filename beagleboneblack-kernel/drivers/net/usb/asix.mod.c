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
	{ 0xb12abed6, "netdev_info" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xbc1b4834, "mii_ethtool_gset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34cfe282, "phy_disconnect" },
	{ 0x29d4b792, "usbnet_resume" },
	{ 0xe4295dee, "phy_stop" },
	{ 0x8d8a9d6, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd56f5708, "usbnet_link_change" },
	{ 0x39cf4591, "__mdiobus_register" },
	{ 0x5ceddeca, "phy_ethtool_nway_reset" },
	{ 0x1dcb64e9, "usbnet_disconnect" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb4039c77, "generic_mii_ioctl" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0xcff4bbf8, "usbnet_stop" },
	{ 0xc117d2fe, "usbnet_update_max_qlen" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x2f9419db, "mdiobus_unregister" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x7f1b888, "phy_print_status" },
	{ 0xe6fb4c02, "usbnet_nway_reset" },
	{ 0x99046675, "usbnet_set_link_ksettings" },
	{ 0x5f754e5a, "memset" },
	{ 0xf29d18c8, "phy_start" },
	{ 0x8dc53209, "mii_nway_restart" },
	{ 0x1e4cb2a9, "usbnet_get_stats64" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x40746f72, "eth_platform_get_mac_address" },
	{ 0x6534184a, "mdiobus_free" },
	{ 0xc185bee3, "usbnet_get_endpoints" },
	{ 0xfb2e046f, "usbnet_get_link_ksettings" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xffa83bb9, "usbnet_get_drvinfo" },
	{ 0x352e9022, "skb_push" },
	{ 0xdf6f443, "usbnet_read_cmd_nopm" },
	{ 0x122170da, "crc32_le" },
	{ 0x6cab3146, "usbnet_start_xmit" },
	{ 0xf242264b, "usbnet_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x426f5f42, "usbnet_get_link" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x8c8cf1d4, "usbnet_write_cmd_nopm" },
	{ 0x96f7856f, "phy_ethtool_get_link_ksettings" },
	{ 0xbc4a852e, "skb_copy_expand" },
	{ 0x34f25f3, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfd48aa81, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x16537028, "genphy_resume" },
	{ 0x314833ee, "usbnet_skb_return" },
	{ 0xcc950faa, "usbnet_open" },
	{ 0x6fb78c2a, "mii_check_media" },
	{ 0x9ec9fb1c, "usbnet_get_msglevel" },
	{ 0x4172dc03, "netdev_err" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x63a80102, "netdev_warn" },
	{ 0xe20c3d95, "usbnet_unlink_rx_urbs" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x87b98379, "eth_validate_addr" },
	{ 0x91b90296, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4d532703, "usbnet_write_cmd_async" },
	{ 0xdabe6eb5, "usbnet_change_mtu" },
	{ 0xaa81fe59, "phy_connect" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8dc1877d, "phy_mii_ioctl" },
	{ 0xb81960ca, "snprintf" },
	{ 0x22e4bae2, "mii_link_ok" },
	{ 0x99bb8806, "memmove" },
	{ 0x50245fbb, "skb_put" },
	{ 0xf1a0fb0b, "eth_mac_addr" },
	{ 0xf7c56bd2, "usbnet_write_cmd" },
	{ 0xa890255b, "usbnet_set_msglevel" },
	{ 0x2bb5b14, "mdiobus_alloc_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,usbcore";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B345E9BD2BD027AA18007C7");
