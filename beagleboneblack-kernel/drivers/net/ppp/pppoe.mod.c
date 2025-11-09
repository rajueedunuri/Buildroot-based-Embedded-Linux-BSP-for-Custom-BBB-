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
	{ 0x5884a83, "sock_no_mmap" },
	{ 0x743fea6c, "sock_no_getsockopt" },
	{ 0x3046d508, "sock_no_setsockopt" },
	{ 0x7be83769, "sock_no_shutdown" },
	{ 0x740e88bf, "sock_no_listen" },
	{ 0xb7b9a5ea, "pppox_ioctl" },
	{ 0x335db24a, "datagram_poll" },
	{ 0xa26e530c, "sock_no_accept" },
	{ 0x7ef731fa, "sock_no_socketpair" },
	{ 0xfe88fad8, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x88c3109c, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd3c95c5, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xcb101baa, "dev_add_pack" },
	{ 0x92807db, "proto_unregister" },
	{ 0xb21e82f2, "register_pppox_proto" },
	{ 0xd275bf72, "proto_register" },
	{ 0x84fc1341, "register_pernet_device" },
	{ 0xd981555c, "seq_puts" },
	{ 0x6e617324, "seq_printf" },
	{ 0x7f2afef2, "proc_create_net_data" },
	{ 0x7dcb1948, "__rwlock_init" },
	{ 0xd2b16da0, "remove_proc_entry" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0xf2156826, "ppp_register_net_channel" },
	{ 0x52200ec2, "dev_get_by_name" },
	{ 0xd96b0133, "_copy_from_iter_full" },
	{ 0x50245fbb, "skb_put" },
	{ 0x9a54fdec, "sock_wmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x17c36819, "skb_copy_datagram_iter" },
	{ 0xcc8d459b, "skb_recv_datagram" },
	{ 0xe1382a09, "sock_queue_rcv_skb" },
	{ 0x72ff7da5, "ppp_input" },
	{ 0x3d95a8c1, "pskb_expand_head" },
	{ 0x6daec1d7, "dev_queue_xmit" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xd67ce8fa, "sock_init_data" },
	{ 0x26dfcb04, "sk_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x5fc36e4, "dev_get_by_name_rcu" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb70789e, "__might_fault" },
	{ 0x5bea71ad, "pskb_trim_rcsum_slow" },
	{ 0x5f15bfd8, "__sk_receive_skb" },
	{ 0x764aefbd, "skb_pull_rcsum" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc4a9b20f, "__pskb_pull_tail" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x2a618956, "skb_clone" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x12715e2a, "_raw_write_unlock_bh" },
	{ 0x435d71bd, "_raw_write_lock_bh" },
	{ 0x7b171f86, "_raw_read_unlock_bh" },
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x70813722, "_raw_read_lock_bh" },
	{ 0x302dea3b, "lock_release" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x61393095, "lock_acquire" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xebcbfc11, "sk_free" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xf4488750, "release_sock" },
	{ 0xc2a03a30, "pppox_unbind_sock" },
	{ 0xe5d4f19d, "lock_sock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "1D528F8FB27460D7E10FC6C");
