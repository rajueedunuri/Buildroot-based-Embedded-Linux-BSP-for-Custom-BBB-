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
	{ 0x167c0253, "_dev_err" },
	{ 0x70a19267, "_dev_info" },
	{ 0x7182606, "devm_hwmon_device_register_with_info" },
	{ 0x125a41b, "devm_add_action" },
	{ 0xa5083211, "__devm_regmap_init_i2c" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xbb99a279, "regmap_write" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cti,tmp102");
MODULE_ALIAS("of:N*T*Cti,tmp102C*");
MODULE_ALIAS("i2c:tmp102");

MODULE_INFO(srcversion, "E4BF82C7B489E2A1D7AF53F");
