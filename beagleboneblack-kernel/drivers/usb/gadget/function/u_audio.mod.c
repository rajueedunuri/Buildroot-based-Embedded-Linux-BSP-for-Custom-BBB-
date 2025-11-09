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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0xed81ad95, "snd_pcm_period_elapsed" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0x8141fa31, "_snd_pcm_stream_lock_irqsave" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x91715312, "sprintf" },
	{ 0xb1562e76, "snd_pcm_hw_constraint_integer" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc944f93a, "snd_pcm_set_ops" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x3e3bf590, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xb3315bef, "snd_pcm_lib_free_pages" },
	{ 0xf2bb7856, "snd_pcm_lib_ioctl" },
	{ 0x167c0253, "_dev_err" },
	{ 0x1f4cf92b, "snd_pcm_lib_malloc_pages" },
	{ 0x92c6928a, "snd_card_new" },
	{ 0x7e73f32d, "usb_ep_dequeue" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd6e2e2b5, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x51e59332, "snd_card_free" },
	{ 0xb9314046, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf50d8c9, "snd_pcm_new" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,libcomposite";


MODULE_INFO(srcversion, "6511BF4B9548A6D9B9A55F6");
