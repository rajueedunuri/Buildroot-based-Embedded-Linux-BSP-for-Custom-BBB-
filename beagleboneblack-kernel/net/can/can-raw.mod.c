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
	{ 0xf4488750, "release_sock" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xff3fb155, "can_rx_register" },
	{ 0xd8fa0dbc, "can_proto_unregister" },
	{ 0xb70789e, "__might_fault" },
	{ 0x2a618956, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe1382a09, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xcc8d459b, "skb_recv_datagram" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xb018ce79, "sock_no_sendpage" },
	{ 0x302dea3b, "lock_release" },
	{ 0x5884a83, "sock_no_mmap" },
	{ 0x61393095, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0x7ef731fa, "sock_no_socketpair" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe5d4f19d, "lock_sock_nested" },
	{ 0x740e88bf, "sock_no_listen" },
	{ 0xa26e530c, "sock_no_accept" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xebcbfc11, "sk_free" },
	{ 0x74148fd8, "dev_get_by_index" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7be83769, "sock_no_shutdown" },
	{ 0xdb858fc5, "can_ioctl" },
	{ 0x29b7b1b8, "can_send" },
	{ 0x5e3c3fc2, "__sock_recv_ts_and_drops" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x335db24a, "datagram_poll" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xd96b0133, "_copy_from_iter_full" },
	{ 0x485c57b0, "can_proto_register" },
	{ 0x8dc6f016, "sock_alloc_send_skb" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xd489e56f, "sock_no_connect" },
	{ 0x12715e2a, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x435d71bd, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x10dca52e, "can_rx_unregister" },
	{ 0x50245fbb, "skb_put" },
	{ 0x512e2eb0, "_copy_to_iter" },
	{ 0x80a93b9e, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "B7EE842BB5BDB012356121C");
