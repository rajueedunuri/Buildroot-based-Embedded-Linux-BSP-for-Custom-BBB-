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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xeb2cb581, "v4l2_async_register_subdev" },
	{ 0x7f677ea5, "fwnode_property_read_u8_array" },
	{ 0xb3ef488a, "fwnode_graph_get_remote_port_parent" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x64e40d97, "fwnode_handle_put" },
	{ 0xe3c01c45, "v4l2_async_subdev_notifier_register" },
	{ 0x54c48ef6, "v4l2_async_notifier_cleanup" },
	{ 0x1229a64f, "fwnode_get_next_parent" },
	{ 0x8d1e582d, "fwnode_device_is_available" },
	{ 0xad48f3b6, "fwnode_property_present" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x6ff6db7b, "fwnode_property_read_u64_array" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xda2a7c7b, "fwnode_property_read_u32_array" },
	{ 0x20317536, "fwnode_graph_parse_endpoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x346858e3, "fwnode_get_parent" },
	{ 0x72926a99, "fwnode_property_get_reference_args" },
	{ 0x991dd17e, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xff500315, "fwnode_graph_get_next_endpoint" },
	{ 0x2370bd09, "dev_fwnode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x80bb8324, "fwnode_graph_get_remote_endpoint" },
	{ 0xf90a94ef, "v4l2_async_notifier_unregister" },
	{ 0xecc6d3a, "of_fwnode_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "674F53D1F9559F7F70C4D5A");
