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
	{ 0x499fda6d, "__pci_register_driver" },
	{ 0xf5e5e43d, "xhci_init_driver" },
	{ 0x32b9e982, "pci_read_config_byte" },
	{ 0x98335042, "pci_set_mwi" },
	{ 0x9613d86c, "xhci_gen_setup" },
	{ 0x27c1e63f, "usb_amd_find_chipset_info" },
	{ 0xd7ac968b, "xhci_dbg_trace" },
	{ 0xb2e6e2f3, "pci_d3cold_disable" },
	{ 0xaaeee2, "xhci_suspend" },
	{ 0x9e9f1089, "usb_enable_intel_xhci_ports" },
	{ 0xc730f6cc, "xhci_resume" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x40d10831, "xhci_shutdown" },
	{ 0x6bcd111f, "usb_add_hcd" },
	{ 0xda04287c, "xhci_ext_cap_init" },
	{ 0xf28d1e6d, "usb_create_shared_hcd" },
	{ 0xbfa9b9cd, "usb_hcd_pci_probe" },
	{ 0xf01e4560, "pci_set_power_state" },
	{ 0x7a16a246, "usb_hcd_pci_remove" },
	{ 0xc48cee79, "usb_put_hcd" },
	{ 0x5cf72e0b, "usb_remove_hcd" },
	{ 0x94b09515, "usb_hcd_is_primary_hcd" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x3069809a, "__tracepoint_xhci_dbg_quirks" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0x16a42703, "rcu_read_lock_sched_held" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,xhci-hcd";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");

MODULE_INFO(srcversion, "B0B605E8D1477F23E9EB1C9");
