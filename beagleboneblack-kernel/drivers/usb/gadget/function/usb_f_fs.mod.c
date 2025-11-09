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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x97255bdf, "strlen" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0x5cdbe4de, "generic_delete_inode" },
	{ 0x59a82d71, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x9e1a5c75, "dup_iter" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xbb2625b4, "d_add" },
	{ 0x288be316, "usb_ep_set_halt" },
	{ 0x914eb160, "mount_nodev" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x73a90789, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdc644cfa, "d_delete" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x8529f257, "kill_litter_super" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x3ba53725, "unregister_gadget_item" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x3df564dd, "wait_for_completion_interruptible" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x39266bcb, "do_wait_intr_irq" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xcb3375ae, "__wake_up_locked" },
	{ 0x2ccccbd5, "usb_ep_clear_halt" },
	{ 0x558e83c1, "use_mm" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0x7e73f32d, "usb_ep_dequeue" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x36030150, "simple_dir_operations" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xd96b0133, "_copy_from_iter_full" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x41865b39, "kiocb_set_cancel_fn" },
	{ 0xfbf1e258, "register_filesystem" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x872d9c98, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x479fe313, "current_time" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xb0073de9, "d_make_root" },
	{ 0x65bef9b7, "simple_statfs" },
	{ 0xaab401e1, "d_alloc_name" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xd3aba32b, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x68f79fd7, "complete" },
	{ 0x58974051, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x99bb8806, "memmove" },
	{ 0x4863abf4, "unuse_mm" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdbead110, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x5af60c69, "simple_dir_inode_operations" },
	{ 0xb017e60, "usb_string_ids_n" },
	{ 0x512e2eb0, "_copy_to_iter" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "DFF281769171BF6513B202B");
