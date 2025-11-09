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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x25e5f9c1, "cec_register_adapter" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0xe4aa6bd9, "platform_unregister_drivers" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfbfccdc4, "of_platform_populate" },
	{ 0x494c8333, "omapdss_device_register" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x6057c81d, "omapdss_device_init_output" },
	{ 0xd1607a42, "component_unbind_all" },
	{ 0xdd01082e, "schedule_hrtimeout" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0x205252ca, "of_property_read_u32_index" },
	{ 0xe2bd3fc1, "omapdss_device_cleanup_output" },
	{ 0xcc88d9, "component_add" },
	{ 0x13d2f5d1, "cec_received_msg_ts" },
	{ 0xcd04a50a, "drm_format_info" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe9dbbd98, "of_graph_get_port_by_id" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x5846ef76, "omapdss_device_next_output" },
	{ 0x6e617324, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc73e8cd7, "component_bind_all" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x5ed040b0, "pm_set_vt_switch" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x1df426b7, "dss_mgr_start_update" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x4228e990, "component_match_add_release" },
	{ 0xc2b27a3, "omapdss_set_dss" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xf75fc1b2, "component_master_del" },
	{ 0x496d229e, "platform_device_register_full" },
	{ 0xbe2974d8, "omapdss_gather_components" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf845255f, "cec_allocate_adapter" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb8d13cfc, "dss_mgr_set_timings" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x7ae2acc0, "dss_mgr_register_framedone_handler" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7d395a7f, "soc_device_match" },
	{ 0xb4e452af, "omapdss_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x7acda787, "cancel_delayed_work" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xc5786b66, "drm_mode_copy" },
	{ 0x3c328ebc, "dss_mgr_enable" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x109034d, "drm_mode_set_name" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8abfb52e, "drm_mode_duplicate" },
	{ 0xddadce24, "cec_unregister_adapter" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x32d617dc, "drm_display_mode_to_videomode" },
	{ 0x9d61c84d, "syscon_node_to_regmap" },
	{ 0xd64f2cf9, "omapdss_device_connect" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x51124899, "cec_transmit_done_ts" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xcded81d2, "down" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xacf5b256, "mod_timer" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xd4304824, "pinctrl_pm_select_sleep_state" },
	{ 0x377664c9, "hdmi_avi_infoframe_pack" },
	{ 0x167c0253, "_dev_err" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x74335367, "drm_mode_set_crtcinfo" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xf8b96ad1, "devm_free_irq" },
	{ 0x5b219efa, "syscon_regmap_lookup_by_phandle" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd0893109, "of_get_next_child" },
	{ 0xfe836452, "dss_mgr_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xda68af6e, "__platform_register_drivers" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xbfc1490b, "pinctrl_pm_select_default_state" },
	{ 0x22d55af5, "of_graph_get_endpoint_by_regs" },
	{ 0x56cb4a76, "dss_mgr_unregister_framedone_handler" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x2eb5ada7, "of_platform_depopulate" },
	{ 0x9ce19747, "clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0xae06af91, "device_for_each_child" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x8ab5db08, "of_find_node_by_name" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3def203, "component_del" },
	{ 0x9d669763, "memcpy" },
	{ 0x6d177b51, "cec_s_phys_addr" },
	{ 0x885882a3, "up" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfd325845, "drm_mode_probed_add" },
	{ 0xed5144d, "component_master_add_with_match" },
	{ 0x68f79fd7, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0xb284b0fc, "of_property_match_string" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xe2c61a9f, "omapdss_device_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0xabf100ed, "dss_mgr_set_lcd_config" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x1a831df5, "cec_delete_adapter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cec,omapdss-base,drm";

MODULE_ALIAS("of:N*T*Cti,omap2-dss");
MODULE_ALIAS("of:N*T*Cti,omap2-dssC*");
MODULE_ALIAS("of:N*T*Cti,omap3-dss");
MODULE_ALIAS("of:N*T*Cti,omap3-dssC*");
MODULE_ALIAS("of:N*T*Cti,omap4-dss");
MODULE_ALIAS("of:N*T*Cti,omap4-dssC*");
MODULE_ALIAS("of:N*T*Cti,omap5-dss");
MODULE_ALIAS("of:N*T*Cti,omap5-dssC*");
MODULE_ALIAS("of:N*T*Cti,dra7-dss");
MODULE_ALIAS("of:N*T*Cti,dra7-dssC*");

MODULE_INFO(srcversion, "BCA5D61E56A9749BC91F8A0");
