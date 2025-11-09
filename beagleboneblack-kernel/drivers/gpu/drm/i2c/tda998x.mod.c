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
	{ 0xf9a482f9, "msleep" },
	{ 0xe7e15ba2, "gpiod_direction_output" },
	{ 0xcc88d9, "component_add" },
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0xedf9057a, "drm_atomic_helper_connector_reset" },
	{ 0x4d80c583, "drm_bridge_attach" },
	{ 0x81e9e1d4, "i2c_transfer" },
	{ 0xe721a33f, "drm_helper_probe_single_connector_modes" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xab72a42b, "hdmi_infoframe_pack" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x247a0ced, "drm_kms_helper_hotplug_event" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x496d229e, "platform_device_register_full" },
	{ 0x26e61ed9, "drm_encoder_init" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x66551bc7, "drm_detect_monitor_audio" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb6bb4267, "drm_connector_cleanup" },
	{ 0xcfa93eef, "drm_do_get_edid" },
	{ 0xaa427af3, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xefa2cb89, "drm_connector_update_edid_property" },
	{ 0xb72ad0e0, "drm_helper_connector_dpms" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xda2ea9d, "gpiod_direction_input" },
	{ 0xc26f3f7e, "irq_get_irq_data" },
	{ 0xacf5b256, "mod_timer" },
	{ 0xba4611ce, "drm_add_edid_modes" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xeba653ae, "i2c_unregister_device" },
	{ 0x167c0253, "_dev_err" },
	{ 0x28b26467, "drm_connector_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x70a19267, "_dev_info" },
	{ 0x4f58b5ca, "drm_atomic_helper_connector_destroy_state" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x104a067e, "drm_connector_attach_encoder" },
	{ 0x81390ba3, "drm_bridge_remove" },
	{ 0x5992758a, "of_get_property" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xf2d754ef, "drm_encoder_cleanup" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xeb3005b4, "i2c_transfer_buffer_flags" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x217f2248, "drm_of_find_possible_crtcs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x25388cb1, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0xb3def203, "component_del" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x2109a78c, "drm_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x81230b46, "i2c_new_device" },
	{ 0x627ec719, "drm_bridge_add" },
	{ 0x7bee71b7, "gpiod_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc135043e, "gpiod_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_kms_helper,drm";

MODULE_ALIAS("of:N*T*Cnxp,tda998x");
MODULE_ALIAS("of:N*T*Cnxp,tda998xC*");
MODULE_ALIAS("i2c:tda998x");

MODULE_INFO(srcversion, "F9A8EFA79BCBB39752BF404");
