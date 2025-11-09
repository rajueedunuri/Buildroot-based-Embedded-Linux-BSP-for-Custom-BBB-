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
	{ 0xf9a482f9, "msleep" },
	{ 0x7e85cfc8, "netlink_has_listeners" },
	{ 0x532a288f, "proc_create_single_data" },
	{ 0xa34e4bd3, "_raw_spin_lock_bh" },
	{ 0x6e617324, "seq_printf" },
	{ 0xd2b16da0, "remove_proc_entry" },
	{ 0x7c32d0f0, "printk" },
	{ 0x37e39ec3, "netlink_kernel_release" },
	{ 0x5eb287b, "netlink_unicast" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x71abaf71, "init_net" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xd91c82f4, "netlink_broadcast" },
	{ 0x21eb2594, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xafcd0db3, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5f55ecaf, "__nlmsg_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BE9BAB7FAF4DF956E5FC53D");
