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
	{ 0x496d229e, "platform_device_register_full" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xceb1e91, "twl6040_get_clk_id" },
	{ 0x3c1d2e5e, "snd_soc_dapm_add_routes" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x27e6a4b9, "twl6040_hs_jack_detect" },
	{ 0x9b443cfd, "omap_mcpdm_configure_dn_offsets" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0x167c0253, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x514cce58, "snd_soc_dai_set_sysclk" },
	{ 0x2392b581, "snd_soc_of_parse_audio_routing" },
	{ 0xb229ada0, "snd_soc_card_jack_new" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0x1b1efa60, "twl6040_get_trim_value" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-twl6040,snd-soc-omap-mcpdm";

MODULE_ALIAS("of:N*T*Cti,abe-twl6040");
MODULE_ALIAS("of:N*T*Cti,abe-twl6040C*");

MODULE_INFO(srcversion, "C67F9432F6D0B39F51F8C2E");
