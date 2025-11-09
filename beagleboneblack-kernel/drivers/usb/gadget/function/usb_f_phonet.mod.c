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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0x14082d7e, "page_address" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0x11ee6e23, "netif_carrier_on" },
	{ 0x207c4625, "netif_carrier_off" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x34b32a16, "gether_get_ifname" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0x9bb9fbf1, "__alloc_pages_nodemask" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x45d80560, "netif_rx" },
	{ 0xe8b8ee36, "phonet_header_ops" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0x98203087, "free_netdev" },
	{ 0x37bae835, "register_netdev" },
	{ 0x349daf33, "__dev_kfree_skb_irq" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0x167c0253, "_dev_err" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0x70a19267, "_dev_info" },
	{ 0x8768bc79, "alloc_netdev_mqs" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x94d74cda, "skb_add_rx_frag" },
	{ 0xd9e694cb, "usb_assign_descriptors" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x50245fbb, "skb_put" },
	{ 0x83af7bf9, "__put_page" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,phonet";


MODULE_INFO(srcversion, "256179D6BB0C4828D0D240C");
