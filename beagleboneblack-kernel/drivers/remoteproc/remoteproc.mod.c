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
	{ 0xd99ed303, "iommu_attach_device" },
	{ 0xba66c79a, "vring_del_virtqueue" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x227d2c1e, "generic_file_llseek" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x8dda7239, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0xfb03ebf0, "single_release" },
	{ 0x6b94187a, "iommu_map" },
	{ 0xd981555c, "seq_puts" },
	{ 0x60f76339, "of_alias_get_id" },
	{ 0xb70789e, "__might_fault" },
	{ 0x6e617324, "seq_printf" },
	{ 0x7db5c0e4, "register_virtio_device" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x91715312, "sprintf" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0xd4a5646e, "seq_read" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x55ffc7da, "complete_all" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x2535e8af, "idr_destroy" },
	{ 0x718fdaa, "device_del" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x68a5be6a, "dev_coredumpv" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32bcb3be, "class_unregister" },
	{ 0x1c9b1de, "ida_free" },
	{ 0x573ef176, "iommu_set_fault_handler" },
	{ 0x84b183ae, "strncmp" },
	{ 0x70f66a80, "debugfs_remove" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x60795063, "iommu_unmap" },
	{ 0x4d81bba2, "iommu_domain_alloc" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x3b3a099e, "idr_alloc" },
	{ 0x305c59e9, "device_add" },
	{ 0x4c3212dd, "simple_open" },
	{ 0xea90d6ce, "request_firmware_nowait" },
	{ 0x1c922989, "iommu_domain_free" },
	{ 0xbb0423bc, "__class_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0x266deffe, "iommu_detach_device" },
	{ 0xb71fa38a, "of_find_node_by_phandle" },
	{ 0x646ece29, "unregister_virtio_device" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0xafa8fc84, "idr_remove" },
	{ 0x40e3aaac, "work_busy" },
	{ 0xd159ab8, "module_put" },
	{ 0x6d223bdd, "vring_new_virtqueue" },
	{ 0x70a19267, "_dev_info" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xfe86419a, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4232d702, "device_initialize" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x66661ff5, "idr_find" },
	{ 0x237d1cf7, "ida_destroy" },
	{ 0x9bf0e374, "vring_transport_features" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0x3b5eb5cd, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio_ring,virtio";


MODULE_INFO(srcversion, "48B71F5DF3F972C4A3B374B");
