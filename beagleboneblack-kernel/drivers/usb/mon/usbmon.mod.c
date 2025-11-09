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
	{ 0x90a12280, "usb_mon_register" },
	{ 0xd830d369, "kmem_cache_destroy" },
	{ 0x7570fe46, "cdev_del" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x14082d7e, "page_address" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0x56bf7f0c, "usb_debug_root" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0xa5d2e60, "device_destroy" },
	{ 0xe06699b2, "sg_next" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1034cfbb, "usb_bus_idr_lock" },
	{ 0x70f66a80, "debugfs_remove" },
	{ 0x9a59d85a, "kmem_cache_free" },
	{ 0xd42ab1b7, "device_create" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0xfb0f94f, "cdev_add" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x417482d5, "kmem_cache_alloc" },
	{ 0x82656a11, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xf8d4da5d, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xca9677f5, "class_destroy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x74adcf7c, "usb_bus_idr" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xdd978dea, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";


MODULE_INFO(srcversion, "919DA275607B231672D1FD8");
