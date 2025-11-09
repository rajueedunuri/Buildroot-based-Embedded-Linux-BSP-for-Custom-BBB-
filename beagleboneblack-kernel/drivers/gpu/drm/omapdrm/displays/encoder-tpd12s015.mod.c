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
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd64f2cf9, "omapdss_device_connect" },
	{ 0x494c8333, "omapdss_device_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9f99b9cf, "omapdss_of_find_connected_device" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x8712dd72, "devm_gpiod_get_index" },
	{ 0xcb852b7a, "devm_gpiod_get_index_optional" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xb4e452af, "omapdss_device_disconnect" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2c61a9f, "omapdss_device_unregister" },
	{ 0x62967b15, "omapdss_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=omapdss-base";

MODULE_ALIAS("of:N*T*Comapdss,ti,tpd12s015");
MODULE_ALIAS("of:N*T*Comapdss,ti,tpd12s015C*");

MODULE_INFO(srcversion, "6CE0A67C4035D1B7D7EB804");
