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
	{ 0x2197bf57, "iio_read_channel_processed" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc4eca51c, "of_phy_simple_xlate" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x42a7450a, "usb_add_phy_dev" },
	{ 0x70a19267, "_dev_info" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x704cbcd5, "iio_get_channel_type" },
	{ 0x187a6892, "devm_iio_channel_get" },
	{ 0x8712dd72, "devm_gpiod_get_index" },
	{ 0xca6c4ee2, "pinctrl_lookup_state" },
	{ 0xe774489c, "devm_pinctrl_get" },
	{ 0xef00d130, "__devm_of_phy_provider_register" },
	{ 0xf3144b66, "devm_phy_create" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xdf5a354, "usb_remove_phy" },
	{ 0x9492220, "musb_mailbox" },
	{ 0x167c0253, "_dev_err" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x56f4f034, "pinctrl_select_state" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,musb_hdrc";

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-usb-phy");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-usb-phyC*");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-usb-phy");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-usb-phyC*");

MODULE_INFO(srcversion, "A03E4099C174C1DA8037EAA");
