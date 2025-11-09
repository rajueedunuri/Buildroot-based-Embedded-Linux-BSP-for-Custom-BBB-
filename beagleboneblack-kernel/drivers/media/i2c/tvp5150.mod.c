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
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xeb2cb581, "v4l2_async_register_subdev" },
	{ 0xbdc44ea5, "v4l2_ctrl_new_std_menu_items" },
	{ 0x38836fec, "v4l2_ctrl_new_std" },
	{ 0xeb62312c, "v4l2_ctrl_handler_init_class" },
	{ 0x70a19267, "_dev_info" },
	{ 0xd775ae81, "v4l2_i2c_subdev_init" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x350bc3aa, "of_get_next_available_child" },
	{ 0x30168d66, "of_get_child_by_name" },
	{ 0x4eb83ab, "v4l2_fwnode_endpoint_parse" },
	{ 0x3ca7237, "of_graph_get_next_endpoint" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x209e1c1a, "v4l2_ctrl_handler_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xa139fd2b, "media_device_unregister_entity" },
	{ 0xf93e3771, "media_create_pad_link" },
	{ 0x2da86473, "media_device_register_entity" },
	{ 0x69515cfd, "media_entity_pads_init" },
	{ 0xa9fd6595, "i2c_smbus_read_byte_data" },
	{ 0x167c0253, "_dev_err" },
	{ 0xc48e6d20, "i2c_smbus_write_byte_data" },
	{ 0xd674e488, "v4l2_ctrl_handler_free" },
	{ 0x77a49d14, "v4l2_async_unregister_subdev" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common,v4l2-fwnode,media";

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "53EE0895900870C647156CE");
