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
	{ 0x6456faf0, "udp6_set_csum" },
	{ 0xad7ce36f, "sock_release" },
	{ 0x909ce72b, "sock_create_kern" },
	{ 0xe320a9d2, "rcu_read_lock_held" },
	{ 0x302dea3b, "lock_release" },
	{ 0xeb6094a4, "kernel_setsockopt" },
	{ 0x61393095, "lock_acquire" },
	{ 0xc14cb00b, "kernel_connect" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x41f579dc, "kernel_sock_shutdown" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x317c06a1, "rcu_read_lock_bh_held" },
	{ 0x959f6211, "kernel_bind" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb0947d69, "ip6_local_out" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E17A316563353AAE267EFAA");
