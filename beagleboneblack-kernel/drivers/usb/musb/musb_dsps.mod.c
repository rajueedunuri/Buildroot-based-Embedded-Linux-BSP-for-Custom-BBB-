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
	{ 0xa2730cce, "cppi41_dma_controller_destroy" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x7ed7cc63, "usb_get_dr_mode" },
	{ 0xc1279dab, "of_iomap" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9fc7bfd4, "platform_device_put" },
	{ 0x63ef751d, "platform_device_add" },
	{ 0x4c06bef9, "platform_device_add_data" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x572f6e1d, "usb_get_maximum_speed" },
	{ 0x3a91fcbd, "musb_get_mode" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8b5db9c, "platform_device_add_resources" },
	{ 0x3046f29c, "device_set_of_node_from_dev" },
	{ 0x8b2f5817, "platform_device_alloc" },
	{ 0x5f754e5a, "memset" },
	{ 0x7d4cca74, "phy_power_on" },
	{ 0x76b2a703, "phy_init" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xa9acd377, "devm_phy_get" },
	{ 0x9823d932, "devm_usb_get_phy_by_phandle" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0x93910a15, "debugfs_create_regset32" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x91715312, "sprintf" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x1bbd96e0, "musb_queue_resume_work" },
	{ 0x6b11b059, "musb_writeb" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0x7bd47bfe, "musb_readb" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc200c02c, "musb_interrupt" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0xedd006d5, "phy_exit" },
	{ 0x8ac9265, "phy_power_off" },
	{ 0x514ee7a3, "cppi41_dma_controller_create" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x167c0253, "_dev_err" },
	{ 0xedc03953, "iounmap" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xc3ae8b2b, "musb_readl" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb517950a, "musb_writel" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=musb_hdrc";

MODULE_ALIAS("of:N*T*Cti,musb-am33xx");
MODULE_ALIAS("of:N*T*Cti,musb-am33xxC*");
MODULE_ALIAS("of:N*T*Cti,musb-dm816");
MODULE_ALIAS("of:N*T*Cti,musb-dm816C*");

MODULE_INFO(srcversion, "520AB6474C795653B81B7E6");
