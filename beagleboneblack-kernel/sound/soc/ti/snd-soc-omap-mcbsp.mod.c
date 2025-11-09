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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x37319d86, "snd_pcm_hw_constraint_step" },
	{ 0x96bc03c8, "pm_qos_add_request" },
	{ 0x86d0fec3, "pm_qos_remove_request" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x91715312, "sprintf" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x280a6e27, "snd_soc_info_volsw" },
	{ 0xdef22fb8, "snd_pcm_hw_rule_add" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x232fc77c, "platform_get_irq_byname" },
	{ 0x7e6595d0, "pm_qos_request_active" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x7939d938, "sdma_pcm_platform_register" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x9ce19747, "clk_get" },
	{ 0x9c7ef387, "platform_get_resource_byname" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x93c05bc5, "devm_ioremap" },
	{ 0x9eb90b7e, "pm_qos_update_request" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x6f1699, "snd_soc_add_dai_controls" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-ti-sdma";

MODULE_ALIAS("of:N*T*Cti,omap2420-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap2420-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbspC*");

MODULE_INFO(srcversion, "1F7382283F7D5CFAC71F5DC");
