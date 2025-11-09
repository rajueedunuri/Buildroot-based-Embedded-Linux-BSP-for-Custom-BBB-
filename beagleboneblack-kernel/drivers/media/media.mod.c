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
	{ 0x4994a4cc, "bus_register" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0xf59b850f, "device_remove_file" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb3ba9f05, "cdev_init" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x1c9b1de, "ida_free" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0x8dec8d1e, "device_create_file" },
	{ 0xd159ab8, "module_put" },
	{ 0x20317536, "fwnode_graph_parse_endpoint" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x21d7eab7, "cdev_device_add" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4232d702, "device_initialize" },
	{ 0xc3421d8b, "cdev_device_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x237d1cf7, "ida_destroy" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0x3b5eb5cd, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D935BB0278C001EB97011BC");
