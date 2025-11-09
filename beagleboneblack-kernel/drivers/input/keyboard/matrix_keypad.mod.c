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
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9d669763, "memcpy" },
	{ 0xe608e9ba, "input_event" },
	{ 0x7ab524c6, "gpiod_get_raw_value_cansleep" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x19d79f4a, "device_init_wakeup" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x1c132024, "request_any_context_irq" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x5992758a, "of_get_property" },
	{ 0xacd94fc2, "of_count_phandle_with_args" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x4d667090, "input_free_device" },
	{ 0x167c0253, "_dev_err" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x9f66dbf8, "matrix_keypad_build_keymap" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xda2ea9d, "gpiod_direction_input" },
	{ 0x1c877783, "gpiod_set_raw_value_cansleep" },
	{ 0x184dd1b6, "gpiod_direction_output_raw" },
	{ 0x37a0cba, "kfree" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbb119b4b, "flush_delayed_work" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5cbb74c3, "gpiod_to_irq" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x822137e2, "arm_heavy_mb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=matrix-keymap";

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "DD9CE2D3AB1816B2A6662F0");
