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
	{ 0x81517b94, "ehci_init_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x9cb2468e, "device_wakeup_enable" },
	{ 0x6bcd111f, "usb_add_hcd" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9823d932, "devm_usb_get_phy_by_phandle" },
	{ 0xaeb7eb0b, "usb_create_hcd" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xc48cee79, "usb_put_hcd" },
	{ 0x5cf72e0b, "usb_remove_hcd" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,ehci-hcd";

MODULE_ALIAS("of:N*T*Cti,ehci-omap");
MODULE_ALIAS("of:N*T*Cti,ehci-omapC*");

MODULE_INFO(srcversion, "C3B7BC811328732EC538472");
