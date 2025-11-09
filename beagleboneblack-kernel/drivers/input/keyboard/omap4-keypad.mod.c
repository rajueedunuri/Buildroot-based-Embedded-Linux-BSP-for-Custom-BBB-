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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x4d667090, "input_free_device" },
	{ 0x167c0253, "_dev_err" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x9f66dbf8, "matrix_keypad_build_keymap" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xe97c4103, "ioremap" },
	{ 0xae9849dd, "__request_region" },
	{ 0x5992758a, "of_get_property" },
	{ 0xe0cb3565, "matrix_keypad_parse_properties" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe608e9ba, "input_event" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x4384eb42, "__release_region" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("of:N*T*Cti,omap4-keypad");
MODULE_ALIAS("of:N*T*Cti,omap4-keypadC*");

MODULE_INFO(srcversion, "C544B834811BFA547CEDCEE");
