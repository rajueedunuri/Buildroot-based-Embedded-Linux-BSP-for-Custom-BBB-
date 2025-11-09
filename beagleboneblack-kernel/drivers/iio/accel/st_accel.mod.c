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
	{ 0x5092725e, "iio_triggered_buffer_cleanup" },
	{ 0x7636d584, "st_sensors_set_dataready_irq" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x88f59be5, "st_sensors_power_enable" },
	{ 0xe3876ef7, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x7631f290, "st_sensors_deallocate_trigger" },
	{ 0xfd80466c, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0x62d1166a, "st_sensors_allocate_trigger" },
	{ 0x2c165f8, "iio_device_unregister" },
	{ 0x34ac5358, "st_sensors_set_fullscale_by_gain" },
	{ 0x517f7221, "st_sensors_check_device_support" },
	{ 0x141de7b4, "st_sensors_validate_device" },
	{ 0x3c625f25, "iio_triggered_buffer_postenable" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x9f3e0f94, "st_sensors_power_disable" },
	{ 0x33a21bf8, "st_sensors_init_sensor" },
	{ 0x63cb78f4, "__iio_device_register" },
	{ 0x70a19267, "_dev_info" },
	{ 0x94a51f7a, "st_sensors_debugfs_reg_access" },
	{ 0x4ea5d75c, "iio_triggered_buffer_predisable" },
	{ 0x878941f, "st_sensors_set_odr" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x55db2324, "st_sensors_sysfs_scale_avail" },
	{ 0xc8a04ab, "st_sensors_set_axis_enable" },
	{ 0xd4d6a963, "st_sensors_read_info_raw" },
	{ 0xd4e709e6, "iio_triggered_buffer_setup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";


MODULE_INFO(srcversion, "134E2CEABFB93230BA5D0F9");
