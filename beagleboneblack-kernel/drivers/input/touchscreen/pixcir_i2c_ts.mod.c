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
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x70a19267, "_dev_info" },
	{ 0xa19958fc, "touchscreen_parse_properties" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0xd936c4d, "devm_gpiod_get" },
	{ 0xe22f7667, "input_mt_init_slots" },
	{ 0xbb5c00c2, "input_set_abs_params" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6a263087, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0x5d9397b7, "input_mt_sync_frame" },
	{ 0x38113ab6, "input_mt_get_slot_by_key" },
	{ 0x66cf4aca, "input_mt_report_slot_state" },
	{ 0xe608e9ba, "input_event" },
	{ 0xeb3005b4, "i2c_transfer_buffer_flags" },
	{ 0x5f754e5a, "memset" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x167c0253, "_dev_err" },
	{ 0xc48e6d20, "i2c_smbus_write_byte_data" },
	{ 0xa9fd6595, "i2c_smbus_read_byte_data" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cpixcir,pixcir_ts");
MODULE_ALIAS("of:N*T*Cpixcir,pixcir_tsC*");
MODULE_ALIAS("of:N*T*Cpixcir,pixcir_tangoc");
MODULE_ALIAS("of:N*T*Cpixcir,pixcir_tangocC*");
MODULE_ALIAS("i2c:pixcir_ts");
MODULE_ALIAS("i2c:pixcir_tangoc");

MODULE_INFO(srcversion, "BD7DBAD0F2E8B1C76BF758B");
