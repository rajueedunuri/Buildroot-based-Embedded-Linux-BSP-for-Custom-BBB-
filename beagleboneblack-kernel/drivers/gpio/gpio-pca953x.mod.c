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
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x6c1639fb, "devm_gpiochip_add_data" },
	{ 0x5f754e5a, "memset" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x110c3dd1, "i2c_adapter_depth" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x2c21043b, "gpiochip_get_data" },
	{ 0xa9fd6595, "i2c_smbus_read_byte_data" },
	{ 0x6547117b, "i2c_smbus_write_i2c_block_data" },
	{ 0xad19b231, "i2c_smbus_read_i2c_block_data" },
	{ 0xa4fed27f, "i2c_smbus_write_word_data" },
	{ 0xc48e6d20, "i2c_smbus_write_byte_data" },
	{ 0xb84e0f55, "i2c_smbus_read_word_data" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x167c0253, "_dev_err" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,pca9505");
MODULE_ALIAS("of:N*T*Cnxp,pca9505C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9534");
MODULE_ALIAS("of:N*T*Cnxp,pca9534C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9535");
MODULE_ALIAS("of:N*T*Cnxp,pca9535C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9536");
MODULE_ALIAS("of:N*T*Cnxp,pca9536C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9537");
MODULE_ALIAS("of:N*T*Cnxp,pca9537C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9538");
MODULE_ALIAS("of:N*T*Cnxp,pca9538C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9539");
MODULE_ALIAS("of:N*T*Cnxp,pca9539C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9554");
MODULE_ALIAS("of:N*T*Cnxp,pca9554C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9555");
MODULE_ALIAS("of:N*T*Cnxp,pca9555C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9556");
MODULE_ALIAS("of:N*T*Cnxp,pca9556C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9557");
MODULE_ALIAS("of:N*T*Cnxp,pca9557C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9574");
MODULE_ALIAS("of:N*T*Cnxp,pca9574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9575");
MODULE_ALIAS("of:N*T*Cnxp,pca9575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9698");
MODULE_ALIAS("of:N*T*Cnxp,pca9698C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524");
MODULE_ALIAS("of:N*T*Cnxp,pcal6524C*");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555a");
MODULE_ALIAS("of:N*T*Cnxp,pcal9555aC*");
MODULE_ALIAS("of:N*T*Cmaxim,max7310");
MODULE_ALIAS("of:N*T*Cmaxim,max7310C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7312");
MODULE_ALIAS("of:N*T*Cmaxim,max7312C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7313");
MODULE_ALIAS("of:N*T*Cmaxim,max7313C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7315");
MODULE_ALIAS("of:N*T*Cmaxim,max7315C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7318");
MODULE_ALIAS("of:N*T*Cmaxim,max7318C*");
MODULE_ALIAS("of:N*T*Cti,pca6107");
MODULE_ALIAS("of:N*T*Cti,pca6107C*");
MODULE_ALIAS("of:N*T*Cti,pca9536");
MODULE_ALIAS("of:N*T*Cti,pca9536C*");
MODULE_ALIAS("of:N*T*Cti,tca6408");
MODULE_ALIAS("of:N*T*Cti,tca6408C*");
MODULE_ALIAS("of:N*T*Cti,tca6416");
MODULE_ALIAS("of:N*T*Cti,tca6416C*");
MODULE_ALIAS("of:N*T*Cti,tca6424");
MODULE_ALIAS("of:N*T*Cti,tca6424C*");
MODULE_ALIAS("of:N*T*Connn,pca9654");
MODULE_ALIAS("of:N*T*Connn,pca9654C*");
MODULE_ALIAS("of:N*T*Cexar,xra1202");
MODULE_ALIAS("of:N*T*Cexar,xra1202C*");
MODULE_ALIAS("acpi*:INT3491:*");
MODULE_ALIAS("i2c:pca9505");
MODULE_ALIAS("i2c:pca9534");
MODULE_ALIAS("i2c:pca9535");
MODULE_ALIAS("i2c:pca9536");
MODULE_ALIAS("i2c:pca9537");
MODULE_ALIAS("i2c:pca9538");
MODULE_ALIAS("i2c:pca9539");
MODULE_ALIAS("i2c:pca9554");
MODULE_ALIAS("i2c:pca9555");
MODULE_ALIAS("i2c:pca9556");
MODULE_ALIAS("i2c:pca9557");
MODULE_ALIAS("i2c:pca9574");
MODULE_ALIAS("i2c:pca9575");
MODULE_ALIAS("i2c:pca9698");
MODULE_ALIAS("i2c:pcal6524");
MODULE_ALIAS("i2c:pcal9555a");
MODULE_ALIAS("i2c:max7310");
MODULE_ALIAS("i2c:max7312");
MODULE_ALIAS("i2c:max7313");
MODULE_ALIAS("i2c:max7315");
MODULE_ALIAS("i2c:max7318");
MODULE_ALIAS("i2c:pca6107");
MODULE_ALIAS("i2c:tca6408");
MODULE_ALIAS("i2c:tca6416");
MODULE_ALIAS("i2c:tca6424");
MODULE_ALIAS("i2c:tca9539");
MODULE_ALIAS("i2c:tca9554");
MODULE_ALIAS("i2c:xra1202");

MODULE_INFO(srcversion, "0CA6BEA392EA137C8317A5C");
