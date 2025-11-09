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
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x3764c28e, "__spi_register_driver" },
	{ 0xfcbbd5a3, "devm_kfree" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x98f3a8b8, "of_property_read_variable_u16_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x70a19267, "_dev_info" },
	{ 0x4d620440, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x6742b846, "hwmon_device_register_with_groups" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x3117a814, "regulator_get" },
	{ 0xbb5c00c2, "input_set_abs_params" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x4d667090, "input_free_device" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0x449dfcc1, "spi_setup" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x5f754e5a, "memset" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xfbf9f30d, "regulator_put" },
	{ 0xeefa9a4e, "hwmon_device_unregister" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xe7007096, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe608e9ba, "input_event" },
	{ 0x167c0253, "_dev_err" },
	{ 0x5f19b8c8, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc70dc5ff, "gpiod_get_raw_value" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0x91715312, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "A3A9510F78B981FC598BA2A");
