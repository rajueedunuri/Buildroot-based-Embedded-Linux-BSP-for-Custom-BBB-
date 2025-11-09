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
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc2e10017, "i2c_add_adapter" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0xedfb27d4, "i2c_add_numbered_adapter" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x760a0f4f, "yield" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "15747631B3CA90603DC75FD");
