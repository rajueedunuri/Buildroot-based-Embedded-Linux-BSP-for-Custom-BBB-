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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x91715312, "sprintf" },
	{ 0x6a3184bd, "devres_alloc_node" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x7a2b51e4, "device_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0x32bcb3be, "class_unregister" },
	{ 0x1c9b1de, "ida_free" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xbb0423bc, "__class_register" },
	{ 0xa6b4d242, "devres_release" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda45ac9a, "devres_add" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9298c455, "devm_thermal_zone_of_sensor_register" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xba585fe3, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x87886f14, "dev_set_name" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x3b5eb5cd, "ida_alloc_range" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F1BDB9FDC7D4951B3430E16");
