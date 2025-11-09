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
	{ 0xf9a482f9, "msleep" },
	{ 0x7e6f736c, "crypto_dequeue_request" },
	{ 0xa0c21452, "kthread_destroy_worker" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x167c0253, "_dev_err" },
	{ 0xc2977575, "crypto_enqueue_request" },
	{ 0x70a19267, "_dev_info" },
	{ 0xd2b6e79e, "kthread_queue_work" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xbc19732d, "sched_setscheduler" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x235721e3, "kthread_create_worker" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ABDECB1C0B73CB274D20855");
