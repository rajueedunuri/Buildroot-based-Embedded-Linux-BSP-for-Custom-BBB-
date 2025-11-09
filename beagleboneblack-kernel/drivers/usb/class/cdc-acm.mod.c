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
	{ 0x2535e8af, "idr_destroy" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8f22195a, "put_tty_driver" },
	{ 0x60deda3e, "tty_unregister_driver" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0xa2849a5e, "tty_register_driver" },
	{ 0x40184577, "tty_set_operations" },
	{ 0x3f2af1b5, "__tty_alloc_driver" },
	{ 0x380d5642, "tty_port_tty_wakeup" },
	{ 0x71c90087, "memcmp" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xb4afc7a2, "usb_clear_halt" },
	{ 0x91b45caa, "tty_port_register_device" },
	{ 0x4806d057, "usb_driver_claim_interface" },
	{ 0x70a19267, "_dev_info" },
	{ 0x8dec8d1e, "device_create_file" },
	{ 0xedc5eced, "usb_find_common_endpoints" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x66e1d1bf, "usb_alloc_coherent" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x3b3a099e, "idr_alloc" },
	{ 0x8f58acd5, "usb_get_intf" },
	{ 0xd65637c6, "tty_port_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x736f6be9, "usb_ifnum_to_if" },
	{ 0xee73758, "cdc_parse_cdc_header" },
	{ 0xb6b1a9d5, "usb_control_msg" },
	{ 0x33aac04b, "tty_standard_install" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0x66661ff5, "idr_find" },
	{ 0x8fa90806, "tty_port_open" },
	{ 0xfa54f47b, "tty_port_close" },
	{ 0xc458796f, "usb_anchor_urb" },
	{ 0xfe87e547, "usb_autopm_get_interface_async" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x4e996be7, "usb_autopm_get_interface" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6cbbc89, "capable" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xb70789e, "__might_fault" },
	{ 0xa6b40eba, "tty_port_hangup" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x80fa8213, "usb_autopm_put_interface" },
	{ 0x11d5f16, "usb_autopm_get_interface_no_resume" },
	{ 0x5b2e7c4e, "usb_put_intf" },
	{ 0xafa8fc84, "idr_remove" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfaf85ddd, "tty_flip_buffer_push" },
	{ 0x5a265c41, "tty_insert_flip_string_fixed_flag" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x9d669763, "memcpy" },
	{ 0x91715312, "sprintf" },
	{ 0xd11927dd, "tty_port_put" },
	{ 0x82e32a9e, "usb_driver_release_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0xd26e36f0, "tty_unregister_device" },
	{ 0x28c6c9c6, "tty_kref_put" },
	{ 0x8e6a490d, "tty_vhangup" },
	{ 0xeea26fc5, "tty_port_tty_get" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0xf59b850f, "device_remove_file" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xab4e4dd1, "usb_free_coherent" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0x38f2ca98, "tty_port_tty_hangup" },
	{ 0x5a265389, "usb_get_from_anchor" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xe7e2f841, "usb_autopm_put_interface_async" },
	{ 0x167c0253, "_dev_err" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v076Dp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0870p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp3329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11CAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1965p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p3095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1324d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20DFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D91d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D92d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D93d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D95d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D96d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D97d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D99d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D9Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F9p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BBBp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1576p03B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09D8p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CA6pA050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2912p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p042Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04D8d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04C9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0419d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p044Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0001d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0475d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0508d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0418d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0425d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0486d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04DFd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0445d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p042Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p048Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0420d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04E6d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04B2d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0134d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p046Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p002Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0088d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00FCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00B0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00ABd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0481d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0007d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0071d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04F0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0070d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0099d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0128d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p008Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00A0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p007Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0094d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p003Ad*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0108d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01F5d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02E3d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0178d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p010Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02D9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0223d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0275d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p026Cd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0154d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04CEd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D4d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0302d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0335d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p03CDd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v04E7p6651d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v03EBp0030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04D8p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p685Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Bp0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BC7p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BC7p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip04in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip05in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip06in*");
MODULE_ALIAS("usb:v1519p0452d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5A46F3A36819ABB6E7AB5EE");
