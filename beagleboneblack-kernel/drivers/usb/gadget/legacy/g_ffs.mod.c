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
	{ 0x7b8fb54b, "param_ops_ushort" },
	{ 0x42ba7a4c, "param_ops_byte" },
	{ 0xb97e294e, "param_array_ops" },
	{ 0xc48d5a1f, "param_ops_charp" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0x4ed6f9cf, "ffs_name_dev" },
	{ 0xf1400997, "ffs_single_dev" },
	{ 0xfef7a7b0, "usb_get_function_instance" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x5e514821, "usb_composite_probe" },
	{ 0xa2df9fe6, "usb_composite_overwrite_options" },
	{ 0x312621e0, "usb_add_config" },
	{ 0xbdcd96e8, "usb_string_ids_tab" },
	{ 0x6cd31caf, "usb_remove_function" },
	{ 0x8e468b91, "usb_get_function" },
	{ 0x6ed6856d, "usb_add_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0bc6df3, "usb_put_function" },
	{ 0xdec19d7b, "usb_composite_unregister" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd159ab8, "module_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,usb_f_fs";


MODULE_INFO(srcversion, "5A5A19DCA501474B6128BFD");
