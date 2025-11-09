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
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x5992758a, "of_get_property" },
	{ 0xd0893109, "of_get_next_child" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x6b27251b, "devm_pwm_get" },
	{ 0xdafb6fea, "of_led_classdev_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0xcdd6f195, "devm_of_pwm_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x63544fa4, "pwm_apply_state" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f41b675, "led_classdev_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class";

MODULE_ALIAS("of:N*T*Cpwm-leds");
MODULE_ALIAS("of:N*T*Cpwm-ledsC*");

MODULE_INFO(srcversion, "E264E6F2D89BCB37C3FBBD9");
