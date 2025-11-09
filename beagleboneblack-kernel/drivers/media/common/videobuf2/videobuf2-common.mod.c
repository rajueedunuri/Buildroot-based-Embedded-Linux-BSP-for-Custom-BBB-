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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf246c744, "trace_handle_return" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf6e1040, "debug_check_no_locks_held" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x36d35e2e, "trace_event_buffer_reserve" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x239a6181, "trace_define_field" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0x53466556, "freezing_slow_path" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5d5832ca, "kthread_stop" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x846b28b, "dma_buf_fd" },
	{ 0x17b727e0, "dma_buf_put" },
	{ 0x1fa9f70c, "trace_event_reg" },
	{ 0xc8d68300, "dma_buf_get" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x3ea5b1f9, "v4l_vb2q_enable_media_source" },
	{ 0x394e6832, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x16a42703, "rcu_read_lock_sched_held" },
	{ 0xd79f6482, "trace_event_ignore_this_pid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x22859fa1, "trace_event_buffer_commit" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x11ba8557, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x2be83e5a, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x35c08ca2, "trace_raw_output_prep" },
	{ 0x3c93ea25, "trace_seq_printf" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "C996F3112929F9A5554F68A");
