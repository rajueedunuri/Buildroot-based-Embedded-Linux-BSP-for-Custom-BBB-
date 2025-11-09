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
	{ 0x2cee324a, "input_ff_create_memless" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x6b27251b, "devm_pwm_get" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x63544fa4, "pwm_apply_state" },
	{ 0xe7007096, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("of:N*T*Cpwm-vibrator");
MODULE_ALIAS("of:N*T*Cpwm-vibratorC*");

MODULE_INFO(srcversion, "EE0F36333273457C8FB45C4");
