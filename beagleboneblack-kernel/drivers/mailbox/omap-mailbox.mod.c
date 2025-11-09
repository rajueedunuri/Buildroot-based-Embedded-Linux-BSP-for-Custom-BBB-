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
	{ 0xd8e23ba9, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xfc0b87e8, "mbox_chan_received_data" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x76eda565, "mbox_controller_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x32bcb3be, "class_unregister" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xd42ab1b7, "device_create" },
	{ 0xa83cedfa, "mbox_controller_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x125d91e7, "mbox_chan_txdone" },
	{ 0xbb0423bc, "__class_register" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfcbbd5a3, "devm_kfree" },
	{ 0xb71fa38a, "of_find_node_by_phandle" },
	{ 0x70a19267, "_dev_info" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x350bc3aa, "of_get_next_available_child" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba585fe3, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xd893e7f5, "mbox_free_channel" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x820b63f7, "param_ops_uint" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap2-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap2-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,omap3-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap3-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap4-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,am654-mailbox");
MODULE_ALIAS("of:N*T*Cti,am654-mailboxC*");

MODULE_INFO(srcversion, "BB18CC3129E181045CB64F9");
