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
	{ 0x477acda5, "pci_bus_type" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6bcd111f, "usb_add_hcd" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0x5cf72e0b, "usb_remove_hcd" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x3c19aa18, "__usb_create_hcd" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x8b5e515, "pm_runtime_forbid" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xc48cee79, "usb_put_hcd" },
	{ 0xf5e5e43d, "xhci_init_driver" },
	{ 0x94b09515, "usb_hcd_is_primary_hcd" },
	{ 0x1300b995, "xhci_run" },
	{ 0xc730f6cc, "xhci_resume" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x9cb2468e, "device_wakeup_enable" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x9823d932, "devm_usb_get_phy_by_phandle" },
	{ 0x9613d86c, "xhci_gen_setup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xaaeee2, "xhci_suspend" },
	{ 0xecc6d3a, "of_fwnode_ops" },
	{ 0x1d4f24dc, "device_property_present" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,xhci-hcd";

MODULE_ALIAS("acpi*:PNP0D10:*");
MODULE_ALIAS("of:N*T*Cgeneric-xhci");
MODULE_ALIAS("of:N*T*Cgeneric-xhciC*");
MODULE_ALIAS("of:N*T*Cxhci-platform");
MODULE_ALIAS("of:N*T*Cxhci-platformC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-375-xhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-375-xhciC*");
MODULE_ALIAS("of:N*T*Cmarvell,armada-380-xhci");
MODULE_ALIAS("of:N*T*Cmarvell,armada-380-xhciC*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7790");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7790C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7791");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7791C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7793");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7793C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7795");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7795C*");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7796");
MODULE_ALIAS("of:N*T*Crenesas,xhci-r8a7796C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-xhci");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-xhciC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-xhci");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-xhciC*");

MODULE_INFO(srcversion, "EEE6A313EA50DFE39FD3566");
