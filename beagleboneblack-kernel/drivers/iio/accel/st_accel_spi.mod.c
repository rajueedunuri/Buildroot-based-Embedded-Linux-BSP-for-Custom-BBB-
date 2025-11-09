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
	{ 0x17e2cf44, "st_accel_common_probe" },
	{ 0x7ebe5df4, "st_sensors_spi_configure" },
	{ 0x3bd8fb4, "st_sensors_of_name_probe" },
	{ 0x7a75f19c, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2c09ceb0, "st_accel_common_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=st_accel,st_sensors_spi,st_sensors,industrialio";

MODULE_ALIAS("spi:lis3dh");
MODULE_ALIAS("spi:lsm330d_accel");
MODULE_ALIAS("spi:lsm330dl_accel");
MODULE_ALIAS("spi:lsm330dlc_accel");
MODULE_ALIAS("spi:lis331dlh");
MODULE_ALIAS("spi:lsm330_accel");
MODULE_ALIAS("spi:lsm303agr_accel");
MODULE_ALIAS("spi:lis2dh12_accel");
MODULE_ALIAS("spi:lis3l02dq");
MODULE_ALIAS("spi:lng2dm");
MODULE_ALIAS("spi:h3lis331dl_accel");
MODULE_ALIAS("spi:lis331dl_accel");
MODULE_ALIAS("spi:lis3lv02dl_accel");
MODULE_ALIAS("spi:lis2dw12");
MODULE_ALIAS("spi:lis3dhh");
MODULE_ALIAS("of:N*T*Cst,lis302dl-spi");
MODULE_ALIAS("of:N*T*Cst,lis302dl-spiC*");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis3lv02dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accel");
MODULE_ALIAS("of:N*T*Cst,lis3dh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330d-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330dlc-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dlh-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm330-accel");
MODULE_ALIAS("of:N*T*Cst,lsm330-accelC*");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accel");
MODULE_ALIAS("of:N*T*Cst,lsm303agr-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accel");
MODULE_ALIAS("of:N*T*Cst,lis2dh12-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis3l02dq");
MODULE_ALIAS("of:N*T*Cst,lis3l02dqC*");
MODULE_ALIAS("of:N*T*Cst,lng2dm-accel");
MODULE_ALIAS("of:N*T*Cst,lng2dm-accelC*");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,h3lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accel");
MODULE_ALIAS("of:N*T*Cst,lis331dl-accelC*");
MODULE_ALIAS("of:N*T*Cst,lis2dw12");
MODULE_ALIAS("of:N*T*Cst,lis2dw12C*");
MODULE_ALIAS("of:N*T*Cst,lis3dhh");
MODULE_ALIAS("of:N*T*Cst,lis3dhhC*");

MODULE_INFO(srcversion, "09F4546BB312B92796B13E5");
