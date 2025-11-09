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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x10173e71, "tty_register_ldisc" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75e82437, "serio_unregister_port" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdd430577, "__serio_register_port" },
	{ 0xb81960ca, "snprintf" },
	{ 0xf6193484, "tty_name" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xb70789e, "__might_fault" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd7aec08f, "serio_interrupt" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serio";


MODULE_INFO(srcversion, "09619DB43FB72B40D121155");
