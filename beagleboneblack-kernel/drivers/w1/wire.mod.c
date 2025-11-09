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
	{ 0x4994a4cc, "bus_register" },
	{ 0x402b8281, "__request_module" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x70ea3b10, "cn_add_callback" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x119d1ba6, "driver_register" },
	{ 0x1738ee91, "of_find_matching_node_and_match" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0xeefa9a4e, "hwmon_device_unregister" },
	{ 0x18e4522e, "kobject_uevent" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x7a2b51e4, "device_register" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x5d5832ca, "kthread_stop" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x11a13e31, "_kstrtol" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x5d704b9e, "hwmon_device_register_with_info" },
	{ 0x373db350, "kstrtoint" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0xa54dc022, "cn_netlink_send" },
	{ 0x80c380e5, "flush_signals" },
	{ 0x70a19267, "_dev_info" },
	{ 0x3b12f40c, "put_device" },
	{ 0x44129ade, "cn_netlink_send_mult" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6b7aab20, "sysfs_create_groups" },
	{ 0x117a1807, "sysfs_remove_groups" },
	{ 0xba585fe3, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cn,hwmon";


MODULE_INFO(srcversion, "2A305B94BE9F8A518702264");
