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
	{ 0x22e05481, "of_pwm_xlate_with_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe9ed19fd, "pwmchip_add" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5992758a, "of_get_property" },
	{ 0x2182fe53, "of_find_device_by_node" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0x70a19267, "_dev_info" },
	{ 0x167c0253, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x7f7af0e2, "pwmchip_remove" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap-dmtimer-pwm");
MODULE_ALIAS("of:N*T*Cti,omap-dmtimer-pwmC*");

MODULE_INFO(srcversion, "40DCC916A030AAF9E6B1352");
