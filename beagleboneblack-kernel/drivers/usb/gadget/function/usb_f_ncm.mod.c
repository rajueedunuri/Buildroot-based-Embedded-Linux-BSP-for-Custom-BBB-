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
	{ 0xa4e734ae, "usb_gstrings_attach" },
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0x53d8b423, "gether_get_qmult" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xb7353221, "gether_setup_name_default" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0x904485af, "hrtimer_cancel" },
	{ 0xbb685ed3, "gether_get_host_addr_cdc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x288be316, "usb_ep_set_halt" },
	{ 0x34b32a16, "gether_get_ifname" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0xb5cedd32, "gether_set_host_addr" },
	{ 0x1c89350, "gether_get_dev_addr" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x77febd, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x41d3b7f5, "gether_connect" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0x98203087, "free_netdev" },
	{ 0xe8ff4e52, "gether_set_gadget" },
	{ 0x122170da, "crc32_le" },
	{ 0xf364aea6, "gether_get_host_addr" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0xd7d9dc98, "gether_set_qmult" },
	{ 0x167c0253, "_dev_err" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x70a19267, "_dev_info" },
	{ 0xffe29bf0, "gether_register_netdev" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xfbdfbf3c, "gether_set_dev_addr" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x1f39e803, "gether_disconnect" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x586270bb, "hrtimer_init" },
	{ 0xd9e694cb, "usb_assign_descriptors" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x31c458db, "hrtimer_try_to_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x50245fbb, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";


MODULE_INFO(srcversion, "36D5EA3CB2585DEF4A5A1E2");
