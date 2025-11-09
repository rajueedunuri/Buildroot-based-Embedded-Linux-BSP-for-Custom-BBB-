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
	{ 0x2d3385d3, "system_wq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0xeb1634e4, "usb_deregister_dev" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x4e996be7, "usb_autopm_get_interface" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x3e8be41c, "usb_register_dev" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x153311da, "noop_llseek" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x70a19267, "_dev_info" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xee73758, "cdc_parse_cdc_header" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x80fa8213, "usb_autopm_put_interface" },
	{ 0xebb2d65, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*in*");

MODULE_INFO(srcversion, "87EB9512D43A41EDD0EBCAD");
