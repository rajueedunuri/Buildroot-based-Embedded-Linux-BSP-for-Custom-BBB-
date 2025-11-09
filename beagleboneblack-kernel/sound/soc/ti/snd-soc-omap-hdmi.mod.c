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
	{ 0x37319d86, "snd_pcm_hw_constraint_step" },
	{ 0x60f76339, "of_alias_get_id" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x89d1327f, "devm_kasprintf" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x393dee01, "snd_soc_unregister_card" },
	{ 0x167c0253, "_dev_err" },
	{ 0xe0a8b4ef, "snd_pcm_stream_lock_irq" },
	{ 0x726ae354, "snd_pcm_stream_unlock_irq" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0x7939d938, "sdma_pcm_platform_register" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xda9f82ee, "snd_pcm_stop" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xc8fc0a0, "snd_soc_register_card" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-ti-sdma";


MODULE_INFO(srcversion, "1668D40D11DE7F6DFC16148");
