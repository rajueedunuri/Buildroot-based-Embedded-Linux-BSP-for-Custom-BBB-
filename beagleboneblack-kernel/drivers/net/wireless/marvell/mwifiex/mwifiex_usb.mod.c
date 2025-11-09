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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0x6e78d363, "mwifiex_cancel_hs" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0xdfc54b54, "mwifiex_write_data_complete" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x140fa33c, "mwifiex_process_sleep_confirm_resp" },
	{ 0xa6220c33, "mwifiex_queue_main_work" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xb0df2a12, "_mwifiex_dbg" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x6b5e1f5f, "mwifiex_add_card" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0x352e9022, "skb_push" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x167c0253, "_dev_err" },
	{ 0x31bd9748, "mwifiex_alloc_dma_align_buf" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xcf2af4e4, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x246c6ef5, "usb_reset_device" },
	{ 0x220aba45, "usb_bulk_msg" },
	{ 0x650b0d69, "usb_put_dev" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x61c74a11, "mwifiex_process_hs_config" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x38105db0, "mwifiex_multi_chan_resync" },
	{ 0x9d669763, "memcpy" },
	{ 0x2b58c4d9, "mwifiex_fw_dump_event" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xeea057b1, "mwifiex_deauthenticate_all" },
	{ 0x405b38ae, "mwifiex_remove_card" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x776b98d0, "mwifiex_enable_hs" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xf3031bdf, "mwifiex_init_shutdown_fw" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0xebb2d65, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex,usbcore";

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "E1BD49B56DEF797F9F13245");
