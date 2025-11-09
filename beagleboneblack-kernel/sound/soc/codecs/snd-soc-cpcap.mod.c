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
	{ 0xf9a482f9, "msleep" },
	{ 0x585e008d, "snd_soc_dapm_get_volsw" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x5dfb5b21, "dapm_regulator_event" },
	{ 0xe9eed343, "snd_soc_put_volsw" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x2a1474d1, "snd_soc_get_volsw" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xcf51c399, "snd_soc_info_enum_double" },
	{ 0xd6613653, "snd_soc_dapm_kcontrol_dapm" },
	{ 0x636e2170, "dev_get_regmap" },
	{ 0x12f6c8ff, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x30168d66, "of_get_child_by_name" },
	{ 0x280a6e27, "snd_soc_info_volsw" },
	{ 0x8e49217, "snd_soc_component_init_regmap" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5c659c1c, "snd_soc_dapm_mux_update_power" },
	{ 0xbb99a279, "regmap_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "944B62BF9AB3DFBF4B86337");
