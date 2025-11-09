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
	{ 0x2d3385d3, "system_wq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xd9184402, "hsi_free_msg" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0x14082d7e, "page_address" },
	{ 0xd6d748f9, "hsi_alloc_msg" },
	{ 0x11ee6e23, "netif_carrier_on" },
	{ 0xa34e4bd3, "_raw_spin_lock_bh" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x207c4625, "netif_carrier_off" },
	{ 0xe06699b2, "sg_next" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x98f02f99, "_dev_notice" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x45d80560, "netif_rx" },
	{ 0x3fe934aa, "hsi_claim_port" },
	{ 0xc4a9b20f, "__pskb_pull_tail" },
	{ 0xe8b8ee36, "phonet_header_ops" },
	{ 0xe098d1bf, "hsi_async" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x7c32d0f0, "printk" },
	{ 0x98203087, "free_netdev" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x37bae835, "register_netdev" },
	{ 0xdca2dcb5, "hsi_release_port" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x167c0253, "_dev_err" },
	{ 0x64967cdc, "ssi_waketest" },
	{ 0x70a19267, "_dev_info" },
	{ 0x21eb2594, "_raw_spin_unlock_bh" },
	{ 0xa1fe8480, "hsi_get_channel_id_by_name" },
	{ 0x8768bc79, "alloc_netdev_mqs" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x3d95a8c1, "pskb_expand_head" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xe4effcd5, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xa160ff85, "hsi_register_port_event" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xdd13009d, "hsi_unregister_port_event" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x50245fbb, "skb_put" },
	{ 0x4d6591e2, "hsi_register_client_driver" },
	{ 0xe33ee17e, "__skb_pad" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsi,phonet,omap_ssi";


MODULE_INFO(srcversion, "D197266B733B34E1815EE70");
