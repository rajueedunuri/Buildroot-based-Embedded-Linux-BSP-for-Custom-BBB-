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
	{ 0xeea26fc5, "tty_port_tty_get" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4994a4cc, "bus_register" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x119d1ba6, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xd981555c, "seq_puts" },
	{ 0x8fa90806, "tty_port_open" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x6e617324, "seq_printf" },
	{ 0xa6b40eba, "tty_port_hangup" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0xa2849a5e, "tty_register_driver" },
	{ 0x4e996be7, "usb_autopm_get_interface" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x8f22195a, "put_tty_driver" },
	{ 0x91715312, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x40184577, "tty_set_operations" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xb1921014, "__tty_insert_flip_char" },
	{ 0xfa54f47b, "tty_port_close" },
	{ 0x2535e8af, "idr_destroy" },
	{ 0x718fdaa, "device_del" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xde1a6ce0, "tty_ldisc_deref" },
	{ 0x91b45caa, "tty_port_register_device" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x3c63f4cf, "usb_unpoison_urb" },
	{ 0x31db80db, "usb_poison_urb" },
	{ 0x515c7e1d, "seq_putc" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0xd65637c6, "tty_port_init" },
	{ 0x5a265c41, "tty_insert_flip_string_fixed_flag" },
	{ 0xc7ae1798, "tty_port_destroy" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8e6a490d, "tty_vhangup" },
	{ 0x9b8f031e, "tty_ldisc_ref" },
	{ 0x3b3a099e, "idr_alloc" },
	{ 0x305c59e9, "device_add" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa36628de, "usb_store_new_id" },
	{ 0xf64be4aa, "usb_match_id" },
	{ 0xafa8fc84, "idr_remove" },
	{ 0x380d5642, "tty_port_tty_wakeup" },
	{ 0xd159ab8, "module_put" },
	{ 0xd26e36f0, "tty_unregister_device" },
	{ 0x70a19267, "_dev_info" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xcf2af4e4, "usb_get_dev" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x650b0d69, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x8f58acd5, "usb_get_intf" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x60deda3e, "tty_unregister_driver" },
	{ 0x2afe6e62, "tty_hangup" },
	{ 0x1ac6c281, "usb_show_dynids" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x33aac04b, "tty_standard_install" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3f2af1b5, "__tty_alloc_driver" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x4232d702, "device_initialize" },
	{ 0x55b40086, "usb_match_one_id" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x28c6c9c6, "tty_kref_put" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xe8daaf99, "driver_attach" },
	{ 0xfaf85ddd, "tty_flip_buffer_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7b8fb54b, "param_ops_ushort" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x66661ff5, "idr_find" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0x80fa8213, "usb_autopm_put_interface" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x5b2e7c4e, "usb_put_intf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";


MODULE_INFO(srcversion, "68D9DF006C82E7344FF24F4");
