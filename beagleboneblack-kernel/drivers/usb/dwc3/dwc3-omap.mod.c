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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xfbfccdc4, "of_platform_populate" },
	{ 0x7b89da3a, "devm_extcon_register_notifier" },
	{ 0xcb150704, "extcon_get_edev_by_phandle" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xe6c8e1, "dev_driver_string" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x2eb5ada7, "of_platform_depopulate" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x532447e, "extcon_get_state" },
	{ 0x167c0253, "_dev_err" },
	{ 0xe7007096, "regulator_enable" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x822137e2, "arm_heavy_mb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,dwc3");
MODULE_ALIAS("of:N*T*Cti,dwc3C*");
MODULE_ALIAS("of:N*T*Cti,am437x-dwc3");
MODULE_ALIAS("of:N*T*Cti,am437x-dwc3C*");

MODULE_INFO(srcversion, "86711AE6879BDDD559137CB");
