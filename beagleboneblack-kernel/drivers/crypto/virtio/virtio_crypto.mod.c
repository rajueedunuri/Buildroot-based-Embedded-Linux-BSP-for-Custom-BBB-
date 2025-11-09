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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x30237340, "crypto_ablkcipher_type" },
	{ 0xbb6df778, "sg_nents" },
	{ 0x4c0682b9, "crypto_engine_alloc_init" },
	{ 0xe06699b2, "sg_next" },
	{ 0x7f9fc9a, "cpu_topology" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x97f6a29f, "virtqueue_kick" },
	{ 0xec9a0004, "virtqueue_get_buf" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x91480c4a, "virtio_break_device" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x2b803094, "virtqueue_add_sgs" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x20603e4a, "crypto_engine_start" },
	{ 0x42685d7, "sg_nents_for_len" },
	{ 0x9662555, "virtqueue_disable_cb" },
	{ 0xd96568e2, "cpu_bit_bitmap" },
	{ 0x167c0253, "_dev_err" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x62c735ab, "crypto_finalize_ablkcipher_request" },
	{ 0xd159ab8, "module_put" },
	{ 0x70a19267, "_dev_info" },
	{ 0xc3fc62e0, "crypto_transfer_ablkcipher_request_to_engine" },
	{ 0x54521265, "unregister_virtio_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x3a0a68f9, "crypto_register_alg" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa20d8f68, "crypto_engine_exit" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xe4effcd5, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9952127e, "virtqueue_is_broken" },
	{ 0xda3a43dc, "virtqueue_detach_unused_buf" },
	{ 0xb6d90ac4, "crypto_unregister_alg" },
	{ 0x1bf4d3c, "virtqueue_enable_cb" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xfecb9401, "register_virtio_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crypto_engine,virtio_ring,virtio";

MODULE_ALIAS("virtio:d00000014v*");

MODULE_INFO(srcversion, "8BA83AC69B7C8A0B767F36E");
