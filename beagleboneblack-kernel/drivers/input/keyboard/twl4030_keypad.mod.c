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
	{ 0x70a19267, "_dev_info" },
	{ 0xe0cb3565, "matrix_keypad_parse_properties" },
	{ 0x167c0253, "_dev_err" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x9f66dbf8, "matrix_keypad_build_keymap" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xb9a70901, "devm_input_allocate_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0xe608e9ba, "input_event" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xd6a91f54, "twl_i2c_read" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("of:N*T*Cti,twl4030-keypad");
MODULE_ALIAS("of:N*T*Cti,twl4030-keypadC*");

MODULE_INFO(srcversion, "8F4925FFD8E0FAFD756403C");
