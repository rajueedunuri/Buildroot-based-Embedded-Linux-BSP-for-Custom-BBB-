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
	{ 0x8431e29d, "__devm_iio_device_register" },
	{ 0x70a19267, "_dev_info" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7a75f19c, "devm_iio_device_alloc" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x167c0253, "_dev_err" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-adc");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-adcC*");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-adc");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-cpcap-adcC*");

MODULE_INFO(srcversion, "E2817072D0CADFD892DFBF0");
