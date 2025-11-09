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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x167c0253, "_dev_err" },
	{ 0x5f055e8, "mfd_add_devices" },
	{ 0x18c185a8, "__init_rwsem" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeafe36dc, "devm_gpio_request_one" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0xa5083211, "__devm_regmap_init_i2c" },
	{ 0x5f754e5a, "memset" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xed6384e4, "gpiod_set_raw_value" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0x539d79ff, "mfd_remove_devices" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:lm3532");
MODULE_ALIAS("i2c:lm3631");
MODULE_ALIAS("i2c:lm3632");
MODULE_ALIAS("i2c:lm3633");
MODULE_ALIAS("i2c:lm3695");
MODULE_ALIAS("i2c:lm3697");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");
MODULE_ALIAS("of:N*T*Cti,lm3631");
MODULE_ALIAS("of:N*T*Cti,lm3631C*");
MODULE_ALIAS("of:N*T*Cti,lm3632");
MODULE_ALIAS("of:N*T*Cti,lm3632C*");
MODULE_ALIAS("of:N*T*Cti,lm3633");
MODULE_ALIAS("of:N*T*Cti,lm3633C*");
MODULE_ALIAS("of:N*T*Cti,lm3695");
MODULE_ALIAS("of:N*T*Cti,lm3695C*");
MODULE_ALIAS("of:N*T*Cti,lm3697");
MODULE_ALIAS("of:N*T*Cti,lm3697C*");

MODULE_INFO(srcversion, "0B11B4110150318D808763D");
