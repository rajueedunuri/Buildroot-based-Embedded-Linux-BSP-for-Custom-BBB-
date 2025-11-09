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
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x17c907a2, "thermal_cooling_device_unregister" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0xa359d3ab, "of_prop_next_u32" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x8712dd72, "devm_gpiod_get_index" },
	{ 0x6c6bf017, "gpiod_count" },
	{ 0x70a19267, "_dev_info" },
	{ 0x114f3058, "thermal_of_cooling_device_register" },
	{ 0xb0f35580, "devm_hwmon_device_register_with_groups" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xe7e15ba2, "gpiod_direction_output" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x18e4522e, "kobject_uevent" },
	{ 0xdc3a7e18, "sysfs_notify" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91715312, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cgpio-fan");
MODULE_ALIAS("of:N*T*Cgpio-fanC*");

MODULE_INFO(srcversion, "379FA6181FC7B8675788FE5");
