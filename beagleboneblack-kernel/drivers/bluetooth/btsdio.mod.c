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
	{ 0x53ac71eb, "sdio_unregister_driver" },
	{ 0x38c3cb96, "sdio_register_driver" },
	{ 0xd7442057, "bt_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7a1c6fe6, "hci_register_dev" },
	{ 0x9a514386, "hci_alloc_dev" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5d787991, "skb_queue_head" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0xe99ba13e, "sdio_writesb" },
	{ 0x352e9022, "skb_push" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0x50245fbb, "skb_put" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xe0d10054, "sdio_readsb" },
	{ 0x57a53199, "sdio_readb" },
	{ 0x9d34b9ee, "sdio_claim_irq" },
	{ 0x83e86204, "sdio_enable_func" },
	{ 0x56a89a72, "sdio_release_host" },
	{ 0xc0f42957, "sdio_disable_func" },
	{ 0xf60e46f5, "sdio_release_irq" },
	{ 0xe4b5b994, "sdio_writeb" },
	{ 0x460115c7, "sdio_claim_host" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1a05b300, "hci_free_dev" },
	{ 0x16d9bd59, "hci_unregister_dev" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "2452201ABD58B1B2EF107BB");
