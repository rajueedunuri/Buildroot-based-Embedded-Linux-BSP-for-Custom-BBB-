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
	{ 0x2d3385d3, "system_wq" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0xb4e452af, "omapdss_device_disconnect" },
	{ 0xe2c61a9f, "omapdss_device_unregister" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x3b12f40c, "put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0xc2702565, "devm_backlight_device_register" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x494c8333, "omapdss_device_register" },
	{ 0x6ef36fe7, "omapdss_display_init" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x830fd2b5, "of_find_backlight_by_node" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0xe284f775, "devm_regulator_get_optional" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x98ed45a4, "videomode_from_timing" },
	{ 0x4b3b484c, "of_get_display_timing" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0xd936c4d, "devm_gpiod_get" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5c014ae7, "omapdss_display_get_modes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0x7acda787, "cancel_delayed_work" },
	{ 0x70a19267, "_dev_info" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x5f754e5a, "memset" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0xb81960ca, "snprintf" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss-base";

MODULE_ALIAS("of:N*T*Comapdss,panel-dsi-cm");
MODULE_ALIAS("of:N*T*Comapdss,panel-dsi-cmC*");

MODULE_INFO(srcversion, "B2CC90D6BADC02C6C2C7A32");
