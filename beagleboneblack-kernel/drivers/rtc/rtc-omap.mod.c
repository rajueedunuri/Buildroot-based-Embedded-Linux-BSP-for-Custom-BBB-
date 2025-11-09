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
	{ 0xc86981ab, "pinconf_generic_dt_free_map" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x70a19267, "_dev_info" },
	{ 0x7bd78a83, "rtc_nvmem_register" },
	{ 0xef63ef3f, "__rtc_register_device" },
	{ 0x61762c5d, "pinctrl_register" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xdd376be3, "devm_rtc_allocate_device" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x32ac61c1, "rtc_update_irq" },
	{ 0x8080965e, "pinctrl_dev_get_drvdata" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdab3fb74, "pinctrl_unregister" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x783ddd58, "pinconf_generic_dt_node_to_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am3352-rtc");
MODULE_ALIAS("of:N*T*Cti,am3352-rtcC*");
MODULE_ALIAS("of:N*T*Cti,da830-rtc");
MODULE_ALIAS("of:N*T*Cti,da830-rtcC*");
MODULE_ALIAS("platform:omap_rtc");
MODULE_ALIAS("platform:am3352-rtc");
MODULE_ALIAS("platform:da830-rtc");

MODULE_INFO(srcversion, "3F9812014F67636CB075B44");
