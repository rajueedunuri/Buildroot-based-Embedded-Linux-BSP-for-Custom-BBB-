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
	{ 0x3ce32aef, "musbhs_dma_controller_destroy" },
	{ 0x5ef94111, "musbhs_dma_controller_create" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9fc7bfd4, "platform_device_put" },
	{ 0x63ef751d, "platform_device_add" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x4c06bef9, "platform_device_add_data" },
	{ 0x8b5db9c, "platform_device_add_resources" },
	{ 0x5f754e5a, "memset" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x2182fe53, "of_find_device_by_node" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x8b2f5817, "platform_device_alloc" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xce423b28, "musb_readw" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0xc200c02c, "musb_interrupt" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x7d4cca74, "phy_power_on" },
	{ 0x76b2a703, "phy_init" },
	{ 0x9823d932, "devm_usb_get_phy_by_phandle" },
	{ 0xa9acd377, "devm_phy_get" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xedd006d5, "phy_exit" },
	{ 0x8ac9265, "phy_power_off" },
	{ 0xbfeb161c, "atomic_notifier_call_chain" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xc228b51c, "omap_control_usb_set_mode" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6b11b059, "musb_writeb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7bd47bfe, "musb_readb" },
	{ 0x167c0253, "_dev_err" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb517950a, "musb_writel" },
	{ 0xc3ae8b2b, "musb_readl" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=musb_hdrc";

MODULE_ALIAS("of:N*T*Cti,omap4-musb");
MODULE_ALIAS("of:N*T*Cti,omap4-musbC*");
MODULE_ALIAS("of:N*T*Cti,omap3-musb");
MODULE_ALIAS("of:N*T*Cti,omap3-musbC*");

MODULE_INFO(srcversion, "B4411DB6200AF2E6343E23E");
