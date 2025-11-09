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
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x9a2b0e85, "___ratelimit" },
	{ 0x904485af, "hrtimer_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x77febd, "hrtimer_start_range_ns" },
	{ 0x63544fa4, "pwm_apply_state" },
	{ 0x9d669763, "memcpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x201c30b5, "devm_rc_register_device" },
	{ 0x46d8f8fe, "devm_rc_allocate_device" },
	{ 0x586270bb, "hrtimer_init" },
	{ 0x2a00a1c1, "pwm_put" },
	{ 0x167c0253, "_dev_err" },
	{ 0x3a8120e4, "pwm_get" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("of:N*T*Cnokia,n900-ir");
MODULE_ALIAS("of:N*T*Cnokia,n900-irC*");

MODULE_INFO(srcversion, "33ABAC928F0700457E77432");
