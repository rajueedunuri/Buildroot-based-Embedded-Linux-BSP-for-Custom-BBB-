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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x63544fa4, "pwm_apply_state" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x167c0253, "_dev_err" },
	{ 0x201c30b5, "devm_rc_register_device" },
	{ 0x46d8f8fe, "devm_rc_allocate_device" },
	{ 0x6b27251b, "devm_pwm_get" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("of:N*T*Cpwm-ir-tx");
MODULE_ALIAS("of:N*T*Cpwm-ir-txC*");

MODULE_INFO(srcversion, "0E7007E48C27718A45A2748");
