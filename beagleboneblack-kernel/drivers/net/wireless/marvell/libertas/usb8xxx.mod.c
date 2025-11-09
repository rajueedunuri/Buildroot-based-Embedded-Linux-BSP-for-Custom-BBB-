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
	{ 0xb12abed6, "netdev_info" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe04c905f, "lbs_host_sleep_cfg" },
	{ 0x3c1ccb77, "lbs_resume" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x3c23c5ab, "lbs_stop_card" },
	{ 0x3f7f5669, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x564980af, "lbs_start_card" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb315c635, "lbs_queue_event" },
	{ 0x3bcf329b, "lbs_send_tx_feedback" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x8b13d252, "lbs_get_firmware_async" },
	{ 0xf23f8c05, "lbs_cmd_copyback" },
	{ 0xafe230c1, "lbs_suspend" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0xf64277de, "lbs_debug" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x780f7568, "lbs_remove_card" },
	{ 0x4d12962d, "lbs_process_rxed_packet" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xcf2af4e4, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x246c6ef5, "usb_reset_device" },
	{ 0x36a236fe, "lbs_host_to_card_done" },
	{ 0x650b0d69, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x514f2d86, "lbs_add_card" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x50245fbb, "skb_put" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x7dcc472b, "lbs_notify_command_response" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas,usbcore";

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B535990995FF5F553E82554");
