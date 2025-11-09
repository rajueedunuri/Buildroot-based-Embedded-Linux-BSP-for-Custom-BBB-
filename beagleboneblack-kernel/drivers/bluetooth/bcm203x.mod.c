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
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47022514, "bt_err" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0xb3c8263f, "cancel_work_sync" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,bluetooth";

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2934CD95FEEF02297AE5328");
