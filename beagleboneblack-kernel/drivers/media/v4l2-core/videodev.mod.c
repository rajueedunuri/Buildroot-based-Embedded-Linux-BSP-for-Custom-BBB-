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
	{ 0xd915cacc, "cdev_alloc" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x7570fe46, "cdev_del" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x7b49487f, "lock_is_held_type" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xa139fd2b, "media_device_unregister_entity" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x64e40d97, "fwnode_handle_put" },
	{ 0x1ef5eb87, "media_devnode_create" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xb755a9ec, "media_graph_walk_start" },
	{ 0x115f9cca, "media_entity_get" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x36d35e2e, "trace_event_buffer_reserve" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x22fc4f3a, "trace_print_flags_seq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x239a6181, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x7a2b51e4, "device_register" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x541a0471, "i2c_verify_client" },
	{ 0xd7c87940, "media_graph_walk_next" },
	{ 0x32bcb3be, "class_unregister" },
	{ 0x1fa9f70c, "trace_event_reg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xeba653ae, "i2c_unregister_device" },
	{ 0xbb0423bc, "__class_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0x394e6832, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x16a42703, "rcu_read_lock_sched_held" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xfb0f94f, "cdev_add" },
	{ 0x2da86473, "media_device_register_entity" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd159ab8, "module_put" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xd79f6482, "trace_event_ignore_this_pid" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x22859fa1, "trace_event_buffer_commit" },
	{ 0xf93e3771, "media_create_pad_link" },
	{ 0xc5b75fae, "media_create_intf_link" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x9ce19747, "clk_get" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x11ba8557, "event_triggers_call" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xb9452390, "media_entity_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe93f6042, "trace_print_symbols_seq" },
	{ 0x2be83e5a, "trace_event_raw_init" },
	{ 0x2370bd09, "dev_fwnode" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xba585fe3, "device_unregister" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7494af00, "spi_unregister_device" },
	{ 0x35c08ca2, "trace_raw_output_prep" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xa4a60d54, "media_devnode_remove" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=media";


MODULE_INFO(srcversion, "DD7909FA1A7C242E7159131");
