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
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x71c90087, "memcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe467aff8, "rc_keydown" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x73a90789, "mutex_trylock" },
	{ 0xfae03259, "delayed_work_timer_fn" },
	{ 0x70a19267, "_dev_info" },
	{ 0x5f754e5a, "memset" },
	{ 0xd9a707a5, "i2c_new_dummy" },
	{ 0x86a76016, "rc_free_device" },
	{ 0xf300475, "rc_register_device" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xb81960ca, "snprintf" },
	{ 0xcd8ba341, "rc_allocate_device" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x81e9e1d4, "i2c_transfer" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x428dd790, "queue_delayed_work_on" },
	{ 0x12a38747, "usleep_range" },
	{ 0x167c0253, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeb3005b4, "i2c_transfer_buffer_flags" },
	{ 0xc15f56a8, "rc_unregister_device" },
	{ 0xeba653ae, "i2c_unregister_device" },
	{ 0xe14d2400, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "FEC2553F79D7CE4D37177D0");
