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
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x4cb91ab6, "devm_rtc_device_register" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x32ac61c1, "rtc_update_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-rtc");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-rtcC*");

MODULE_INFO(srcversion, "6FC044CEED4244D485FAC7C");
