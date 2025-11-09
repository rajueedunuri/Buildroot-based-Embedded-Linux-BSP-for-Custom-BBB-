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
	{ 0xff3fb155, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2a618956, "skb_clone" },
	{ 0x6d126d9a, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0x302dea3b, "lock_release" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x61393095, "lock_acquire" },
	{ 0x5f754e5a, "memset" },
	{ 0xbf77f20, "unregister_pernet_subsys" },
	{ 0xf7738c7b, "rtnl_register_module" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x3913b193, "nla_put" },
	{ 0x9a59d85a, "kmem_cache_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x21861402, "__dev_get_by_index" },
	{ 0x29b7b1b8, "can_send" },
	{ 0x417482d5, "kmem_cache_alloc" },
	{ 0x78ca43cf, "netlink_capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x8237f9a4, "register_pernet_subsys" },
	{ 0xf8d4da5d, "kmem_cache_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x10dca52e, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x820b63f7, "param_ops_uint" },
	{ 0x5f55ecaf, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "646A287289593DC7D21F1AB");
