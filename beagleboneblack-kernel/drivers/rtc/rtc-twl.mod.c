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
	{ 0x8f01afd6, "twl6030_interrupt_mask" },
	{ 0x9ec0e639, "twl6030_interrupt_unmask" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x4cb91ab6, "devm_rtc_device_register" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x70a19267, "_dev_info" },
	{ 0xc99e2a55, "twl_rev" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x167c0253, "_dev_err" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x32ac61c1, "rtc_update_irq" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf9722676, "twl_i2c_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,twl4030-rtc");
MODULE_ALIAS("of:N*T*Cti,twl4030-rtcC*");

MODULE_INFO(srcversion, "67FB61C16FCC54E3ED2FEC7");
