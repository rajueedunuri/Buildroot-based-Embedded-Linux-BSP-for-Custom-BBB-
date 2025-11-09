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
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0xbb5c00c2, "input_set_abs_params" },
	{ 0x4d667090, "input_free_device" },
	{ 0x167c0253, "_dev_err" },
	{ 0x591b3e58, "dev_pm_set_wake_irq" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe608e9ba, "input_event" },
	{ 0x310917fe, "sort" },
	{ 0xdc95698a, "pm_stay_awake" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x37a0cba, "kfree" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0x5ffb6d61, "am335x_tsc_se_clr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0xd11d2704, "dev_pm_clear_wake_irq" },
	{ 0x9263dcf4, "pm_relax" },
	{ 0x87f8393, "am335x_tsc_se_set_cache" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ti_am335x_tscadc";

MODULE_ALIAS("of:N*T*Cti,am3359-tsc");
MODULE_ALIAS("of:N*T*Cti,am3359-tscC*");

MODULE_INFO(srcversion, "C7EED974F79037FACB7E36A");
