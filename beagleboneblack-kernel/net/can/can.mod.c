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
	{ 0xd830d369, "kmem_cache_destroy" },
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xd67ce8fa, "sock_init_data" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd981555c, "seq_puts" },
	{ 0x2a618956, "skb_clone" },
	{ 0xfc8e73e7, "proc_create_net_single" },
	{ 0x6e617324, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd2b16da0, "remove_proc_entry" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x302dea3b, "lock_release" },
	{ 0x5f50623e, "sock_get_timestamp" },
	{ 0xd03b91bb, "PDE_DATA" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x2e176945, "sock_efree" },
	{ 0x61393095, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0x1b197cb8, "netif_rx_ni" },
	{ 0xbf77f20, "unregister_pernet_subsys" },
	{ 0x26dfcb04, "sk_alloc" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x7c32d0f0, "printk" },
	{ 0x515c7e1d, "seq_putc" },
	{ 0x9a59d85a, "kmem_cache_free" },
	{ 0xbda86bf2, "proc_mkdir_data" },
	{ 0xebcbfc11, "sk_free" },
	{ 0x88c3109c, "dev_remove_pack" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0xacf5b256, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xd159ab8, "module_put" },
	{ 0xd275bf72, "proto_register" },
	{ 0x417482d5, "kmem_cache_alloc" },
	{ 0x2a21a928, "sock_register" },
	{ 0x9a2b0e85, "___ratelimit" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x92807db, "proto_unregister" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x8237f9a4, "register_pernet_subsys" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xf8d4da5d, "kmem_cache_create" },
	{ 0x12715e2a, "_raw_write_unlock_bh" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x643e0ce5, "call_rcu_sched" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x435d71bd, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb101baa, "dev_add_pack" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6daec1d7, "dev_queue_xmit" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E0B525C5299754AA246FC05");
