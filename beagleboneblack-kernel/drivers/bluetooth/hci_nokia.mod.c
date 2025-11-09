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
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x1b3c1ff8, "__serdev_device_driver_register" },
	{ 0xe57e0861, "btbcm_set_bdaddr" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0x291bd046, "__hci_cmd_sync" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0xff35ae0b, "wait_for_completion_interruptible_timeout" },
	{ 0xc6b0f814, "hci_uart_tx_wakeup" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x74f5d00f, "serdev_device_get_tiocm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49f10551, "serdev_device_set_baudrate" },
	{ 0x96c2623f, "serdev_device_write_flush" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd33afa9, "serdev_device_set_flow_control" },
	{ 0x3b366ae4, "serdev_device_set_tiocm" },
	{ 0x209232a2, "hci_uart_register_device" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0xd936c4d, "devm_gpiod_get" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xc49973b0, "gpiod_get_value" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x68f79fd7, "complete" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9a5ed4c7, "h4_recv_buf" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x50245fbb, "skb_put" },
	{ 0xe33ee17e, "__skb_pad" },
	{ 0x352e9022, "skb_push" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x15869a6f, "serdev_device_wait_until_sent" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1894083, "hci_uart_unregister_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btbcm,bluetooth,hci_uart";

MODULE_ALIAS("of:N*T*Cnokia,h4p-bluetooth");
MODULE_ALIAS("of:N*T*Cnokia,h4p-bluetoothC*");

MODULE_INFO(srcversion, "0F6AAC031BD42B76C2F2407");
