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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xed81ad95, "snd_pcm_period_elapsed" },
	{ 0xb1562e76, "snd_pcm_hw_constraint_integer" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc056b172, "__dma_request_channel" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2f425f5, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm";


MODULE_INFO(srcversion, "B647351878EADD12F6A0AD9");
