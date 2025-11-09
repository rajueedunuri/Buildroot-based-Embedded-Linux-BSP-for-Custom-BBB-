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
	{ 0x119d1ba6, "driver_register" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x91715312, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x18e83628, "of_device_uevent_modalias" },
	{ 0x5f754e5a, "memset" },
	{ 0x7a2b51e4, "device_register" },
	{ 0x670abec6, "device_find_child" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x328a05f1, "strncpy" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0x75a7da49, "dev_pm_domain_detach" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xe79e9ee, "dev_pm_domain_attach" },
	{ 0x93c3d7cf, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xba585fe3, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "756C7F871939AB3EDEFDEFC");
