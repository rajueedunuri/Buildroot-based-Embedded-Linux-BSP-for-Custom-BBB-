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
	{ 0x70a19267, "_dev_info" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x98b2cbcf, "devm_spi_register_controller" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0x6e3bd147, "dma_request_chan_by_mask" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x205252ca, "of_property_read_u32_index" },
	{ 0x5b219efa, "syscon_regmap_lookup_by_phandle" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x3b12f40c, "put_device" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x2f8406fe, "__spi_alloc_controller" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x4230f0c2, "spi_finalize_current_message" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb6ad6d76, "spi_controller_dma_unmap_mem_op_data" },
	{ 0xe06699b2, "sg_next" },
	{ 0x65fa7d5f, "spi_controller_dma_map_mem_op_data" },
	{ 0x216d759a, "mmiocpy" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x167c0253, "_dev_err" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x68f79fd7, "complete" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x2f425f5, "dma_release_channel" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x5f94410d, "spi_controller_suspend" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x822137e2, "arm_heavy_mb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,dra7xxx-qspi");
MODULE_ALIAS("of:N*T*Cti,dra7xxx-qspiC*");
MODULE_ALIAS("of:N*T*Cti,am4372-qspi");
MODULE_ALIAS("of:N*T*Cti,am4372-qspiC*");

MODULE_INFO(srcversion, "75C69CFDD2EB13B138B149A");
