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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xa4e734ae, "usb_gstrings_attach" },
	{ 0x141781c2, "usb_free_all_descriptors" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xb8cff4ac, "dev_printk" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x288be316, "usb_ep_set_halt" },
	{ 0xa9405761, "snd_rawmidi_set_ops" },
	{ 0x91715312, "sprintf" },
	{ 0xb0e9426b, "usb_function_unregister" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x152e9831, "snd_rawmidi_new" },
	{ 0x9a897c21, "snd_device_new" },
	{ 0x50aacdda, "usb_put_function_instance" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xe0a6d3d3, "usb_ep_autoconfig" },
	{ 0x91a354be, "snd_card_free_when_closed" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xed2a66fb, "config_group_init_type_name" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x167c0253, "_dev_err" },
	{ 0x310b75cd, "usb_function_register" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0x92c6928a, "snd_card_new" },
	{ 0x455fba60, "snd_component_add" },
	{ 0xeb033e6, "alloc_ep_req" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x22a2d380, "config_ep_by_speed" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x252bda51, "snd_rawmidi_drop_output" },
	{ 0xeaf08418, "usb_interface_id" },
	{ 0x51e59332, "snd_card_free" },
	{ 0xb9314046, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a174b2a, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3bc233fd, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,snd-rawmidi,snd";


MODULE_INFO(srcversion, "75F3075C61CF7D6409D7E35");
