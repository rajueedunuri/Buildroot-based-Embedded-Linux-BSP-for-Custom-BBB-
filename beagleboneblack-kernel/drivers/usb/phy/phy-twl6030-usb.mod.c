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
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x70a19267, "_dev_info" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x9ec0e639, "twl6030_interrupt_unmask" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x8dec8d1e, "device_create_file" },
	{ 0x3117a814, "regulator_get" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xd48f33, "omap_usb2_set_comparator" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x9492220, "musb_mailbox" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x167c0253, "_dev_err" },
	{ 0xdc3a7e18, "sysfs_notify" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xf59b850f, "device_remove_file" },
	{ 0xfbf9f30d, "regulator_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8f01afd6, "twl6030_interrupt_mask" },
	{ 0x7acda787, "cancel_delayed_work" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=phy-omap-usb2,musb_hdrc";

MODULE_ALIAS("of:N*T*Cti,twl6030-usb");
MODULE_ALIAS("of:N*T*Cti,twl6030-usbC*");

MODULE_INFO(srcversion, "08BCF502205F80010BEB29B");
