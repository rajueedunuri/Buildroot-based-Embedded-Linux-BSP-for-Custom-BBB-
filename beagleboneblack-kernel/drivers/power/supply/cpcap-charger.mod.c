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
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0x8debca55, "iio_read_channel_raw" },
	{ 0x139badf5, "power_supply_changed" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x70a19267, "_dev_info" },
	{ 0x8712dd72, "devm_gpiod_get_index" },
	{ 0xd48f33, "omap_usb2_set_comparator" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x50e74207, "devm_power_supply_register" },
	{ 0x187a6892, "devm_iio_channel_get" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x167c0253, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x2197bf57, "iio_read_channel_processed" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,phy-omap-usb2";

MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-charger");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-chargerC*");

MODULE_INFO(srcversion, "BADAE335A69A311AADB852B");
