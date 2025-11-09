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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xce344815, "snd_soc_of_parse_card_name" },
	{ 0x8d633b53, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x648e719d, "of_graph_get_port_parent" },
	{ 0xa0468109, "snd_soc_of_get_dai_name" },
	{ 0x3ca7237, "of_graph_get_next_endpoint" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x167c0253, "_dev_err" },
	{ 0xc5e9abe3, "devm_get_clk_from_child" },
	{ 0xf2d48b39, "of_graph_get_endpoint_count" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0x514cce58, "snd_soc_dai_set_sysclk" },
	{ 0x6b3bb9ce, "devm_kvasprintf" },
	{ 0x2392b581, "snd_soc_of_parse_audio_routing" },
	{ 0xb229ada0, "snd_soc_card_jack_new" },
	{ 0xa0a1c403, "snd_soc_get_dai_id" },
	{ 0x8d2cb057, "snd_soc_get_dai_name" },
	{ 0x984985be, "snd_soc_jack_add_gpios" },
	{ 0xf489d2ee, "snd_soc_of_parse_daifmt" },
	{ 0x85f09d55, "of_parse_phandle_with_args" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9a9d01fd, "snd_soc_dai_set_tdm_slot" },
	{ 0xb81960ca, "snprintf" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "009DDB38A5CB4329B568C97");
