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
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x167c0253, "_dev_err" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xe9ed19fd, "pwmchip_add" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7f7af0e2, "pwmchip_remove" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x822137e2, "arm_heavy_mb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am3352-ecap");
MODULE_ALIAS("of:N*T*Cti,am3352-ecapC*");
MODULE_ALIAS("of:N*T*Cti,am33xx-ecap");
MODULE_ALIAS("of:N*T*Cti,am33xx-ecapC*");

MODULE_INFO(srcversion, "B9305CF705E0525EFAA592E");
