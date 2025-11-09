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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x4d667090, "input_free_device" },
	{ 0xb7875c92, "device_set_wakeup_enable" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x66e1d1bf, "usb_alloc_coherent" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x7c32d0f0, "printk" },
	{ 0x70a19267, "_dev_info" },
	{ 0x4dec6038, "memscan" },
	{ 0xe608e9ba, "input_event" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xab4e4dd1, "usb_free_coherent" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc01ip01in*");

MODULE_INFO(srcversion, "0B553CAA2E1322B21229F41");
