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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd9184402, "hsi_free_msg" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x227d2c1e, "generic_file_llseek" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x8dda7239, "single_open" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0xbaed6b9, "__pm_runtime_use_autosuspend" },
	{ 0x14082d7e, "page_address" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xdf5b5cdc, "__pm_runtime_suspend" },
	{ 0x309f9e56, "hsi_alloc_controller" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0xfb03ebf0, "single_release" },
	{ 0xd981555c, "seq_puts" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xa34e4bd3, "_raw_spin_lock_bh" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6e617324, "seq_printf" },
	{ 0xd936c4d, "devm_gpiod_get" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xc175f2eb, "of_device_unregister" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0xc113c425, "hsi_unregister_controller" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd4a5646e, "seq_read" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe3374266, "simple_attr_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x76e10025, "pinctrl_pm_select_idle_state" },
	{ 0x1c9b1de, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7c7cb43, "simple_attr_release" },
	{ 0xb204459e, "hsi_port_unregister_clients" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2d2df9c1, "hsi_event" },
	{ 0xe7504fed, "hsi_add_clients_from_dt" },
	{ 0x70a19267, "_dev_info" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x21eb2594, "_raw_spin_unlock_bh" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x8377e558, "__devm_request_region" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xbfc1490b, "pinctrl_pm_select_default_state" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x350bc3aa, "of_get_next_available_child" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0xc49973b0, "gpiod_get_value" },
	{ 0xae06af91, "device_for_each_child" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xfe86419a, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x719e17ff, "clk_notifier_unregister" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0x93c05bc5, "devm_ioremap" },
	{ 0x60091316, "clk_notifier_register" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xbd7bdc74, "pm_runtime_set_autosuspend_delay" },
	{ 0x9343c88a, "hsi_register_controller" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x4aecc616, "of_platform_device_create" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x72998378, "simple_attr_open" },
	{ 0x92363698, "simple_attr_write" },
	{ 0x3b5eb5cd, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hsi";

MODULE_ALIAS("of:N*T*Cti,omap3-ssi-port");
MODULE_ALIAS("of:N*T*Cti,omap3-ssi-portC*");
MODULE_ALIAS("of:N*T*Cti,omap3-ssi");
MODULE_ALIAS("of:N*T*Cti,omap3-ssiC*");

MODULE_INFO(srcversion, "CB81ED153DE7C63AD4A5F76");
