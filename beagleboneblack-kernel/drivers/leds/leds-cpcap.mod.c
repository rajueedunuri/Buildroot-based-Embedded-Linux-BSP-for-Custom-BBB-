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
	{ 0xe7007096, "regulator_enable" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x167c0253, "_dev_err" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x96255154, "devm_of_led_classdev_register" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x3ed9eaff, "device_property_read_string" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7659c7e8, "of_match_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class";

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-red");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-redC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-green");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-greenC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-blue");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-blueC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-adl");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-adlC*");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-cp");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-led-cpC*");

MODULE_INFO(srcversion, "E5847DB713C4CE0109F6F6F");
