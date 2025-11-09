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
	{ 0xb12abed6, "netdev_info" },
	{ 0xcf4a9bc3, "napi_schedule_prep" },
	{ 0x11ee6e23, "netif_carrier_on" },
	{ 0x2a618956, "skb_clone" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x207c4625, "netif_carrier_off" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0x74b91c21, "netif_napi_del" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x45d80560, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x2e176945, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x98203087, "free_netdev" },
	{ 0x37bae835, "register_netdev" },
	{ 0x3913b193, "nla_put" },
	{ 0x59911b9e, "netif_receive_skb" },
	{ 0x167bdad, "netif_napi_add" },
	{ 0x66bd13e1, "rtnl_link_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x30168d66, "of_get_child_by_name" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x47f78bfa, "__napi_schedule" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x8768bc79, "alloc_netdev_mqs" },
	{ 0xe236d87a, "napi_complete_done" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x4172dc03, "netdev_err" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x63a80102, "netdev_warn" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb72b63f7, "rtnl_link_register" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xd0ef7f5e, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B82AA640CBCB58859E43FDB");
