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
	{ 0x1045d604, "rproc_da_to_va" },
	{ 0x227d2c1e, "generic_file_llseek" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xe3374266, "simple_attr_read" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xd0a1866d, "mbox_request_channel" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x47e07049, "of_property_read_string" },
	{ 0x3ebcc50d, "mbox_client_txdone" },
	{ 0x5ddc8316, "rproc_put" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x7c7cb43, "simple_attr_release" },
	{ 0xea90d6ce, "request_firmware_nowait" },
	{ 0x167c0253, "_dev_err" },
	{ 0x952664c5, "do_exit" },
	{ 0x70a19267, "_dev_info" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0x5989674c, "rproc_shutdown" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x68f79fd7, "complete" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0xd893e7f5, "mbox_free_channel" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0x4527bf0d, "rproc_boot" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0xe7ede10a, "rproc_get_by_phandle" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x72998378, "simple_attr_open" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0x92363698, "simple_attr_write" },
	{ 0xd3626f15, "mbox_send_message" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=remoteproc";

MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3-ipc");
MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3-ipcC*");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3-ipc");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3-ipcC*");

MODULE_INFO(srcversion, "503FA08368870C31027136C");
