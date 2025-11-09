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
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0xf4488750, "release_sock" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xff3fb155, "can_rx_register" },
	{ 0x478d8f4c, "hrtimer_active" },
	{ 0x29c180c2, "hrtimer_forward" },
	{ 0x3046d508, "sock_no_setsockopt" },
	{ 0x743fea6c, "sock_no_getsockopt" },
	{ 0x904485af, "hrtimer_cancel" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xd8fa0dbc, "can_proto_unregister" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xfc8e73e7, "proc_create_net_single" },
	{ 0x6e617324, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x92967082, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd2b16da0, "remove_proc_entry" },
	{ 0xe1382a09, "sock_queue_rcv_skb" },
	{ 0xcc8d459b, "skb_recv_datagram" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0xbac1a30e, "sock_i_ino" },
	{ 0x91715312, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb018ce79, "sock_no_sendpage" },
	{ 0x302dea3b, "lock_release" },
	{ 0x5884a83, "sock_no_mmap" },
	{ 0xd03b91bb, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2e176945, "sock_efree" },
	{ 0x61393095, "lock_acquire" },
	{ 0x77febd, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x7ef731fa, "sock_no_socketpair" },
	{ 0xbf77f20, "unregister_pernet_subsys" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x7c32d0f0, "printk" },
	{ 0xfe88fad8, "sock_no_bind" },
	{ 0xe5d4f19d, "lock_sock_nested" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x515c7e1d, "seq_putc" },
	{ 0x740e88bf, "sock_no_listen" },
	{ 0xbda86bf2, "proc_mkdir_data" },
	{ 0xa26e530c, "sock_no_accept" },
	{ 0x2e1851d3, "dev_get_by_index_rcu" },
	{ 0xebcbfc11, "sk_free" },
	{ 0x74148fd8, "dev_get_by_index" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x7be83769, "sock_no_shutdown" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdb858fc5, "can_ioctl" },
	{ 0x29b7b1b8, "can_send" },
	{ 0x5e3c3fc2, "__sock_recv_ts_and_drops" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x335db24a, "datagram_poll" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xd96b0133, "_copy_from_iter_full" },
	{ 0x485c57b0, "can_proto_register" },
	{ 0x8237f9a4, "register_pernet_subsys" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x12715e2a, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x586270bb, "hrtimer_init" },
	{ 0x435d71bd, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x10dca52e, "can_rx_unregister" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x50245fbb, "skb_put" },
	{ 0x512e2eb0, "_copy_to_iter" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0xe914e41e, "strcpy" },
	{ 0x80a93b9e, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "A451EDC5BE08EEF697723C1");
