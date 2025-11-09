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
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x820b63f7, "param_ops_uint" },
	{ 0x7b8fb54b, "param_ops_ushort" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x93f7d39b, "usb_get_descriptor" },
	{ 0xb4afc7a2, "usb_clear_halt" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x8451fdfe, "sg_init_table" },
	{ 0x14082d7e, "page_address" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x5da0e021, "usb_get_status" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x70a19267, "_dev_info" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0xd0962087, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab4e4dd1, "usb_free_coherent" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x66e1d1bf, "usb_alloc_coherent" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x10480fff, "usb_unlink_urb" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x68f79fd7, "complete" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xb6b1a9d5, "usb_control_msg" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x916b115b, "usb_sg_wait" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x43f0e998, "usb_sg_init" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x5f754e5a, "memset" },
	{ 0xe9a337c1, "usb_sg_cancel" },
	{ 0x309399b5, "usb_set_interface" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x167c0253, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "24127B014D37CC63B8C724D");
