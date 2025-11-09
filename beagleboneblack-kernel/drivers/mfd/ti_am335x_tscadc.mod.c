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
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x539d79ff, "mfd_remove_devices" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa359d3ab, "of_prop_next_u32" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xd33eefbb, "__devm_regmap_init_mmio_clk" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x5f055e8, "mfd_add_devices" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x167c0253, "_dev_err" },
	{ 0x30168d66, "of_get_child_by_name" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xae06af91, "device_for_each_child" },
	{ 0x8222be2b, "prepare_to_wait" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xbb99a279, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am3359-tscadc");
MODULE_ALIAS("of:N*T*Cti,am3359-tscadcC*");

MODULE_INFO(srcversion, "6A0E69E9F45E835F4C7EB39");
