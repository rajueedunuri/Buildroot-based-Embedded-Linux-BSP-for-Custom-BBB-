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
	{ 0x75ebb243, "usb_hcd_platform_shutdown" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xeec28eab, "ohci_init_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9cb2468e, "device_wakeup_enable" },
	{ 0x6bcd111f, "usb_add_hcd" },
	{ 0x89b8e5fe, "of_clk_get" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0xaeb7eb0b, "usb_create_hcd" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xc48cee79, "usb_put_hcd" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x5cf72e0b, "usb_remove_hcd" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaef580f, "ohci_suspend" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcbf07940, "ohci_resume" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,ohci-hcd";

MODULE_ALIAS("platform:ohci-platform");
MODULE_ALIAS("of:N*T*Cgeneric-ohci");
MODULE_ALIAS("of:N*T*Cgeneric-ohciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ohci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-6335-ohciC*");
MODULE_ALIAS("of:N*T*Cti,ohci-omap3");
MODULE_ALIAS("of:N*T*Cti,ohci-omap3C*");

MODULE_INFO(srcversion, "2014DFFFECD6ABD63CE122F");
