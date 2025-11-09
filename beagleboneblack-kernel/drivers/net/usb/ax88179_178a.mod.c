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
	{ 0x1dcb64e9, "usbnet_disconnect" },
	{ 0x8d8a9d6, "usbnet_probe" },
	{ 0xe5b78504, "ethtool_op_get_link" },
	{ 0xe6fb4c02, "usbnet_nway_reset" },
	{ 0xa890255b, "usbnet_set_msglevel" },
	{ 0x9ec9fb1c, "usbnet_get_msglevel" },
	{ 0x1e4cb2a9, "usbnet_get_stats64" },
	{ 0xfd48aa81, "usbnet_tx_timeout" },
	{ 0x87b98379, "eth_validate_addr" },
	{ 0x6cab3146, "usbnet_start_xmit" },
	{ 0xcff4bbf8, "usbnet_stop" },
	{ 0xcc950faa, "usbnet_open" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xf242264b, "usbnet_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x29d4b792, "usbnet_resume" },
	{ 0x9d669763, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc185bee3, "usbnet_get_endpoints" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11ee6e23, "netif_carrier_on" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc117d2fe, "usbnet_update_max_qlen" },
	{ 0x8dc53209, "mii_nway_restart" },
	{ 0xbc1b4834, "mii_ethtool_gset" },
	{ 0x5f754e5a, "memset" },
	{ 0x34f25f3, "usbnet_read_cmd" },
	{ 0xdf6f443, "usbnet_read_cmd_nopm" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x122170da, "crc32_le" },
	{ 0x4d532703, "usbnet_write_cmd_async" },
	{ 0xb12abed6, "netdev_info" },
	{ 0xd56f5708, "usbnet_link_change" },
	{ 0xf7c56bd2, "usbnet_write_cmd" },
	{ 0x8c8cf1d4, "usbnet_write_cmd_nopm" },
	{ 0x63a80102, "netdev_warn" },
	{ 0xb4039c77, "generic_mii_ioctl" },
	{ 0x9c40356f, "mii_ethtool_get_link_ksettings" },
	{ 0xee307e34, "mii_ethtool_set_link_ksettings" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x314833ee, "usbnet_skb_return" },
	{ 0x2a618956, "skb_clone" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x352e9022, "skb_push" },
	{ 0x3d95a8c1, "pskb_expand_head" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,usbcore";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "939AC35FBA15593ACF0DEC3");
