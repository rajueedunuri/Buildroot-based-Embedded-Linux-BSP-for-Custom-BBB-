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
	{ 0x2d3385d3, "system_wq" },
	{ 0x5d787991, "skb_queue_head" },
	{ 0xa170bfae, "hid_add_device" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xd67ce8fa, "sock_init_data" },
	{ 0x7a7defa8, "hid_ignore" },
	{ 0xc8b84a9b, "up_read" },
	{ 0x70ad49ff, "kernel_sendmsg" },
	{ 0x4f7a702, "sockfd_lookup" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0x3046d508, "sock_no_setsockopt" },
	{ 0x6b33d4aa, "hid_parse_report" },
	{ 0x743fea6c, "sock_no_getsockopt" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb70789e, "__might_fault" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x92967082, "sock_no_getname" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x22586241, "bt_sock_register" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7d66bb93, "hid_input_report" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x3a83a5b2, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0xc4a9b20f, "__pskb_pull_tail" },
	{ 0xe608e9ba, "input_event" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x5884a83, "sock_no_mmap" },
	{ 0xaefe2e61, "sock_no_recvmsg" },
	{ 0x3172a3fb, "bt_sock_unlink" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x7ef731fa, "sock_no_socketpair" },
	{ 0x10a2f63a, "l2cap_conn_put" },
	{ 0x26dfcb04, "sk_alloc" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x6d513f7b, "l2cap_is_socket" },
	{ 0xfe88fad8, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0x740e88bf, "sock_no_listen" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa26e530c, "sock_no_accept" },
	{ 0xebcbfc11, "sk_free" },
	{ 0xacf5b256, "mod_timer" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0xc17cffe, "up_write" },
	{ 0x71abaf71, "init_net" },
	{ 0x4e576c7d, "down_write" },
	{ 0x58d65c6d, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7be83769, "sock_no_shutdown" },
	{ 0x30689a06, "bt_sock_link" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xd275bf72, "proto_register" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x92807db, "proto_unregister" },
	{ 0x98482da5, "l2cap_register_user" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x914c0b87, "__module_put_and_exit" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0x5017fef2, "hid_destroy_device" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xe6eb9e28, "hid_allocate_device" },
	{ 0xfbcbceb9, "l2cap_conn_get" },
	{ 0x8d3d4aad, "get_device" },
	{ 0xa51f22cf, "__module_get" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xd489e56f, "sock_no_connect" },
	{ 0x12715e2a, "_raw_write_unlock_bh" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0xa4ea3231, "sock_no_sendmsg" },
	{ 0x5032e9ec, "set_user_nice" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x435d71bd, "_raw_write_lock_bh" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x4b5658db, "bt_procfs_init" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x50245fbb, "skb_put" },
	{ 0x59f9cf5f, "bt_procfs_cleanup" },
	{ 0x4dec6038, "memscan" },
	{ 0x750fb1a9, "l2cap_unregister_user" },
	{ 0x34885ad0, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "87294FA2AE731D91D1C61FE");
