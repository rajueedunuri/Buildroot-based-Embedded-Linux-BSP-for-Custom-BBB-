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
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x70a19267, "_dev_info" },
	{ 0xb038326a, "register_c_can_dev" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x205252ca, "of_property_read_u32_index" },
	{ 0x5b219efa, "syscon_regmap_lookup_by_phandle" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x5f19a3ba, "alloc_c_can_dev" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x167c0253, "_dev_err" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x303e8326, "free_c_can_dev" },
	{ 0xb9073f7, "unregister_c_can_dev" },
	{ 0x24c4f0b3, "netif_device_detach" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc0859e44, "c_can_power_down" },
	{ 0x4172dc03, "netdev_err" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xacba7339, "netif_device_attach" },
	{ 0x77f12bcb, "c_can_power_up" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=c_can";

MODULE_ALIAS("of:N*T*Cbosch,c_can");
MODULE_ALIAS("of:N*T*Cbosch,c_canC*");
MODULE_ALIAS("of:N*T*Cbosch,d_can");
MODULE_ALIAS("of:N*T*Cbosch,d_canC*");
MODULE_ALIAS("of:N*T*Cti,dra7-d_can");
MODULE_ALIAS("of:N*T*Cti,dra7-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am3352-d_can");
MODULE_ALIAS("of:N*T*Cti,am3352-d_canC*");
MODULE_ALIAS("of:N*T*Cti,am4372-d_can");
MODULE_ALIAS("of:N*T*Cti,am4372-d_canC*");
MODULE_ALIAS("platform:c_can_platform");
MODULE_ALIAS("platform:c_can");
MODULE_ALIAS("platform:d_can");

MODULE_INFO(srcversion, "CD28ACAF9C879C7B0D4B433");
