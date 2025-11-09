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
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x45d80560, "netif_rx" },
	{ 0x50245fbb, "skb_put" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x94d74cda, "skb_add_rx_frag" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x83af7bf9, "__put_page" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0x14082d7e, "page_address" },
	{ 0x9bb9fbf1, "__alloc_pages_nodemask" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37bae835, "register_netdev" },
	{ 0x309399b5, "usb_set_interface" },
	{ 0x98203087, "free_netdev" },
	{ 0x4806d057, "usb_driver_claim_interface" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x8768bc79, "alloc_netdev_mqs" },
	{ 0x736f6be9, "usb_ifnum_to_if" },
	{ 0xee73758, "cdc_parse_cdc_header" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0x82e32a9e, "usb_driver_release_interface" },
	{ 0xe8b8ee36, "phonet_header_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,phonet";

MODULE_ALIAS("usb:v0421p*d*dc*dsc*dp*ic02iscFEip*in*");

MODULE_INFO(srcversion, "4363F5185206D315660B5E5");
