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
	{ 0x96a8db56, "pci_unregister_driver" },
	{ 0xc96f397a, "ehci_suspend" },
	{ 0x499fda6d, "__pci_register_driver" },
	{ 0x81517b94, "ehci_init_driver" },
	{ 0x7c32d0f0, "printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x654da610, "ehci_resume" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37a5f5b9, "device_set_wakeup_capable" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xd9319516, "pci_read_config_dword" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5fb968f9, "pci_read_config_word" },
	{ 0x33832c7, "usb_amd_hang_symptom_quirk" },
	{ 0x27c1e63f, "usb_amd_find_chipset_info" },
	{ 0xf714b0a2, "pci_write_config_byte" },
	{ 0x32b9e982, "pci_read_config_byte" },
	{ 0x98335042, "pci_set_mwi" },
	{ 0x20ba04f4, "ehci_setup" },
	{ 0x6778a12a, "pci_find_capability" },
	{ 0x70a19267, "_dev_info" },
	{ 0xbfa9b9cd, "usb_hcd_pci_probe" },
	{ 0xaa911700, "pci_match_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7a16a246, "usb_hcd_pci_remove" },
	{ 0x319fafb3, "pci_clear_mwi" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,ehci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i20*");
MODULE_ALIAS("pci:v0000104Ad0000CC00sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "66CFD8AF6E81DEEA6065F32");
