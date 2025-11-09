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
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x3764c28e, "__spi_register_driver" },
	{ 0x97255bdf, "strlen" },
	{ 0x84b183ae, "strncmp" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x167c0253, "_dev_err" },
	{ 0x494c8333, "omapdss_device_register" },
	{ 0x6ef36fe7, "omapdss_display_init" },
	{ 0xdae01b98, "backlight_device_register" },
	{ 0x70a19267, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5c014ae7, "omapdss_display_get_modes" },
	{ 0xe2c61a9f, "omapdss_device_unregister" },
	{ 0xe5d20349, "backlight_device_unregister" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f19b8c8, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xb81960ca, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss-base";

MODULE_ALIAS("of:N*T*Comapdss,sony,acx565akm");
MODULE_ALIAS("of:N*T*Comapdss,sony,acx565akmC*");

MODULE_INFO(srcversion, "48BC4EC4FD59F6F9379C27D");
