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
	{ 0xf9a482f9, "msleep" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xdd0a3814, "snd_soc_dapm_get_enum_double" },
	{ 0x585e008d, "snd_soc_dapm_get_volsw" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xe9eed343, "snd_soc_put_volsw" },
	{ 0x2a1474d1, "snd_soc_get_volsw" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xcf51c399, "snd_soc_info_enum_double" },
	{ 0xd6613653, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xce3f76be, "snd_soc_dapm_get_pin_status" },
	{ 0xd2687864, "snd_pcm_hw_constraint_list" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe573c9eb, "snd_soc_dapm_force_bias_level" },
	{ 0x12f6c8ff, "snd_soc_dapm_put_volsw" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x167c0253, "_dev_err" },
	{ 0x280a6e27, "snd_soc_info_volsw" },
	{ 0x813889bd, "twl6040_reg_read" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xcc870e53, "twl6040_power" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0x3aa5ab6b, "twl6040_reg_write" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ac900fa, "snd_soc_jack_report" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xbd18a13d, "twl6040_set_pll" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb7570e38, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm";


MODULE_INFO(srcversion, "81A6B0BF8E06E632EEB6A9B");
