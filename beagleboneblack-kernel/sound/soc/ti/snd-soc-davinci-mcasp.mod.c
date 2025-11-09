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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x6c1639fb, "devm_gpiochip_add_data" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x335da398, "snd_pcm_stop_xrun" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x89d1327f, "devm_kasprintf" },
	{ 0x2fca63ef, "dma_request_chan" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xd2687864, "snd_pcm_hw_constraint_list" },
	{ 0x7c32d0f0, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x167c0253, "_dev_err" },
	{ 0x66c577cf, "edma_pcm_platform_register" },
	{ 0x80b818bf, "devm_kmemdup" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2c21043b, "gpiochip_get_data" },
	{ 0x70a19267, "_dev_info" },
	{ 0xdef22fb8, "snd_pcm_hw_rule_add" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0x5992758a, "of_get_property" },
	{ 0x7939d938, "sdma_pcm_platform_register" },
	{ 0x9ce19747, "clk_get" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x2f425f5, "dma_release_channel" },
	{ 0xd4c69b82, "snd_pcm_hw_constraint_minmax" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x85f09d55, "of_parse_phandle_with_args" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb284b0fc, "of_property_match_string" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-ti-edma,snd-soc-core,snd-soc-ti-sdma";

MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audioC*");

MODULE_INFO(srcversion, "176A363D08F2E8536E68145");
