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
	{ 0xf67985d7, "param_ops_bool" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x96a8db56, "pci_unregister_driver" },
	{ 0x499fda6d, "__pci_register_driver" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa28e506e, "misc_register" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xb81960ca, "snprintf" },
	{ 0x3b5eb5cd, "ida_alloc_range" },
	{ 0xa77db3c, "pci_ioremap_bar" },
	{ 0xbcd6586e, "pci_intx" },
	{ 0xb947b5b, "pci_set_master" },
	{ 0x8262d510, "pci_request_regions" },
	{ 0x5367f535, "pci_enable_device" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x122170da, "crc32_le" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x68f79fd7, "complete" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x98ecdbf2, "pci_alloc_irq_vectors_affinity" },
	{ 0x167c0253, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4a385b55, "pci_disable_device" },
	{ 0xbd219c14, "pci_release_regions" },
	{ 0xb093aec6, "pci_free_irq_vectors" },
	{ 0x6766e0b0, "pci_iounmap" },
	{ 0x1c9b1de, "ida_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b6948bc, "misc_deregister" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf8b96ad1, "devm_free_irq" },
	{ 0x85630854, "pci_irq_vector" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000016C3d0000EDDAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3EE7EBA80A1F8A1DAF19EE0");
