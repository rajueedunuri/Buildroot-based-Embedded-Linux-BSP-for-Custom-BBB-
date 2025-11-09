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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x312621e0, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0xc48d5a1f, "param_ops_charp" },
	{ 0xa760460, "fsg_common_set_cdev" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa2df9fe6, "usb_composite_overwrite_options" },
	{ 0x70a19267, "_dev_info" },
	{ 0x5e514821, "usb_composite_probe" },
	{ 0x6ed6856d, "usb_add_function" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0xb0bc6df3, "usb_put_function" },
	{ 0xdec19d7b, "usb_composite_unregister" },
	{ 0x8e468b91, "usb_get_function" },
	{ 0xbdcd96e8, "usb_string_ids_tab" },
	{ 0xb97e294e, "param_array_ops" },
	{ 0xfef7a7b0, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7b8fb54b, "param_ops_ushort" },
	{ 0x820b63f7, "param_ops_uint" },
	{ 0x6cd31caf, "usb_remove_function" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_mass_storage,libcomposite";


MODULE_INFO(srcversion, "71FCF0E913E80A209B9DE7E");
