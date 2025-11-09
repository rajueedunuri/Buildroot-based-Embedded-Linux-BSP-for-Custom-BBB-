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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x33643607, "ethtool_op_get_ts_info" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xb07c9dc7, "usb_altnum_to_altsetting" },
	{ 0x29d4b792, "usbnet_resume" },
	{ 0x478d8f4c, "hrtimer_active" },
	{ 0x8d8a9d6, "usbnet_probe" },
	{ 0xd56f5708, "usbnet_link_change" },
	{ 0x904485af, "hrtimer_cancel" },
	{ 0x1dcb64e9, "usbnet_disconnect" },
	{ 0xa34e4bd3, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0xcff4bbf8, "usbnet_stop" },
	{ 0xc117d2fe, "usbnet_update_max_qlen" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0xc17747e2, "netif_schedule_queue" },
	{ 0xe6fb4c02, "usbnet_nway_reset" },
	{ 0x77febd, "hrtimer_start_range_ns" },
	{ 0x99046675, "usbnet_set_link_ksettings" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0x1e4cb2a9, "usbnet_get_stats64" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x309399b5, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xfb2e046f, "usbnet_get_link_ksettings" },
	{ 0x4806d057, "usb_driver_claim_interface" },
	{ 0xffa83bb9, "usbnet_get_drvinfo" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6cab3146, "usbnet_start_xmit" },
	{ 0xf242264b, "usbnet_suspend" },
	{ 0x426f5f42, "usbnet_get_link" },
	{ 0x167c0253, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x34f25f3, "usbnet_read_cmd" },
	{ 0x70a19267, "_dev_info" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x21eb2594, "_raw_spin_unlock_bh" },
	{ 0xfd48aa81, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xee73758, "cdc_parse_cdc_header" },
	{ 0x2d2d312e, "usbnet_get_ethernet_addr" },
	{ 0x314833ee, "usbnet_skb_return" },
	{ 0x82e32a9e, "usb_driver_release_interface" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xcc950faa, "usbnet_open" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x9ec9fb1c, "usbnet_get_msglevel" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xe20c3d95, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x87b98379, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x586270bb, "hrtimer_init" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x736f6be9, "usb_ifnum_to_if" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0xf1a0fb0b, "eth_mac_addr" },
	{ 0x1d9167c6, "usbnet_manage_power" },
	{ 0xf7c56bd2, "usbnet_write_cmd" },
	{ 0xa890255b, "usbnet_set_msglevel" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "3AF2C31DEFBD416D77660A7");
