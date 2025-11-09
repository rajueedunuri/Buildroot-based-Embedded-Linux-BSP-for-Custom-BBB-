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
	{ 0xd8e23ba9, "flush_work" },
	{ 0xe9842444, "class_find_device" },
	{ 0x3273d121, "led_stop_software_blink" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0x43ce0d9, "led_init_core" },
	{ 0x12ff337e, "led_set_brightness" },
	{ 0xca0879c1, "led_trigger_set_default" },
	{ 0x404b850d, "led_trigger_show" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x6f26ff86, "device_create_with_groups" },
	{ 0x91715312, "sprintf" },
	{ 0x6a3184bd, "devres_alloc_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc17cffe, "up_write" },
	{ 0x4e576c7d, "down_write" },
	{ 0x2fdd287b, "led_trigger_set" },
	{ 0xd159ab8, "module_put" },
	{ 0xa6b4d242, "devres_release" },
	{ 0x3b12f40c, "put_device" },
	{ 0x891e903d, "led_update_brightness" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd0893109, "of_get_next_child" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x24eb7e32, "leds_list" },
	{ 0xda45ac9a, "devres_add" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xf03f1f9f, "led_trigger_store" },
	{ 0xdd3af638, "led_trigger_remove" },
	{ 0xca9677f5, "class_destroy" },
	{ 0xba585fe3, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb284b0fc, "of_property_match_string" },
	{ 0xdd978dea, "__class_create" },
	{ 0xac57f340, "led_set_brightness_nopm" },
	{ 0x18c185a8, "__init_rwsem" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0x49eb7ff9, "leds_list_lock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5AEA4AB850C5761CD6FE7F8");
