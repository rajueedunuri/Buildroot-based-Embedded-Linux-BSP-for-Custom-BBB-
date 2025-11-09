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
	{ 0x5d787991, "skb_queue_head" },
	{ 0xf4488750, "release_sock" },
	{ 0xd67ce8fa, "sock_init_data" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xd5f12953, "pn_sock_unhash" },
	{ 0xb70789e, "__might_fault" },
	{ 0xe7e7c014, "sk_stream_wait_connect" },
	{ 0x207c4625, "netif_carrier_off" },
	{ 0xe1382a09, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xcc8d459b, "skb_recv_datagram" },
	{ 0x3401d408, "skb_set_owner_w" },
	{ 0xc830caa, "pn_sock_hash" },
	{ 0x4c1d689, "phonet_proto_register" },
	{ 0x4e2a4779, "sock_rfree" },
	{ 0xe25f56be, "sk_common_release" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x45d80560, "netif_rx" },
	{ 0x96841112, "pn_sock_get_port" },
	{ 0xc4a9b20f, "__pskb_pull_tail" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x26dfcb04, "sk_alloc" },
	{ 0x17c36819, "skb_copy_datagram_iter" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe5d4f19d, "lock_sock_nested" },
	{ 0x98203087, "free_netdev" },
	{ 0x37bae835, "register_netdev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x352e9022, "skb_push" },
	{ 0xebcbfc11, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5f15bfd8, "__sk_receive_skb" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xd96b0133, "_copy_from_iter_full" },
	{ 0x8768bc79, "alloc_netdev_mqs" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x8dc6f016, "sock_alloc_send_skb" },
	{ 0xad26afdd, "phonet_proto_unregister" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0x674d479e, "pn_skb_send" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0x9df4d12e, "phonet_stream_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x50245fbb, "skb_put" },
	{ 0xa57d6066, "skb_copy_bits" },
	{ 0x80a93b9e, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=phonet";


MODULE_INFO(srcversion, "BC5D32CF0144950DE65ADDB");
