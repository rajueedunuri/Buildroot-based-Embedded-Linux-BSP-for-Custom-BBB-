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
	{ 0xdd0a3814, "snd_soc_dapm_get_enum_double" },
	{ 0x3c0c344f, "snd_soc_dapm_mixer_update_power" },
	{ 0x3d989535, "regmap_register_patch" },
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x585e008d, "snd_soc_dapm_get_volsw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0xe1afc9ad, "regulator_register_notifier" },
	{ 0xd2a67ffc, "snd_soc_dapm_new_controls" },
	{ 0xbbc5414e, "snd_soc_component_update_bits" },
	{ 0xe9eed343, "snd_soc_put_volsw" },
	{ 0x2a1474d1, "snd_soc_get_volsw" },
	{ 0x6f3dd588, "devm_regulator_bulk_get" },
	{ 0xf60fe8c9, "regulator_bulk_enable" },
	{ 0xcf51c399, "snd_soc_info_enum_double" },
	{ 0xd6613653, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xcd9d3768, "regulator_unregister_notifier" },
	{ 0x3c1d2e5e, "snd_soc_dapm_add_routes" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0xb88eeef, "snd_soc_add_component_controls" },
	{ 0x12f6c8ff, "snd_soc_dapm_put_volsw" },
	{ 0x184dd1b6, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x280a6e27, "snd_soc_info_volsw" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0xda5282b7, "snd_soc_get_enum_double" },
	{ 0x880ee299, "regulator_bulk_disable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa5083211, "__devm_regmap_init_i2c" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0x915f1b5c, "regulator_get_voltage" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0xc1ecbad, "snd_soc_component_write" },
	{ 0xfe990052, "gpio_free" },
	{ 0xd133357e, "regcache_mark_dirty" },
	{ 0x32c9a8a3, "snd_soc_put_enum_double" },
	{ 0xed6384e4, "gpiod_set_raw_value" },
	{ 0x545b9fa8, "snd_soc_component_test_bits" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc31a375, "snd_soc_component_read32" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xd1b02a1b, "regcache_sync" },
	{ 0x8f1b3afd, "regcache_cache_only" },
	{ 0xb7570e38, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,tlv320aic3x");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3xC*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33");
MODULE_ALIAS("of:N*T*Cti,tlv320aic33C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3007C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3106C*");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104");
MODULE_ALIAS("of:N*T*Cti,tlv320aic3104C*");
MODULE_ALIAS("i2c:tlv320aic3x");
MODULE_ALIAS("i2c:tlv320aic33");
MODULE_ALIAS("i2c:tlv320aic3007");
MODULE_ALIAS("i2c:tlv320aic3106");
MODULE_ALIAS("i2c:tlv320aic3104");

MODULE_INFO(srcversion, "667DD559C1142EC83A01D56");
