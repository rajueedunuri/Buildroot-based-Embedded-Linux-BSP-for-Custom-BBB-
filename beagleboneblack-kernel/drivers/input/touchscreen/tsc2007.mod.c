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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xbb5c00c2, "input_set_abs_params" },
	{ 0xe608e9ba, "input_event" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xb84e0f55, "i2c_smbus_read_word_data" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x125a41b, "devm_add_action" },
	{ 0x420baf84, "of_property_read_u64" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xc70dc5ff, "gpiod_get_raw_value" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007C*");

MODULE_INFO(srcversion, "A8708062585325DC9102ED3");
