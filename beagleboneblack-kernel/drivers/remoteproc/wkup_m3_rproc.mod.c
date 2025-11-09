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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6041085, "rproc_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb2a6944b, "of_get_address" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0x8acf2c36, "rproc_alloc" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0x167c0253, "_dev_err" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xbf188aaf, "rproc_free" },
	{ 0x1a87df6, "rproc_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=remoteproc";

MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3");
MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3C*");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3C*");

MODULE_INFO(srcversion, "F9963332B817F21FE3ABF8C");
