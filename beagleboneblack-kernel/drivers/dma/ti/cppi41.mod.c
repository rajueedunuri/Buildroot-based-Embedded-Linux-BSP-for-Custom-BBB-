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
	{ 0x11b0af2e, "of_dma_controller_register" },
	{ 0x38e93cdc, "dma_async_device_register" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xcf5227b0, "irq_of_parse_and_map" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xb284b0fc, "of_property_match_string" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0xe81cb5e2, "dma_async_tx_descriptor_init" },
	{ 0xe06699b2, "sg_next" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc056b172, "__dma_request_channel" },
	{ 0x167c0253, "_dev_err" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0xf8b96ad1, "devm_free_irq" },
	{ 0xc6d40ede, "dma_async_device_unregister" },
	{ 0xf24e1744, "of_dma_controller_free" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am3359-cppi41");
MODULE_ALIAS("of:N*T*Cti,am3359-cppi41C*");
MODULE_ALIAS("of:N*T*Cti,da830-cppi41");
MODULE_ALIAS("of:N*T*Cti,da830-cppi41C*");

MODULE_INFO(srcversion, "39EDCD3D197934032F1438A");
