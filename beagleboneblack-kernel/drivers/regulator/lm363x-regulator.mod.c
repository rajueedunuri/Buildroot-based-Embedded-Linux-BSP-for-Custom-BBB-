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
	{ 0xa96800bd, "regulator_is_enabled_regmap" },
	{ 0x3cbe7333, "regulator_disable_regmap" },
	{ 0xa911f00, "regulator_enable_regmap" },
	{ 0xe835d089, "regulator_get_voltage_sel_regmap" },
	{ 0xcf44e91f, "regulator_set_voltage_sel_regmap" },
	{ 0xfc3b58bf, "regulator_list_voltage_linear" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0xba3e02a3, "devm_regulator_register" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0xcb852b7a, "devm_gpiod_get_index_optional" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x27e1eaa1, "rdev_get_id" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CC93F7357E5DDE109B85825");
