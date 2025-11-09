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
	{ 0x3b8d03fe, "del_timer" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5c0402ab, "usb_ep_autoconfig_reset" },
	{ 0xc48d5a1f, "param_ops_charp" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0xacf5b256, "mod_timer" },
	{ 0xa2df9fe6, "usb_composite_overwrite_options" },
	{ 0x70a19267, "_dev_info" },
	{ 0x5e514821, "usb_composite_probe" },
	{ 0x6ed6856d, "usb_add_function" },
	{ 0x5eab0b4a, "usb_gadget_wakeup" },
	{ 0xb0bc6df3, "usb_put_function" },
	{ 0xdec19d7b, "usb_composite_unregister" },
	{ 0x8e468b91, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdcd96e8, "usb_string_ids_tab" },
	{ 0x429091bd, "usb_add_config_only" },
	{ 0xfef7a7b0, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7b8fb54b, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x820b63f7, "param_ops_uint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "96AB8942FB3B6B42A4D4425");
