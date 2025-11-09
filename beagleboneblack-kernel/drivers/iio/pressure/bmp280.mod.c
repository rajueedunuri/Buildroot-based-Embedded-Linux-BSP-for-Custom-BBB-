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
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xc87baa2b, "pm_runtime_force_suspend" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x8369f284, "regmap_bulk_read" },
	{ 0xd936c4d, "devm_gpiod_get" },
	{ 0x1df5f98f, "pm_runtime_force_resume" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x2c165f8, "iio_device_unregister" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7a75f19c, "devm_iio_device_alloc" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x63cb78f4, "__iio_device_register" },
	{ 0xc26f3f7e, "irq_get_irq_data" },
	{ 0x167c0253, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x70a19267, "_dev_info" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x68f79fd7, "complete" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xbb99a279, "regmap_write" },
	{ 0xe7007096, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "E5409A225D9B78987B411DD");
