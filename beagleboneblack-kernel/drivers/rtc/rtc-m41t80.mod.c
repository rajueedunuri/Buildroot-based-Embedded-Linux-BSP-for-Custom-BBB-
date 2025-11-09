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
	{ 0xfe0b77e2, "of_clk_src_simple_get" },
	{ 0x70a19267, "_dev_info" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x6a58aa8f, "of_clk_add_provider" },
	{ 0xccb51e26, "clk_register" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xef63ef3f, "__rtc_register_device" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xdd376be3, "devm_rtc_allocate_device" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x32ac61c1, "rtc_update_irq" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x6e617324, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xad19b231, "i2c_smbus_read_i2c_block_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6547117b, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x167c0253, "_dev_err" },
	{ 0xc48e6d20, "i2c_smbus_write_byte_data" },
	{ 0xa9fd6595, "i2c_smbus_read_byte_data" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cst,m41t62");
MODULE_ALIAS("of:N*T*Cst,m41t62C*");
MODULE_ALIAS("of:N*T*Cst,m41t65");
MODULE_ALIAS("of:N*T*Cst,m41t65C*");
MODULE_ALIAS("of:N*T*Cst,m41t80");
MODULE_ALIAS("of:N*T*Cst,m41t80C*");
MODULE_ALIAS("of:N*T*Cst,m41t81");
MODULE_ALIAS("of:N*T*Cst,m41t81C*");
MODULE_ALIAS("of:N*T*Cst,m41t81s");
MODULE_ALIAS("of:N*T*Cst,m41t81sC*");
MODULE_ALIAS("of:N*T*Cst,m41t82");
MODULE_ALIAS("of:N*T*Cst,m41t82C*");
MODULE_ALIAS("of:N*T*Cst,m41t83");
MODULE_ALIAS("of:N*T*Cst,m41t83C*");
MODULE_ALIAS("of:N*T*Cst,m41t84");
MODULE_ALIAS("of:N*T*Cst,m41t84C*");
MODULE_ALIAS("of:N*T*Cst,m41t85");
MODULE_ALIAS("of:N*T*Cst,m41t85C*");
MODULE_ALIAS("of:N*T*Cst,m41t87");
MODULE_ALIAS("of:N*T*Cst,m41t87C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162C*");
MODULE_ALIAS("of:N*T*Cst,rv4162");
MODULE_ALIAS("of:N*T*Cst,rv4162C*");
MODULE_ALIAS("of:N*T*Crv4162");
MODULE_ALIAS("of:N*T*Crv4162C*");
MODULE_ALIAS("i2c:m41t62");
MODULE_ALIAS("i2c:m41t65");
MODULE_ALIAS("i2c:m41t80");
MODULE_ALIAS("i2c:m41t81");
MODULE_ALIAS("i2c:m41t81s");
MODULE_ALIAS("i2c:m41t82");
MODULE_ALIAS("i2c:m41t83");
MODULE_ALIAS("i2c:m41st84");
MODULE_ALIAS("i2c:m41st85");
MODULE_ALIAS("i2c:m41st87");
MODULE_ALIAS("i2c:rv4162");

MODULE_INFO(srcversion, "DFB64531D9B2A3D6F3AE9FA");
