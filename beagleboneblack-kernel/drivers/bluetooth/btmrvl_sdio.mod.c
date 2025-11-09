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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x167c0253, "_dev_err" },
	{ 0x2df2d613, "btmrvl_register_hdev" },
	{ 0xe41470fb, "btmrvl_add_card" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xcf5227b0, "irq_of_parse_and_map" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0x20c5c447, "sdio_set_block_size" },
	{ 0x9d34b9ee, "sdio_claim_irq" },
	{ 0x83e86204, "sdio_enable_func" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9096eafc, "btmrvl_send_module_cfg_cmd" },
	{ 0xe1ca9df7, "btmrvl_remove_card" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x84c888f, "pm_wakeup_dev_event" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6e9a907e, "btmrvl_interrupt" },
	{ 0x37a0cba, "kfree" },
	{ 0xe99ba13e, "sdio_writesb" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0xaef13b97, "btmrvl_check_evtpkt" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x279225b9, "btmrvl_process_event" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x50245fbb, "skb_put" },
	{ 0xe0d10054, "sdio_readsb" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xc0f42957, "sdio_disable_func" },
	{ 0xf60e46f5, "sdio_release_irq" },
	{ 0x8d40e393, "btmrvl_enable_hs" },
	{ 0x5daa4da1, "sdio_set_host_pm_flags" },
	{ 0x2919cc0c, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x60c5c238, "hci_resume_dev" },
	{ 0x2cd9b8d0, "sdio_get_host_pm_caps" },
	{ 0x68a5be6a, "dev_coredumpv" },
	{ 0x9d669763, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7442057, "bt_info" },
	{ 0x57a53199, "sdio_readb" },
	{ 0x37236de6, "sdio_f0_readb" },
	{ 0x91715312, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47022514, "bt_err" },
	{ 0x56a89a72, "sdio_release_host" },
	{ 0xe4b5b994, "sdio_writeb" },
	{ 0x460115c7, "sdio_claim_host" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "B8A9893DDA8D5F9CA90E9CE");
