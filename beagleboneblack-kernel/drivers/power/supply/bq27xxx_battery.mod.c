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
	{ 0x2d3385d3, "system_wq" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0x1b84259, "power_supply_unregister" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x37d08b28, "power_supply_register_no_ws" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x139badf5, "power_supply_changed" },
	{ 0x357716de, "power_supply_get_battery_info" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xfb24a89b, "power_supply_get_drvdata" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x71c90087, "memcmp" },
	{ 0x167c0253, "_dev_err" },
	{ 0x70a19267, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8609f9ce, "param_get_uint" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x4329f73f, "param_set_uint" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xc3366b02, "power_supply_am_i_supplied" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A91C064669BC57E66D58D4A");
