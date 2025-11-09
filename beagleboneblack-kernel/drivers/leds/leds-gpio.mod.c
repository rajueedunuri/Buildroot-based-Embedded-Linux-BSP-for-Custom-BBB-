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
	{ 0xecc6d3a, "of_fwnode_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x64e40d97, "fwnode_handle_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe8ed618c, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x4893e145, "fwnode_property_read_string" },
	{ 0xad48f3b6, "fwnode_property_present" },
	{ 0x40c00d83, "device_get_next_child_node" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x340751d2, "device_get_child_node_count" },
	{ 0x70a19267, "_dev_info" },
	{ 0xf61417b1, "gpiod_get_value_cansleep" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0xeafe36dc, "devm_gpio_request_one" },
	{ 0x96255154, "devm_of_led_classdev_register" },
	{ 0xe7e15ba2, "gpiod_direction_output" },
	{ 0xa1ce2e8f, "gpiod_cansleep" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class";

MODULE_ALIAS("of:N*T*Cgpio-leds");
MODULE_ALIAS("of:N*T*Cgpio-ledsC*");

MODULE_INFO(srcversion, "2D043265F661FB0225C893F");
