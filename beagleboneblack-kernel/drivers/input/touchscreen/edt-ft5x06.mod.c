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
	{ 0x4c3212dd, "simple_open" },
	{ 0x7c7cb43, "simple_attr_release" },
	{ 0x92363698, "simple_attr_write" },
	{ 0xe3374266, "simple_attr_read" },
	{ 0x227d2c1e, "generic_file_llseek" },
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0xb81960ca, "snprintf" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0xe10e0cc9, "debugfs_create_u16" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0xe6c8e1, "dev_driver_string" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x92735101, "devm_device_add_group" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xc26f3f7e, "irq_get_irq_data" },
	{ 0xe22f7667, "input_mt_init_slots" },
	{ 0xa19958fc, "touchscreen_parse_properties" },
	{ 0xbb5c00c2, "input_set_abs_params" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xb70789e, "__might_fault" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x72998378, "simple_attr_open" },
	{ 0x9a2b0e85, "___ratelimit" },
	{ 0xd4b881e8, "input_mt_report_pointer_emulation" },
	{ 0xcd195d49, "touchscreen_report_pos" },
	{ 0x66cf4aca, "input_mt_report_slot_state" },
	{ 0xe608e9ba, "input_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x167c0253, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81e9e1d4, "i2c_transfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ft6236");

MODULE_INFO(srcversion, "73B1A84CDF76E1A31B57543");
