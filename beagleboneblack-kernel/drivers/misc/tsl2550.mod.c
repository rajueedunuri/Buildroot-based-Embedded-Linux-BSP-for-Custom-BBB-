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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x167c0253, "_dev_err" },
	{ 0x8ea529f5, "sysfs_create_group" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x70a19267, "_dev_info" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xa9fd6595, "i2c_smbus_read_byte_data" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x92e12f89, "sysfs_remove_group" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe0466aa3, "i2c_smbus_write_byte" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ctaos,tsl2550");
MODULE_ALIAS("of:N*T*Ctaos,tsl2550C*");
MODULE_ALIAS("i2c:tsl2550");

MODULE_INFO(srcversion, "E22E7DDD3B6CB2516CAE6DA");
