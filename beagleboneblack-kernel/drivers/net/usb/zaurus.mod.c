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
	{ 0x29d4b792, "usbnet_resume" },
	{ 0xf242264b, "usbnet_suspend" },
	{ 0x1dcb64e9, "usbnet_disconnect" },
	{ 0x8d8a9d6, "usbnet_probe" },
	{ 0xa142fd2c, "usbnet_cdc_unbind" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x70a19267, "_dev_info" },
	{ 0xc185bee3, "usbnet_get_endpoints" },
	{ 0x71c90087, "memcmp" },
	{ 0xfbae3174, "usbnet_generic_cdc_bind" },
	{ 0x50245fbb, "skb_put" },
	{ 0x122170da, "crc32_le" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0xbc4a852e, "skb_copy_expand" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ether,usbcore";

MODULE_ALIAS("usb:v04DDp8004d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8005d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8006d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp8007d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9031d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v04DDp9032d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04DDp9050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v22B8p6027d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic02isc0Aip00in*");
MODULE_ALIAS("usb:v07B4p0F02d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v046DpC11Fd*dc*dsc*dp*ic02isc0Aip00in*");

MODULE_INFO(srcversion, "233FE47441A1C13238173A2");
