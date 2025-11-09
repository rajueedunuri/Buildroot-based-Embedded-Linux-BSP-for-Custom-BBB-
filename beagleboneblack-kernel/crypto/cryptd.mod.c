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
	{ 0xf26c97d7, "crypto_alloc_skcipher" },
	{ 0x516235b0, "crypto_attr_alg2" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x563207cd, "ahash_register_instance" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5917c7b8, "shash_attr_alg" },
	{ 0xa9009edb, "crypto_mod_put" },
	{ 0x30237340, "crypto_ablkcipher_type" },
	{ 0x7e6f736c, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xe693100b, "shash_ahash_digest" },
	{ 0x766d6d96, "crypto_grab_skcipher" },
	{ 0xb7cdf37, "crypto_unregister_template" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x97021b1c, "crypto_init_spawn" },
	{ 0x1d038704, "crypto_shash_final" },
	{ 0xdc628de6, "crypto_spawn_tfm" },
	{ 0x91a7ec4b, "shash_ahash_finup" },
	{ 0x51c56635, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd45b87bd, "crypto_grab_aead" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6e78b6d2, "crypto_register_template" },
	{ 0xbd1dc2f0, "crypto_register_instance" },
	{ 0x2c3113e0, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x1d6faa67, "crypto_drop_spawn" },
	{ 0xbe5e1e5f, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xc2977575, "crypto_enqueue_request" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7562a852, "crypto_destroy_tfm" },
	{ 0x2ce98559, "kcrypto_wq" },
	{ 0xec1aa6ef, "memzero_explicit" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe54719f5, "crypto_aead_setauthsize" },
	{ 0x25a7ad4f, "crypto_alloc_aead" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x47fc6eb5, "crypto_spawn_tfm2" },
	{ 0x66744a37, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe607a1de, "shash_ahash_update" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x4470b7b6, "shash_no_setkey" },
	{ 0x138fe0e0, "crypto_alloc_base" },
	{ 0x820b63f7, "param_ops_uint" },
	{ 0xb914080f, "aead_register_instance" },
	{ 0x38b23c43, "crypto_alloc_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7ACCB55CC985ADFBC3105E4");
