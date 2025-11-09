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
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0x7596103a, "input_set_capability" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x84c888f, "pm_wakeup_dev_event" },
	{ 0xe608e9ba, "input_event" },
	{ 0x60a5a125, "regmap_read" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:tps65218-pwrbutton");
MODULE_ALIAS("platform:tps65217-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,tps65217-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,tps65217-pwrbuttonC*");
MODULE_ALIAS("of:N*T*Cti,tps65218-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,tps65218-pwrbuttonC*");

MODULE_INFO(srcversion, "E709A591BE4AFEF822CAAB9");
