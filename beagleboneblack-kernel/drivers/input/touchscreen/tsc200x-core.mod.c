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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa19958fc, "touchscreen_parse_properties" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x8369f284, "regmap_bulk_read" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x91715312, "sprintf" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0x89d1327f, "devm_kasprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x73a90789, "mutex_trylock" },
	{ 0xbb5c00c2, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe608e9ba, "input_event" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x7596103a, "input_set_capability" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x167c0253, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x70a19267, "_dev_info" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xbb99a279, "regmap_write" },
	{ 0xe7007096, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "50EDCFC4C4257DCC0DF24DD");
