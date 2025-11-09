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
	{ 0x9ddbec90, "pci_epf_unregister_driver" },
	{ 0xcf88c227, "__pci_epf_register_driver" },
	{ 0x71b629b8, "__alloc_workqueue_key" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x216d759a, "mmiocpy" },
	{ 0xcf9911f4, "pci_epc_get_msix" },
	{ 0x6207e4c5, "pci_epc_mem_free_addr" },
	{ 0xf3a9dd4b, "pci_epc_unmap_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4bb2677, "pci_epf_tx" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x122170da, "crc32_le" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x72796790, "pci_epc_map_addr" },
	{ 0x58cf3efa, "pci_epc_mem_alloc_addr" },
	{ 0xf96533d0, "pci_epc_get_msi" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c32d0f0, "printk" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xabfbd744, "pci_epc_raise_irq" },
	{ 0xfeddda7f, "pci_epc_set_msix" },
	{ 0xbe53fc71, "pci_epc_set_msi" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x82d0fdf0, "atomic_notifier_chain_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0xb8a14207, "pci_epc_set_bar" },
	{ 0xca97ea40, "pci_epf_alloc_space" },
	{ 0xf6b2ae3a, "pci_epc_write_header" },
	{ 0x2f2c3c08, "pci_epc_epf_init" },
	{ 0x91bcad9d, "pci_epc_get_first_free_bar" },
	{ 0x182dce28, "pci_epc_get_features" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xda2baae9, "pci_epc_epf_exit" },
	{ 0xa1e00308, "pci_epf_free_space" },
	{ 0xf66d299b, "pci_epc_clear_bar" },
	{ 0x861db7fa, "pci_epc_stop" },
	{ 0x7acda787, "cancel_delayed_work" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "42E7932FD5D53B32FCA2084");
