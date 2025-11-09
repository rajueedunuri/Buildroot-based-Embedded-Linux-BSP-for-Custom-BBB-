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
	{ 0x76b2a703, "phy_init" },
	{ 0xd10feff0, "clk_bulk_get" },
	{ 0x34df2c83, "usb_gadget_unmap_request_by_dev" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x437cb008, "platform_device_add_properties" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0x4411cefc, "usb_gadget_map_request_by_dev" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x78bb04dc, "mem_map" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x8dda7239, "single_open" },
	{ 0xa9acd377, "devm_phy_get" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9496f4cd, "phy_calibrate" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0x97255bdf, "strlen" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0x9d173ed2, "clk_bulk_prepare" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0xfb03ebf0, "single_release" },
	{ 0xb70789e, "__might_fault" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x259d27f2, "usb_del_gadget_udc" },
	{ 0x68828cbf, "usb_gadget_giveback_request" },
	{ 0x6e617324, "seq_printf" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xe06699b2, "sg_next" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x36d35e2e, "trace_event_buffer_reserve" },
	{ 0xbde8da43, "pm_runtime_allow" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0x8b5e515, "pm_runtime_forbid" },
	{ 0x5aec3a74, "phy_set_mode_ext" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0xd4a5646e, "seq_read" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9df84be3, "usb_gadget_set_state" },
	{ 0x8ac9265, "phy_power_off" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x7201ab87, "phy_remove_lookup" },
	{ 0x239a6181, "trace_define_field" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x8be64688, "usb_gadget_udc_reset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0xaab2e54b, "of_graph_get_remote_node" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xd87aa25f, "extcon_register_notifier" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x8b2f5817, "platform_device_alloc" },
	{ 0x1fa9f70c, "trace_event_reg" },
	{ 0x7d4cca74, "phy_power_on" },
	{ 0x63ef751d, "platform_device_add" },
	{ 0x8caacee8, "extcon_find_edev_by_node" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x3ed9eaff, "device_property_read_string" },
	{ 0x84ac8e7b, "phy_create_lookup" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0x84d162a3, "device_property_read_u8_array" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0xd4304824, "pinctrl_pm_select_sleep_state" },
	{ 0x167c0253, "_dev_err" },
	{ 0x394e6832, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x80b818bf, "devm_kmemdup" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x16a42703, "rcu_read_lock_sched_held" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2614671, "clk_bulk_enable" },
	{ 0x8b5db9c, "platform_device_add_resources" },
	{ 0xef29fcdd, "clk_bulk_put" },
	{ 0x70a19267, "_dev_info" },
	{ 0x93910a15, "debugfs_create_regset32" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0xedd006d5, "phy_exit" },
	{ 0xc5b760af, "devm_usb_get_phy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xd79f6482, "trace_event_ignore_this_pid" },
	{ 0x572f6e1d, "usb_get_maximum_speed" },
	{ 0x6bdb1a8f, "usb_add_gadget_udc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x38a0bc2e, "__pm_runtime_set_status" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x6ce3e45c, "usb_ep_set_maxpacket_limit" },
	{ 0x22859fa1, "trace_event_buffer_commit" },
	{ 0xbfc1490b, "pinctrl_pm_select_default_state" },
	{ 0xe6c8e1, "dev_driver_string" },
	{ 0x7ed7cc63, "usb_get_dr_mode" },
	{ 0x7e7cc6, "phy_pm_runtime_get_sync" },
	{ 0x57a231cc, "usb_decode_ctrl" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xcb150704, "extcon_get_edev_by_phandle" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0x11ba8557, "event_triggers_call" },
	{ 0x4cb88a85, "of_usb_get_phy_mode" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xfe86419a, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x9823d932, "devm_usb_get_phy_by_phandle" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2be83e5a, "trace_event_raw_init" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x35c08ca2, "trace_raw_output_prep" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x68f79fd7, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0x7a568548, "phy_pm_runtime_put_sync" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0x7558bfd7, "extcon_unregister_notifier" },
	{ 0x1d4f24dc, "device_property_present" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9fc7bfd4, "platform_device_put" },
	{ 0x532447e, "extcon_get_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Csnps,dwc3");
MODULE_ALIAS("of:N*T*Csnps,dwc3C*");
MODULE_ALIAS("of:N*T*Csynopsys,dwc3");
MODULE_ALIAS("of:N*T*Csynopsys,dwc3C*");

MODULE_INFO(srcversion, "CF85BF83DE4C3850B4D79AD");
