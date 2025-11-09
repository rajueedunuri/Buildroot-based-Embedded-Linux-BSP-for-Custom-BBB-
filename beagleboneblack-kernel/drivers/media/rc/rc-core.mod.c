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
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x82cd540a, "atomic64_and" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x3b8d03fe, "del_timer" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xeaca5bb0, "led_trigger_event" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x6a3184bd, "devres_alloc_node" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xe608e9ba, "input_event" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x718fdaa, "device_del" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5d5832ca, "kthread_stop" },
	{ 0x32bcb3be, "class_unregister" },
	{ 0x1c9b1de, "ida_free" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x305c59e9, "device_add" },
	{ 0xbb0423bc, "__class_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0x58d65c6d, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd159ab8, "module_put" },
	{ 0x70a19267, "_dev_info" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x21d7eab7, "cdev_device_add" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x4d667090, "input_free_device" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0xda45ac9a, "devres_add" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x8d3d4aad, "get_device" },
	{ 0xa51f22cf, "__module_get" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x66bee7f3, "led_trigger_unregister_simple" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xbc3843c6, "kobject_get_path" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0x4232d702, "device_initialize" },
	{ 0xab694444, "bsearch" },
	{ 0xe2b6f6d6, "led_trigger_register_simple" },
	{ 0xca9677f5, "class_destroy" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xc3421d8b, "cdev_device_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x73979de6, "atomic64_or" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdd978dea, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6ca1d1a4, "atomic64_read" },
	{ 0x3b5eb5cd, "ida_alloc_range" },
	{ 0x6c07d933, "add_uevent_var" },
	{ 0x34885ad0, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E0936201B7B54339BCE1F73");
