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
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x167c0253, "_dev_err" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d620440, "gpiod_set_debounce" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x37a5f5b9, "device_set_wakeup_capable" },
	{ 0x278501a7, "devm_extcon_dev_register" },
	{ 0x231bd629, "devm_extcon_dev_allocate" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xbb99a279, "regmap_write" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2b1dbeeb, "extcon_set_state_sync" },
	{ 0x60a5a125, "regmap_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xce2840e7, "irq_set_irq_wake" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,palmas-usb");
MODULE_ALIAS("of:N*T*Cti,palmas-usbC*");
MODULE_ALIAS("of:N*T*Cti,palmas-usb-vid");
MODULE_ALIAS("of:N*T*Cti,palmas-usb-vidC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb");
MODULE_ALIAS("of:N*T*Cti,twl6035-usbC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb-vid");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb-vidC*");

MODULE_INFO(srcversion, "05210B5679F0095F9A5DF06");
