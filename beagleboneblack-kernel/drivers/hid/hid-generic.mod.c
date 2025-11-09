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
	{ 0xd704cf0f, "hid_unregister_driver" },
	{ 0x749a021b, "__hid_register_driver" },
	{ 0xaedaea2d, "hid_bus_type" },
	{ 0xff50ff8a, "bus_for_each_drv" },
	{ 0xaefa435d, "hid_hw_start" },
	{ 0x98c8a7d4, "hid_open_report" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x266fb1c6, "hid_match_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b*g*v*p*");

MODULE_INFO(srcversion, "FE883CCA7E8E8354EB8D55C");
