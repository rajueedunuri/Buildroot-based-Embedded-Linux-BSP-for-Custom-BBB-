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
	{ 0xda2ea9d, "gpiod_direction_input" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc4eca51c, "of_phy_simple_xlate" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xef00d130, "__devm_of_phy_provider_register" },
	{ 0xf3144b66, "devm_phy_create" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0x188f1fbb, "devm_gpiod_get_array" },
	{ 0xd936c4d, "devm_gpiod_get" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0x167c0253, "_dev_err" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0x68f79fd7, "complete" },
	{ 0x70a19267, "_dev_info" },
	{ 0xd5976d0e, "gpiod_get_array_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe5ac81cf, "gpiod_set_array_value_cansleep" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmotorola,mapphone-mdm6600");
MODULE_ALIAS("of:N*T*Cmotorola,mapphone-mdm6600C*");

MODULE_INFO(srcversion, "46D3EAD7B1EF1CA1E4A5A15");
