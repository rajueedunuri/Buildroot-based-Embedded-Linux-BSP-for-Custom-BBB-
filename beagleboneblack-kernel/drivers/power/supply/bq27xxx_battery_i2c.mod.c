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
	{ 0x2d3385d3, "system_wq" },
	{ 0x167c0253, "_dev_err" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x5990101a, "bq27xxx_battery_setup" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x89d1327f, "devm_kasprintf" },
	{ 0x3b3a099e, "idr_alloc" },
	{ 0xad19b231, "i2c_smbus_read_i2c_block_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81e9e1d4, "i2c_transfer" },
	{ 0x9d669763, "memcpy" },
	{ 0xcf3e37b6, "bq27xxx_battery_update" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xafa8fc84, "idr_remove" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x17973eb2, "bq27xxx_battery_teardown" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bq27xxx_battery";

MODULE_ALIAS("of:N*T*Cti,bq27200");
MODULE_ALIAS("of:N*T*Cti,bq27200C*");
MODULE_ALIAS("of:N*T*Cti,bq27210");
MODULE_ALIAS("of:N*T*Cti,bq27210C*");
MODULE_ALIAS("of:N*T*Cti,bq27500");
MODULE_ALIAS("of:N*T*Cti,bq27500C*");
MODULE_ALIAS("of:N*T*Cti,bq27510");
MODULE_ALIAS("of:N*T*Cti,bq27510C*");
MODULE_ALIAS("of:N*T*Cti,bq27520");
MODULE_ALIAS("of:N*T*Cti,bq27520C*");
MODULE_ALIAS("of:N*T*Cti,bq27500-1");
MODULE_ALIAS("of:N*T*Cti,bq27500-1C*");
MODULE_ALIAS("of:N*T*Cti,bq27510g1");
MODULE_ALIAS("of:N*T*Cti,bq27510g1C*");
MODULE_ALIAS("of:N*T*Cti,bq27510g2");
MODULE_ALIAS("of:N*T*Cti,bq27510g2C*");
MODULE_ALIAS("of:N*T*Cti,bq27510g3");
MODULE_ALIAS("of:N*T*Cti,bq27510g3C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g1");
MODULE_ALIAS("of:N*T*Cti,bq27520g1C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g2");
MODULE_ALIAS("of:N*T*Cti,bq27520g2C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g3");
MODULE_ALIAS("of:N*T*Cti,bq27520g3C*");
MODULE_ALIAS("of:N*T*Cti,bq27520g4");
MODULE_ALIAS("of:N*T*Cti,bq27520g4C*");
MODULE_ALIAS("of:N*T*Cti,bq27521");
MODULE_ALIAS("of:N*T*Cti,bq27521C*");
MODULE_ALIAS("of:N*T*Cti,bq27530");
MODULE_ALIAS("of:N*T*Cti,bq27530C*");
MODULE_ALIAS("of:N*T*Cti,bq27531");
MODULE_ALIAS("of:N*T*Cti,bq27531C*");
MODULE_ALIAS("of:N*T*Cti,bq27541");
MODULE_ALIAS("of:N*T*Cti,bq27541C*");
MODULE_ALIAS("of:N*T*Cti,bq27542");
MODULE_ALIAS("of:N*T*Cti,bq27542C*");
MODULE_ALIAS("of:N*T*Cti,bq27546");
MODULE_ALIAS("of:N*T*Cti,bq27546C*");
MODULE_ALIAS("of:N*T*Cti,bq27742");
MODULE_ALIAS("of:N*T*Cti,bq27742C*");
MODULE_ALIAS("of:N*T*Cti,bq27545");
MODULE_ALIAS("of:N*T*Cti,bq27545C*");
MODULE_ALIAS("of:N*T*Cti,bq27421");
MODULE_ALIAS("of:N*T*Cti,bq27421C*");
MODULE_ALIAS("of:N*T*Cti,bq27425");
MODULE_ALIAS("of:N*T*Cti,bq27425C*");
MODULE_ALIAS("of:N*T*Cti,bq27426");
MODULE_ALIAS("of:N*T*Cti,bq27426C*");
MODULE_ALIAS("of:N*T*Cti,bq27441");
MODULE_ALIAS("of:N*T*Cti,bq27441C*");
MODULE_ALIAS("of:N*T*Cti,bq27621");
MODULE_ALIAS("of:N*T*Cti,bq27621C*");
MODULE_ALIAS("i2c:bq27200");
MODULE_ALIAS("i2c:bq27210");
MODULE_ALIAS("i2c:bq27500");
MODULE_ALIAS("i2c:bq27510");
MODULE_ALIAS("i2c:bq27520");
MODULE_ALIAS("i2c:bq27500-1");
MODULE_ALIAS("i2c:bq27510g1");
MODULE_ALIAS("i2c:bq27510g2");
MODULE_ALIAS("i2c:bq27510g3");
MODULE_ALIAS("i2c:bq27520g1");
MODULE_ALIAS("i2c:bq27520g2");
MODULE_ALIAS("i2c:bq27520g3");
MODULE_ALIAS("i2c:bq27520g4");
MODULE_ALIAS("i2c:bq27521");
MODULE_ALIAS("i2c:bq27530");
MODULE_ALIAS("i2c:bq27531");
MODULE_ALIAS("i2c:bq27541");
MODULE_ALIAS("i2c:bq27542");
MODULE_ALIAS("i2c:bq27546");
MODULE_ALIAS("i2c:bq27742");
MODULE_ALIAS("i2c:bq27545");
MODULE_ALIAS("i2c:bq27421");
MODULE_ALIAS("i2c:bq27425");
MODULE_ALIAS("i2c:bq27426");
MODULE_ALIAS("i2c:bq27441");
MODULE_ALIAS("i2c:bq27621");

MODULE_INFO(srcversion, "C86DAEF074D316AA7F7E97B");
