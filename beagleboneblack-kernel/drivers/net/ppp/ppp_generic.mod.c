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
	{ 0x4ce45ad6, "register_netdevice" },
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x5d787991, "skb_queue_head" },
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x84fc1341, "register_pernet_device" },
	{ 0xc8b84a9b, "up_read" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xc92cb7d9, "bpf_prog_create" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb70789e, "__might_fault" },
	{ 0xa34e4bd3, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0xa5d2e60, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x513aec5a, "__register_chrdev" },
	{ 0xb81c1ae2, "bpf_prog_destroy" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x7dcb1948, "__rwlock_init" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0xd0da2937, "__put_net" },
	{ 0xc7c6d341, "skb_scrub_packet" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x73a90789, "mutex_trylock" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0x3a83a5b2, "down_read" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x45d80560, "netif_rx" },
	{ 0x302dea3b, "lock_release" },
	{ 0xc4a9b20f, "__pskb_pull_tail" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x61393095, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2535e8af, "idr_destroy" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x17c36819, "skb_copy_datagram_iter" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd3c95c5, "unregister_pernet_device" },
	{ 0x39d2bc93, "ns_capable" },
	{ 0x98203087, "free_netdev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x352e9022, "skb_push" },
	{ 0xef8eb9fd, "netdev_printk" },
	{ 0x153311da, "noop_llseek" },
	{ 0xd42ab1b7, "device_create" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x3b3a099e, "idr_alloc" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0xc17cffe, "up_write" },
	{ 0x4e576c7d, "down_write" },
	{ 0x58d65c6d, "fput" },
	{ 0x66bd13e1, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xafa8fc84, "idr_remove" },
	{ 0xd159ab8, "module_put" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x82656a11, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x21eb2594, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x8768bc79, "alloc_netdev_mqs" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x3d95a8c1, "pskb_expand_head" },
	{ 0x4172dc03, "netdev_err" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x764aefbd, "skb_pull_rcsum" },
	{ 0x2b0f24d5, "unregister_netdevice_queue" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xdb81c951, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x12715e2a, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x70813722, "_raw_read_lock_bh" },
	{ 0x7b171f86, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d4380fd, "fget" },
	{ 0xb72b63f7, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0xca9677f5, "class_destroy" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x435d71bd, "_raw_write_lock_bh" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x50245fbb, "skb_put" },
	{ 0x66661ff5, "idr_find" },
	{ 0xa57d6066, "skb_copy_bits" },
	{ 0xdd978dea, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x18c185a8, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "5581FA83D37F49F1F3955EB");
