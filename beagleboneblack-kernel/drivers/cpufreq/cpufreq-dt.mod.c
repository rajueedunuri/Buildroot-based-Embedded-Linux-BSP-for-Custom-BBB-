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
	{ 0x1ec7153b, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0x64e820db, "cpufreq_generic_suspend" },
	{ 0xba2b7f64, "cpufreq_generic_get" },
	{ 0x8dc3e1b2, "cpufreq_generic_frequency_table_verify" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x7cb29e45, "cpufreq_register_driver" },
	{ 0xfbf9f30d, "regulator_put" },
	{ 0x29789843, "regulator_get_optional" },
	{ 0xf3ac924b, "cpufreq_freq_attr_scaling_boost_freqs" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd9d69177, "dev_pm_opp_set_sharing_cpus" },
	{ 0x167c0253, "_dev_err" },
	{ 0xf622bbb9, "dev_pm_opp_get_max_transition_latency" },
	{ 0xf30a5502, "cpufreq_enable_boost_support" },
	{ 0x7120f278, "policy_has_boost_freq" },
	{ 0xddd2b2aa, "dev_pm_opp_get_suspend_opp_freq" },
	{ 0xbb0615ce, "dev_pm_opp_init_cpufreq_table" },
	{ 0x2119ae42, "dev_pm_opp_get_opp_count" },
	{ 0x4b86d74b, "dev_pm_opp_of_cpumask_add_table" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xa518cfc, "dev_pm_opp_set_regulators" },
	{ 0xb5da6ec4, "dev_pm_opp_get_sharing_cpus" },
	{ 0xed77ada9, "dev_pm_opp_of_get_sharing_cpus" },
	{ 0x9ce19747, "clk_get" },
	{ 0xf8e29c15, "get_cpu_device" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xc819fb02, "arch_set_freq_scale" },
	{ 0x8df160e4, "dev_pm_opp_set_rate" },
	{ 0x5ac9fb00, "dev_pm_opp_of_cpumask_remove_table" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x4ee1f9f8, "dev_pm_opp_put_regulators" },
	{ 0xc0d25195, "dev_pm_opp_free_cpufreq_table" },
	{ 0xb4052220, "cpufreq_cooling_unregister" },
	{ 0x49da6227, "of_cpufreq_cooling_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5b9e154c, "cpufreq_unregister_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "154727BD135AD034CF02A51");
