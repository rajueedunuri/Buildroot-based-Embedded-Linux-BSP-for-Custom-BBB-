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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x95c0278e, "put_pid" },
	{ 0xc8b84a9b, "up_read" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x8dda7239, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x9824abab, "proc_symlink" },
	{ 0x97255bdf, "strlen" },
	{ 0x352c05d9, "release_resource" },
	{ 0xb08e529b, "sound_class" },
	{ 0x6abb0712, "_raw_write_lock_irqsave" },
	{ 0xcbeb0b63, "pid_vnr" },
	{ 0xfb03ebf0, "single_release" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0x60634ca8, "_raw_read_lock" },
	{ 0x6e617324, "seq_printf" },
	{ 0x17cf3949, "kobject_set_name" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x513aec5a, "__register_chrdev" },
	{ 0xa836ebff, "proc_set_size" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x7dcb1948, "__rwlock_init" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd4a5646e, "seq_read" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3a83a5b2, "down_read" },
	{ 0x51af4823, "_raw_write_unlock_irqrestore" },
	{ 0x2980c27f, "proc_remove" },
	{ 0xe608e9ba, "input_event" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd03b91bb, "PDE_DATA" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0xc48d5a1f, "param_ops_charp" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4fd6a9f4, "proc_mkdir" },
	{ 0x718fdaa, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x5ba85985, "_raw_read_unlock" },
	{ 0x7c1372e8, "panic" },
	{ 0xf66134a3, "fasync_helper" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x153311da, "noop_llseek" },
	{ 0xf32f580, "init_uts_ns" },
	{ 0x305c59e9, "device_add" },
	{ 0xc17cffe, "up_write" },
	{ 0x167c0253, "_dev_err" },
	{ 0x4e576c7d, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd159ab8, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0xcefd88b6, "register_sound_special_device" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x4d667090, "input_free_device" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xe6c8e1, "dev_driver_string" },
	{ 0xcb243099, "single_open_size" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x8d3d4aad, "get_device" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0xa2b79746, "proc_create_data" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0xfe86419a, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0xa1d131ed, "vmemdup_user" },
	{ 0xb97e294e, "param_array_ops" },
	{ 0x4232d702, "device_initialize" },
	{ 0xf2ee3fe5, "proc_mkdir_mode" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x8be81f46, "kill_fasync" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x216d759a, "mmiocpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x68f79fd7, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x18c185a8, "__init_rwsem" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x34885ad0, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soundcore";


MODULE_INFO(srcversion, "6F67D6E01D1C9D9E25596A9");
