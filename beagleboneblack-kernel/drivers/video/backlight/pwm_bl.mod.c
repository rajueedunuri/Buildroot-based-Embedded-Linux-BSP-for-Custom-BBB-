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
	{ 0x59e5070d, "__do_div64" },
	{ 0xe7007096, "regulator_enable" },
	{ 0xfcbbd5a3, "devm_kfree" },
	{ 0x9689d20a, "pwm_request" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x167c0253, "_dev_err" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0xeafe36dc, "devm_gpio_request_one" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x5f754e5a, "memset" },
	{ 0xe7e15ba2, "gpiod_direction_output" },
	{ 0x1f88123, "regulator_is_enabled" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0xdae01b98, "backlight_device_register" },
	{ 0x6b27251b, "devm_pwm_get" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0x883a7634, "gpiod_get_direction" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb2bfce59, "pwm_free" },
	{ 0xe5d20349, "backlight_device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x63544fa4, "pwm_apply_state" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cpwm-backlight");
MODULE_ALIAS("of:N*T*Cpwm-backlightC*");

MODULE_INFO(srcversion, "838C381FCE832BACFB3AF01");
