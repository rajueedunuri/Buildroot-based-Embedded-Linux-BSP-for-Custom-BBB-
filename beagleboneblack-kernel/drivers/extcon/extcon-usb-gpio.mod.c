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
	{ 0x167c0253, "_dev_err" },
	{ 0x37a5f5b9, "device_set_wakeup_capable" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x4d620440, "gpiod_set_debounce" },
	{ 0x278501a7, "devm_extcon_dev_register" },
	{ 0x231bd629, "devm_extcon_dev_allocate" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x2b1dbeeb, "extcon_set_state_sync" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xd4304824, "pinctrl_pm_select_sleep_state" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbfc1490b, "pinctrl_pm_select_default_state" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:extcon-usb-gpio");
MODULE_ALIAS("of:N*T*Clinux,extcon-usb-gpio");
MODULE_ALIAS("of:N*T*Clinux,extcon-usb-gpioC*");

MODULE_INFO(srcversion, "2284113199DCC4F2619E7B2");
