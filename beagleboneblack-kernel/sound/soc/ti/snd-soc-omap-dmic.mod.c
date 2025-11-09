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
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x86d0fec3, "pm_qos_remove_request" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x167c0253, "_dev_err" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x7e6595d0, "pm_qos_request_active" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0x7939d938, "sdma_pcm_platform_register" },
	{ 0xdeb9771a, "devm_clk_get" },
	{ 0x9ce19747, "clk_get" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x9eb90b7e, "pm_qos_update_request" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-ti-sdma";

MODULE_ALIAS("of:N*T*Cti,omap4-dmic");
MODULE_ALIAS("of:N*T*Cti,omap4-dmicC*");

MODULE_INFO(srcversion, "95297205C3529D627BF0FA0");
