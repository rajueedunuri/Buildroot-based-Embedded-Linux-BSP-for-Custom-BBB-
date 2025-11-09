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
	{ 0x52237bb2, "asoc_simple_card_canonicalize_dailink" },
	{ 0x10f4beb5, "asoc_simple_card_canonicalize_cpu" },
	{ 0xf13be944, "of_phandle_iterator_init" },
	{ 0xea980714, "asoc_simple_card_clean_reference" },
	{ 0x3e9d45c9, "snd_soc_pm_ops" },
	{ 0x15900bd3, "asoc_simple_card_parse_graph_dai" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xb68f0825, "asoc_simple_card_clk_enable" },
	{ 0x496cc69a, "asoc_simple_card_init_jack" },
	{ 0x4f13600e, "asoc_simple_card_clk_disable" },
	{ 0x50c0adb8, "asoc_simple_card_of_parse_widgets" },
	{ 0x8290cc3, "asoc_simple_card_set_dailink_name" },
	{ 0x66d6197b, "asoc_simple_card_of_parse_routing" },
	{ 0x167c0253, "_dev_err" },
	{ 0xf2d48b39, "of_graph_get_endpoint_count" },
	{ 0x40e99492, "asoc_simple_card_init_dai" },
	{ 0x40a06ac6, "asoc_simple_card_parse_clk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc2779f, "asoc_simple_card_parse_daifmt" },
	{ 0xd0893109, "of_get_next_child" },
	{ 0x514cce58, "snd_soc_dai_set_sysclk" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0xa51eb305, "of_phandle_iterator_next" },
	{ 0xef66d285, "asoc_simple_card_parse_card_name" },
	{ 0x64023667, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5fa23d5c, "snd_soc_of_parse_tdm_slot" },
	{ 0x58b841bc, "of_graph_get_remote_endpoint" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-simple-card-utils";

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");

MODULE_INFO(srcversion, "56E5F2BD7486E6CF6A34177");
