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
	{ 0x815588a6, "clk_enable" },
	{ 0x70a19267, "_dev_info" },
	{ 0xecd41333, "hwrng_register" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xf5e354ce, "devm_kstrdup" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x216d759a, "mmiocpy" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x16dacc60, "hwrng_unregister" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x167c0253, "_dev_err" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rng-core";

MODULE_ALIAS("of:N*T*Cti,omap2-rng");
MODULE_ALIAS("of:N*T*Cti,omap2-rngC*");
MODULE_ALIAS("of:N*T*Cti,omap4-rng");
MODULE_ALIAS("of:N*T*Cti,omap4-rngC*");
MODULE_ALIAS("of:N*T*Cinside-secure,safexcel-eip76");
MODULE_ALIAS("of:N*T*Cinside-secure,safexcel-eip76C*");

MODULE_INFO(srcversion, "F5E7895A675F1FB7F8D5177");
