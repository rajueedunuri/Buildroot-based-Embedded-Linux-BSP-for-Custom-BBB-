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
	{ 0x7b49487f, "lock_is_held_type" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xbb0ab47b, "debug_locks" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xdd27fa87, "memchr" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8B9DE08AD76F0F815B80E8C");
