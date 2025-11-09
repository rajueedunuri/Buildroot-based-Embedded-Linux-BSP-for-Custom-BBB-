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
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x4d667090, "input_free_device" },
	{ 0x6188b47c, "input_alloc_absinfo" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0xe22f7667, "input_mt_init_slots" },
	{ 0xbb5c00c2, "input_set_abs_params" },
	{ 0x7596103a, "input_set_capability" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9a4b37f, "kmemdup_nul" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0xbb1653b, "gpiod_set_value" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xe77d1463, "devm_gpiod_get_optional" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xb81960ca, "snprintf" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x1d4f24dc, "device_property_present" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xea90d6ce, "request_firmware_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x70a19267, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb859f38b, "krealloc" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xeb3005b4, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xff35ae0b, "wait_for_completion_interruptible_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x68f79fd7, "complete" },
	{ 0x66cf4aca, "input_mt_report_slot_state" },
	{ 0xe608e9ba, "input_event" },
	{ 0xd4b881e8, "input_mt_report_pointer_emulation" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x81e9e1d4, "i2c_transfer" },
	{ 0x167c0253, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");

MODULE_INFO(srcversion, "F69695A9AEFDC7EB61027CC");
