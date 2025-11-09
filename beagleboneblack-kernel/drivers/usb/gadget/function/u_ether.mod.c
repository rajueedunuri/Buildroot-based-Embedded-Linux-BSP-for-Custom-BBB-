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
	{ 0xd8e23ba9, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0x97255bdf, "strlen" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x11ee6e23, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x207c4625, "netif_carrier_off" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x45d80560, "netif_rx" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xe2a37d9c, "dev_set_mac_address" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe5b78504, "ethtool_op_get_link" },
	{ 0x98203087, "free_netdev" },
	{ 0x37bae835, "register_netdev" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xedc9fced, "eth_type_trans" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x87b98379, "eth_validate_addr" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0xf1a0fb0b, "eth_mac_addr" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5030dc1b, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "88E8402BC504BE41B8FAFD3");
