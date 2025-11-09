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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc471c67a, "twl4030_audio_disable_resource" },
	{ 0xdd0a3814, "snd_soc_dapm_get_enum_double" },
	{ 0x3acdf325, "twl4030_audio_enable_resource" },
	{ 0x585e008d, "snd_soc_dapm_get_volsw" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xa057df8f, "twl_set_regcache_bypass" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xbbc5414e, "snd_soc_component_update_bits" },
	{ 0xe9eed343, "snd_soc_put_volsw" },
	{ 0x48b5f8d, "twl4030_audio_get_mclk" },
	{ 0x2a1474d1, "snd_soc_get_volsw" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xcf51c399, "snd_soc_info_enum_double" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x12f6c8ff, "snd_soc_dapm_put_volsw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x30168d66, "of_get_child_by_name" },
	{ 0x280a6e27, "snd_soc_info_volsw" },
	{ 0xda5282b7, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0xfe990052, "gpio_free" },
	{ 0x32c9a8a3, "snd_soc_put_enum_double" },
	{ 0xed6384e4, "gpiod_set_raw_value" },
	{ 0xd4c69b82, "snd_pcm_hw_constraint_minmax" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xb7570e38, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "B313D283416EEB0FAC40B63");
