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
	{ 0xcac33857, "input_unregister_handler" },
	{ 0x39d9b327, "input_register_handler" },
	{ 0x167c0253, "_dev_err" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xdafb6fea, "of_led_classdev_register" },
	{ 0xf4dc3ec3, "input_open_device" },
	{ 0x3a299d03, "input_register_handle" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xb1f16974, "input_inject_event" },
	{ 0x8ff0ae8, "input_unregister_handle" },
	{ 0x484b4699, "input_close_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f41b675, "led_classdev_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class";

MODULE_ALIAS("input:b*v*p*e*-e*11,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "2D614DDF600FC7ED4012CAE");
