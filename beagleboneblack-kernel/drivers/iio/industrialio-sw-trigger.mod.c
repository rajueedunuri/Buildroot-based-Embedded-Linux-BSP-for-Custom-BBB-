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
	{ 0xfb1b2e97, "configfs_register_default_group" },
	{ 0x176fb097, "iio_configfs_subsys" },
	{ 0x346c27d8, "config_item_put" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd159ab8, "module_put" },
	{ 0xc69cbeba, "config_item_set_name" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x22a1b42e, "configfs_unregister_default_group" },
	{ 0x8522d6c6, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-configfs";


MODULE_INFO(srcversion, "46437270B2B170EFA1C62D4");
