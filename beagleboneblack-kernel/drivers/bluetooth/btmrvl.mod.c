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
	{ 0x5d787991, "skb_queue_head" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0xabaa6be, "debugfs_create_u8" },
	{ 0x291bd046, "__hci_cmd_sync" },
	{ 0x7a1c6fe6, "hci_register_dev" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0x16d9bd59, "hci_unregister_dev" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0x47022514, "bt_err" },
	{ 0x5e59041d, "debugfs_create_x16" },
	{ 0x465c4e90, "of_property_read_variable_u8_array" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x12e85778, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0xe829e60c, "default_llseek" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x34908c14, "print_hex_dump_bytes" },
	{ 0x5d5832ca, "kthread_stop" },
	{ 0x9a514386, "hci_alloc_dev" },
	{ 0x352e9022, "skb_push" },
	{ 0x4c3212dd, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x98f3a8b8, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1a05b300, "hci_free_dev" },
	{ 0x50245fbb, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "7F1FC12511476C0DEC969BE");
