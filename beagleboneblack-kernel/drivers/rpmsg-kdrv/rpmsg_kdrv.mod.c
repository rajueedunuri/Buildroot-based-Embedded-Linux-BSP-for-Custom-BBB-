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
	{ 0x4994a4cc, "bus_register" },
	{ 0x119d1ba6, "driver_register" },
	{ 0x6f54fe64, "rpmsg_send" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x7a2b51e4, "device_register" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x92a299d1, "unregister_rpmsg_driver" },
	{ 0x3b3a099e, "idr_alloc" },
	{ 0x63decd9f, "bus_find_device" },
	{ 0x481422a2, "__register_rpmsg_driver" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfcbbd5a3, "devm_kfree" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xafa8fc84, "idr_remove" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf5e354ce, "devm_kstrdup" },
	{ 0x1000e51, "schedule" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x9d669763, "memcpy" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x87886f14, "dev_set_name" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x66661ff5, "idr_find" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rpmsg_core";


MODULE_INFO(srcversion, "89C94432083C8944FD947B6");
