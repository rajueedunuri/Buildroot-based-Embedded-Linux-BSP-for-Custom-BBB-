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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xdf5a354, "usb_remove_phy" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x205252ca, "of_property_read_u32_index" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf3144b66, "devm_phy_create" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0xa3f50f5a, "omap_control_phy_power" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xacc914c2, "usb_get_phy" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x167c0253, "_dev_err" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x5b219efa, "syscon_regmap_lookup_by_phandle" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x42a7450a, "usb_add_phy_dev" },
	{ 0xc4eca51c, "of_phy_simple_xlate" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xef00d130, "__devm_of_phy_provider_register" },
	{ 0x2182fe53, "of_find_device_by_node" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x1d4f24dc, "device_property_present" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap-usb2");
MODULE_ALIAS("of:N*T*Cti,omap-usb2C*");
MODULE_ALIAS("of:N*T*Cti,omap5-usb2");
MODULE_ALIAS("of:N*T*Cti,omap5-usb2C*");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2C*");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2-phy2");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2-phy2C*");
MODULE_ALIAS("of:N*T*Cti,am437x-usb2");
MODULE_ALIAS("of:N*T*Cti,am437x-usb2C*");
MODULE_ALIAS("of:N*T*Cti,am654-usb2");
MODULE_ALIAS("of:N*T*Cti,am654-usb2C*");

MODULE_INFO(srcversion, "4D8904FD3E25793984E90F8");
