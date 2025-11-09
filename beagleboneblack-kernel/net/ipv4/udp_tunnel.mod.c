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
	{ 0x130c9ce3, "rcu_lock_map" },
	{ 0xad7ce36f, "sock_release" },
	{ 0xf53cb27, "metadata_dst_alloc" },
	{ 0x909ce72b, "sock_create_kern" },
	{ 0xce6db656, "rcu_is_watching" },
	{ 0x302dea3b, "lock_release" },
	{ 0x61393095, "lock_acquire" },
	{ 0xc14cb00b, "kernel_connect" },
	{ 0x892da873, "debug_lockdep_rcu_enabled" },
	{ 0xcf3b8eb8, "iptunnel_xmit" },
	{ 0x41f579dc, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x5082bd07, "ipv6_stub" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc368729f, "udp_set_csum" },
	{ 0x959f6211, "kernel_bind" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xae0bd7af, "lockdep_rcu_suspicious" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CCD2428F1623C24BA34AF5F");
