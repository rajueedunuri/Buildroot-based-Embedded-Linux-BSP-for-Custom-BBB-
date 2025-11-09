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
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xb12abed6, "netdev_info" },
	{ 0xf7c56bd2, "usbnet_write_cmd" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x34f25f3, "usbnet_read_cmd" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x4d532703, "usbnet_write_cmd_async" },
	{ 0xc185bee3, "usbnet_get_endpoints" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0x50245fbb, "skb_put" },
	{ 0x352e9022, "skb_push" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0xbc4a852e, "skb_copy_expand" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,usbcore";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "624E5C10BE26A3CA7A1FC3E");
