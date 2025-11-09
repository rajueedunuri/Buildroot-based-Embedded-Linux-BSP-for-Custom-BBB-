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
	{ 0xb21356c3, "devm_snd_soc_register_card" },
	{ 0xce344815, "snd_soc_of_parse_card_name" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0x3e9d45c9, "snd_soc_pm_ops" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x167c0253, "_dev_err" },
	{ 0x563dc4d4, "snd_soc_runtime_set_dai_fmt" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0x2392b581, "snd_soc_of_parse_audio_routing" },
	{ 0xb229ada0, "snd_soc_card_jack_new" },
	{ 0xf8e7c4a9, "snd_soc_dapm_disable_pin" },
	{ 0x984985be, "snd_soc_jack_add_gpios" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,omap-twl4030");
MODULE_ALIAS("of:N*T*Cti,omap-twl4030C*");

MODULE_INFO(srcversion, "B25159B5A5C93915FE5659A");
