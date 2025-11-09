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
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x60a5a125, "regmap_read" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4d667090, "input_free_device" },
	{ 0x167c0253, "_dev_err" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x70a19267, "_dev_info" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe62af1f7, "mod_delayed_work_on" },
	{ 0x84c888f, "pm_wakeup_dev_event" },
	{ 0xe608e9ba, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xce2840e7, "irq_set_irq_wake" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,palmas-pwrbutton");
MODULE_ALIAS("of:N*T*Cti,palmas-pwrbuttonC*");

MODULE_INFO(srcversion, "C6B17435449F41D85C781DC");
