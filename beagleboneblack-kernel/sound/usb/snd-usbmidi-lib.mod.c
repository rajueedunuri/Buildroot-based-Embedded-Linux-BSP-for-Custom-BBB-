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
	{ 0xc8b84a9b, "up_read" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xa9405761, "snd_rawmidi_set_ops" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x152e9831, "snd_rawmidi_new" },
	{ 0x3a83a5b2, "down_read" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x309399b5, "usb_set_interface" },
	{ 0x885bd94c, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb6b1a9d5, "usb_control_msg" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0xad12f110, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xacf5b256, "mod_timer" },
	{ 0xab4e4dd1, "usb_free_coherent" },
	{ 0xc17cffe, "up_write" },
	{ 0x167c0253, "_dev_err" },
	{ 0x4e576c7d, "down_write" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xae15c9f8, "usb_urb_ep_type_check" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0x8a75b36c, "snd_rawmidi_transmit_ack" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x220aba45, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x60e8ead8, "snd_ctl_new1" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x11d5f16, "usb_autopm_get_interface_no_resume" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8222be2b, "prepare_to_wait" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x66e1d1bf, "usb_alloc_coherent" },
	{ 0xadd93810, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x2a174b2a, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9723d367, "snd_rawmidi_transmit_empty" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x18c185a8, "__init_rwsem" },
	{ 0x3bc233fd, "snd_rawmidi_receive" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,snd-rawmidi,snd";


MODULE_INFO(srcversion, "233534F581B4235EDDB7EE4");
