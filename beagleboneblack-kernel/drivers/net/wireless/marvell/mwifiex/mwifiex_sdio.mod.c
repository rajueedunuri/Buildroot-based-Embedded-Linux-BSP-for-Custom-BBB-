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
	{ 0xe4b5b994, "sdio_writeb" },
	{ 0x57a53199, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6e78d363, "mwifiex_cancel_hs" },
	{ 0xe99ba13e, "sdio_writesb" },
	{ 0x83e86204, "sdio_enable_func" },
	{ 0x9d34b9ee, "sdio_claim_irq" },
	{ 0xfb06423e, "mmc_hw_reset" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x90a5b5d, "mwifiex_disable_auto_ds" },
	{ 0x6ea96cd1, "__dev_kfree_skb_any" },
	{ 0x140fa33c, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xc8071d73, "mwifiex_main_process" },
	{ 0x91715312, "sprintf" },
	{ 0xb4908a89, "mwifiex_prepare_fw_dump_info" },
	{ 0x2cd9b8d0, "sdio_get_host_pm_caps" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xb0df2a12, "_mwifiex_dbg" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x6b5e1f5f, "mwifiex_add_card" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0x58d3aa18, "mwifiex_shutdown_sw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x167c0253, "_dev_err" },
	{ 0x31bd9748, "mwifiex_alloc_dma_align_buf" },
	{ 0xe0d10054, "sdio_readsb" },
	{ 0x53ac71eb, "sdio_unregister_driver" },
	{ 0x5daa4da1, "sdio_set_host_pm_flags" },
	{ 0x90829b81, "mwifiex_dnld_fw" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf60e46f5, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37236de6, "sdio_f0_readb" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xdfa27f23, "mwifiex_reinit_sw" },
	{ 0xd542e795, "mwifiex_handle_rx_packet" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xeea057b1, "mwifiex_deauthenticate_all" },
	{ 0x405b38ae, "mwifiex_remove_card" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x776b98d0, "mwifiex_enable_hs" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x75015b38, "mwifiex_upload_device_dump" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x38c3cb96, "sdio_register_driver" },
	{ 0x460115c7, "sdio_claim_host" },
	{ 0x823302a5, "mwifiex_drv_info_dump" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xf3031bdf, "mwifiex_init_shutdown_fw" },
	{ 0x20c5c447, "sdio_set_block_size" },
	{ 0xc0f42957, "sdio_disable_func" },
	{ 0x56a89a72, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "8943F0A26198AF544BFA663");
