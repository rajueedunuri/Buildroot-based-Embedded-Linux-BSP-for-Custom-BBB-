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
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xfbfccdc4, "of_platform_populate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x89b8e5fe, "of_clk_get" },
	{ 0xacd94fc2, "of_count_phandle_with_args" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2eb5ada7, "of_platform_depopulate" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crockchip,rk3399-dwc3");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-dwc3C*");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-dwc3");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-dwc3C*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-usb-uctl");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-usb-uctlC*");
MODULE_ALIAS("of:N*T*Csprd,sc9860-dwc3");
MODULE_ALIAS("of:N*T*Csprd,sc9860-dwc3C*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-dwc3");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-dwc3C*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-dwc3");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxl-dwc3C*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-dwc3");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-dwc3C*");

MODULE_INFO(srcversion, "4506A483100158038A6B5D4");
