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
	{ 0x2d3385d3, "system_wq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0x3c1ccb77, "lbs_resume" },
	{ 0xe99ba13e, "sdio_writesb" },
	{ 0x83e86204, "sdio_enable_func" },
	{ 0x9d34b9ee, "sdio_claim_irq" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x3c23c5ab, "lbs_stop_card" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x7a3fa396, "netdev_alert" },
	{ 0x3f7f5669, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2cd9b8d0, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x564980af, "lbs_start_card" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xb315c635, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8b13d252, "lbs_get_firmware_async" },
	{ 0xf23f8c05, "lbs_cmd_copyback" },
	{ 0xafe230c1, "lbs_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0xf64277de, "lbs_debug" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe0d10054, "sdio_readsb" },
	{ 0x53ac71eb, "sdio_unregister_driver" },
	{ 0x780f7568, "lbs_remove_card" },
	{ 0x913174f, "sdio_f0_writeb" },
	{ 0x5daa4da1, "sdio_set_host_pm_flags" },
	{ 0x4d12962d, "lbs_process_rxed_packet" },
	{ 0x70a19267, "_dev_info" },
	{ 0xf60e46f5, "sdio_release_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x36a236fe, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xa85156c6, "sdio_align_size" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x514f2d86, "lbs_add_card" },
	{ 0x37236de6, "sdio_f0_readb" },
	{ 0x1cd553e9, "mmc_add_host" },
	{ 0x4172dc03, "netdev_err" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xa29bcbc0, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x38c3cb96, "sdio_register_driver" },
	{ 0x460115c7, "sdio_claim_host" },
	{ 0x50245fbb, "skb_put" },
	{ 0x20c5c447, "sdio_set_block_size" },
	{ 0xc0f42957, "sdio_disable_func" },
	{ 0x56a89a72, "sdio_release_host" },
	{ 0x7dcc472b, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "895013DA65E11C9E6CC1E17");
