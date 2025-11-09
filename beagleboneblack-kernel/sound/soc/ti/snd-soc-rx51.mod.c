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
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0xb21356c3, "devm_snd_soc_register_card" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0xf5aa4c58, "snd_soc_dapm_info_pin_switch" },
	{ 0xc85ddcf4, "snd_soc_dapm_put_pin_switch" },
	{ 0xd936c4d, "devm_gpiod_get" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xef23e1d, "desc_to_gpio" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xcf51c399, "snd_soc_info_enum_double" },
	{ 0x18df02e1, "snd_soc_dapm_disable_pin_unlocked" },
	{ 0x167c0253, "_dev_err" },
	{ 0x254b02e5, "snd_soc_dapm_get_pin_switch" },
	{ 0x52ea7c3d, "snd_soc_dapm_enable_pin_unlocked" },
	{ 0xeaa72a30, "devm_gpiod_put" },
	{ 0x514cce58, "snd_soc_dai_set_sysclk" },
	{ 0xb97aeeba, "omap_mcbsp_st_add_controls" },
	{ 0xb229ada0, "snd_soc_card_jack_new" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x20764d73, "snd_soc_dapm_sync_unlocked" },
	{ 0xd4c69b82, "snd_pcm_hw_constraint_minmax" },
	{ 0x984985be, "snd_soc_jack_add_gpios" },
	{ 0x1c877783, "gpiod_set_raw_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcf80417c, "snd_soc_limit_volume" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0xd424f9ac, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-omap-mcbsp,snd-pcm";

MODULE_ALIAS("of:N*T*Cnokia,n900-audio");
MODULE_ALIAS("of:N*T*Cnokia,n900-audioC*");

MODULE_INFO(srcversion, "99CC1D352189CBBA6F6FA67");
