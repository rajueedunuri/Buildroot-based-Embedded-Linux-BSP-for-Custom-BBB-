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
	{ 0x60f76339, "of_alias_get_id" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x89d1327f, "devm_kasprintf" },
	{ 0x109034d, "drm_mode_set_name" },
	{ 0xaab2e54b, "of_graph_get_remote_node" },
	{ 0xea14efcc, "of_device_is_available" },
	{ 0x3ca7237, "of_graph_get_next_endpoint" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x6b0c1687, "drm_display_mode_from_videomode" },
	{ 0x167c0253, "_dev_err" },
	{ 0x30168d66, "of_get_child_by_name" },
	{ 0xd159ab8, "module_put" },
	{ 0x3f77f126, "drm_mode_create" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x350bc3aa, "of_get_next_available_child" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x11ce5df6, "of_graph_get_remote_port_parent" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfd325845, "drm_mode_probed_add" },
	{ 0x3f83ead1, "of_drm_find_panel" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xa90c2d70, "of_drm_find_bridge" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "60C33A0F1A174417A0E49A7");
