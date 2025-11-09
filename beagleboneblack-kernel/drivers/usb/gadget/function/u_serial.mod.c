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
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xa55a29fc, "usb_ep_disable" },
	{ 0x1d883cce, "usb_ep_enable" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x9aab10eb, "usb_ep_queue" },
	{ 0xa2849a5e, "tty_register_driver" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x8f22195a, "put_tty_driver" },
	{ 0x1f1f16fa, "usb_ep_alloc_request" },
	{ 0x40184577, "tty_set_operations" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x91b45caa, "tty_port_register_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0xd65637c6, "tty_port_init" },
	{ 0x5a265c41, "tty_insert_flip_string_fixed_flag" },
	{ 0xc7ae1798, "tty_port_destroy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd26e36f0, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x61af2c95, "usb_ep_free_request" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x60deda3e, "tty_unregister_driver" },
	{ 0x2afe6e62, "tty_hangup" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3f2af1b5, "__tty_alloc_driver" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xfaf85ddd, "tty_flip_buffer_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x34e95fb5, "tty_wakeup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6A799C3FFF7DDD27021F627");
