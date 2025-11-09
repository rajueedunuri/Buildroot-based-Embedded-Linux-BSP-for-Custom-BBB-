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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x982702bf, "of_property_read_string_helper" },
	{ 0x119d1ba6, "driver_register" },
	{ 0x205252ca, "of_property_read_u32_index" },
	{ 0x1b13ec85, "of_modalias_node" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xc6cac2ac, "blocking_notifier_chain_unregister" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x718fdaa, "device_del" },
	{ 0x7a2b51e4, "device_register" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x305c59e9, "device_add" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0xd5dd3e27, "sg_alloc_table" },
	{ 0xd159ab8, "module_put" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x25124f8d, "blocking_notifier_call_chain" },
	{ 0xbf7d120c, "blocking_notifier_chain_register" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x350bc3aa, "of_get_next_available_child" },
	{ 0xae06af91, "device_for_each_child" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x4232d702, "device_initialize" },
	{ 0xba585fe3, "device_unregister" },
	{ 0x8441c8cb, "sg_free_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x87886f14, "dev_set_name" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x18c185a8, "__init_rwsem" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "23497F8CC81609DDA6D062B");
