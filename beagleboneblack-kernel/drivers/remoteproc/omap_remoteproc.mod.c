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
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xd0a1866d, "mbox_request_channel" },
	{ 0x1000e51, "schedule" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x30b9e8c1, "omap_iommu_domain_deactivate" },
	{ 0x552e82c0, "omap_iommu_domain_activate" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x3b12f40c, "put_device" },
	{ 0x2182fe53, "of_find_device_by_node" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0x79ee4b43, "arm_dma_m_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x4e9d491e, "rproc_get_id" },
	{ 0xa6041085, "rproc_add" },
	{ 0xf9a5feb4, "of_reserved_mem_device_init_by_idx" },
	{ 0x93c05bc5, "devm_ioremap" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x553689d8, "of_property_count_elems_of_size" },
	{ 0x205252ca, "of_property_read_u32_index" },
	{ 0xb2a6944b, "of_get_address" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0x5b219efa, "syscon_regmap_lookup_by_phandle" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8acf2c36, "rproc_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0xc7057fac, "rproc_vq_interrupt" },
	{ 0x70a19267, "_dev_info" },
	{ 0x68f79fd7, "complete" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0xd893e7f5, "mbox_free_channel" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0xd3626f15, "mbox_send_message" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x9d86b281, "of_reserved_mem_device_release" },
	{ 0xbf188aaf, "rproc_free" },
	{ 0x1a87df6, "rproc_del" },
	{ 0x1ad0f3df, "rproc_report_crash" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x167c0253, "_dev_err" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=remoteproc";

MODULE_ALIAS("of:N*T*Cti,omap4-dsp");
MODULE_ALIAS("of:N*T*Cti,omap4-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap4-ipu");
MODULE_ALIAS("of:N*T*Cti,omap4-ipuC*");
MODULE_ALIAS("of:N*T*Cti,omap5-dsp");
MODULE_ALIAS("of:N*T*Cti,omap5-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap5-ipu");
MODULE_ALIAS("of:N*T*Cti,omap5-ipuC*");
MODULE_ALIAS("of:N*T*Cti,dra7-dsp");
MODULE_ALIAS("of:N*T*Cti,dra7-dspC*");
MODULE_ALIAS("of:N*T*Cti,dra7-ipu");
MODULE_ALIAS("of:N*T*Cti,dra7-ipuC*");

MODULE_INFO(srcversion, "12C3BB13C89B4D268A3C4B9");
