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
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x496d229e, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0x52308d8d, "usb_phy_generic_register" },
	{ 0x9ce19747, "clk_get" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0xc200c02c, "musb_interrupt" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xacc914c2, "usb_get_phy" },
	{ 0xef252b18, "usb_put_phy" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6b11b059, "musb_writeb" },
	{ 0x7bd47bfe, "musb_readb" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xb517950a, "musb_writel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x9d669763, "memcpy" },
	{ 0xc3ae8b2b, "musb_readl" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x483a1c61, "usb_phy_generic_unregister" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x167c0253, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=musb_hdrc";


MODULE_INFO(srcversion, "58E72FEE76A51AC81707C4B");
