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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf2ad80d9, "snd_pcm_create_iec958_consumer_hw_params" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xa63133f3, "snd_pcm_hw_constraint_eld" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x3c1d2e5e, "snd_soc_dapm_add_routes" },
	{ 0x5f754e5a, "memset" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x167c0253, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60e8ead8, "snd_ctl_new1" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5c2d34d, "hdmi_audio_infoframe_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4bca08ae, "snd_pcm_add_chmap_ctls" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xadd93810, "snd_ctl_add" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";


MODULE_INFO(srcversion, "A2AAEC74F17142B614E4AD0");
