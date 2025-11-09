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
	{ 0x56636eb3, "crypto_unregister_rngs" },
	{ 0x7fd3ae1b, "crypto_register_rngs" },
	{ 0x5bb15dac, "crypto_alloc_rng" },
	{ 0x7f4b2ec, "add_random_ready_callback" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x97255bdf, "strlen" },
	{ 0x71c90087, "memcmp" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x636bd17e, "del_random_ready_callback" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x7c32d0f0, "printk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x34281783, "crypto_alloc_shash" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x2c3113e0, "crypto_shash_setkey" },
	{ 0x1d038704, "crypto_shash_final" },
	{ 0xecc8fd1a, "crypto_shash_update" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "ECC5EC3B52C2350342D6EFA");
