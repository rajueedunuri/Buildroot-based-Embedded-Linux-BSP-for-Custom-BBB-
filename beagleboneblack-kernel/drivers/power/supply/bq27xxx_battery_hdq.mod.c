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
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x48cbc3b6, "w1_unregister_family" },
	{ 0x4c00b13a, "w1_register_family" },
	{ 0x5990101a, "bq27xxx_battery_setup" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xfe77eeaf, "w1_read_8" },
	{ 0x60850f3b, "w1_write_8" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x17973eb2, "bq27xxx_battery_teardown" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire,bq27xxx_battery";


MODULE_INFO(srcversion, "F9854CDD7FEFE23D0610B20");
