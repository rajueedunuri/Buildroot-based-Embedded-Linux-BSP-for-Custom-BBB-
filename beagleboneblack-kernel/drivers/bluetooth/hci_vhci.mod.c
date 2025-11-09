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
	{ 0xf67985d7, "param_ops_bool" },
	{ 0xae4f420b, "no_llseek" },
	{ 0x6b6948bc, "misc_deregister" },
	{ 0xa28e506e, "misc_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5d787991, "skb_queue_head" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0xd96b0133, "_copy_from_iter_full" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x47022514, "bt_err" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0x7a1c6fe6, "hci_register_dev" },
	{ 0x9a514386, "hci_alloc_dev" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x352e9022, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x1a05b300, "hci_free_dev" },
	{ 0x16d9bd59, "hci_unregister_dev" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "05C02F81A4BE4E80D3E22B9");
