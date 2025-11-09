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
	{ 0x4a1dc02b, "proc_dointvec_minmax" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0xf4488750, "release_sock" },
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xd67ce8fa, "sock_init_data" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x3046d508, "sock_no_setsockopt" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8d6f8cb, "unregister_net_sysctl_table" },
	{ 0x743fea6c, "sock_no_getsockopt" },
	{ 0xd981555c, "seq_puts" },
	{ 0xb70789e, "__might_fault" },
	{ 0x2a618956, "skb_clone" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6e617324, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7259c3b0, "rtnl_notify" },
	{ 0xd2b16da0, "remove_proc_entry" },
	{ 0xe1382a09, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xcc8d459b, "skb_recv_datagram" },
	{ 0xa7bce815, "prepare_to_wait_exclusive" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0xbac1a30e, "sock_i_ino" },
	{ 0x741756c0, "seq_pad" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xe25f56be, "sk_common_release" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0xa9b35104, "sock_common_recvmsg" },
	{ 0x45d80560, "netif_rx" },
	{ 0xb018ce79, "sock_no_sendpage" },
	{ 0x302dea3b, "lock_release" },
	{ 0xc4a9b20f, "__pskb_pull_tail" },
	{ 0x5884a83, "sock_no_mmap" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x61393095, "lock_acquire" },
	{ 0x1b197cb8, "netif_rx_ni" },
	{ 0x7ef731fa, "sock_no_socketpair" },
	{ 0xbf77f20, "unregister_pernet_subsys" },
	{ 0x26dfcb04, "sk_alloc" },
	{ 0xf7738c7b, "rtnl_register_module" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x17c36819, "skb_copy_datagram_iter" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe5d4f19d, "lock_sock_nested" },
	{ 0x3913b193, "nla_put" },
	{ 0x740e88bf, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x352e9022, "skb_push" },
	{ 0xa26e530c, "sock_no_accept" },
	{ 0xebcbfc11, "sk_free" },
	{ 0x74148fd8, "dev_get_by_index" },
	{ 0x88c3109c, "dev_remove_pack" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x71abaf71, "init_net" },
	{ 0x21861402, "__dev_get_by_index" },
	{ 0x7be83769, "sock_no_shutdown" },
	{ 0x5f15bfd8, "__sk_receive_skb" },
	{ 0xd159ab8, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd275bf72, "proto_register" },
	{ 0xed866972, "rtnl_set_sk_err" },
	{ 0x78ca43cf, "netlink_capable" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x335db24a, "datagram_poll" },
	{ 0x2a21a928, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x92807db, "proto_unregister" },
	{ 0xd96b0133, "_copy_from_iter_full" },
	{ 0x8dc6f016, "sock_alloc_send_skb" },
	{ 0x8237f9a4, "register_pernet_subsys" },
	{ 0x3d95a8c1, "pskb_expand_head" },
	{ 0x7f2afef2, "proc_create_net_data" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x7fccaa9a, "sock_common_setsockopt" },
	{ 0xd489e56f, "sock_no_connect" },
	{ 0x12715e2a, "_raw_write_unlock_bh" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc073ec43, "___pskb_trim" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x54849668, "sock_common_getsockopt" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x435d71bd, "_raw_write_lock_bh" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8b618d08, "overflowuid" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xcb101baa, "dev_add_pack" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6daec1d7, "dev_queue_xmit" },
	{ 0x3a35059d, "register_net_sysctl" },
	{ 0x50245fbb, "skb_put" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x5f55ecaf, "__nlmsg_put" },
	{ 0x1a2e25d9, "sock_i_uid" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0x80a93b9e, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1A23E63142EB8828045DF8E");
