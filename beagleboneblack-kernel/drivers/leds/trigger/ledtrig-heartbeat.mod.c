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
	{ 0x7805146b, "atomic_notifier_chain_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x3c54fb61, "panic_notifier_list" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x82d0fdf0, "atomic_notifier_chain_register" },
	{ 0x2e2af68c, "led_trigger_register" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1e98c74, "avenrun" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x8ea17629, "led_set_brightness_nosleep" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0x91715312, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0xfe950d5d, "led_trigger_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "781390CBB87ABB36CCA4FB1");
