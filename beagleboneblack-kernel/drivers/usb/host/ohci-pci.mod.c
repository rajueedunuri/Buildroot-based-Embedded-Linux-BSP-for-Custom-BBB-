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
	{ 0xcafd3265, "usb_hcd_pci_pm_ops" },
	{ 0x5bc57c6f, "usb_hcd_pci_shutdown" },
	{ 0x7a16a246, "usb_hcd_pci_remove" },
	{ 0xbfa9b9cd, "usb_hcd_pci_probe" },
	{ 0x96a8db56, "pci_unregister_driver" },
	{ 0xcbf07940, "ohci_resume" },
	{ 0xaef580f, "ohci_suspend" },
	{ 0x499fda6d, "__pci_register_driver" },
	{ 0xeec28eab, "ohci_init_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x7d2c0be4, "pci_dev_put" },
	{ 0x3bff2c85, "pci_get_slot" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9a7a2676, "ohci_restart" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0xd87fc0a0, "usb_amd_prefetch_quirk" },
	{ 0x27c1e63f, "usb_amd_find_chipset_info" },
	{ 0x4624fecb, "ohci_setup" },
	{ 0xaa911700, "pci_match_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,ohci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i10*");
MODULE_ALIAS("pci:v0000104Ad0000CC01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1FBFA089EF3F1C130F9E08E");
