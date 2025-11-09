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
	{ 0xe608e9ba, "input_event" },
	{ 0x84c888f, "pm_wakeup_dev_event" },
	{ 0xa226dbe8, "cpcap_sense_virq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x167c0253, "_dev_err" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5e998fda, "platform_get_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmotorola,cpcap-pwrbutton");
MODULE_ALIAS("of:N*T*Cmotorola,cpcap-pwrbuttonC*");

MODULE_INFO(srcversion, "6938FB213E60BC0F0D147A9");
