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
	{ 0xe8c387d, "regulator_disable" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0x3764c28e, "__spi_register_driver" },
	{ 0x449dfcc1, "spi_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x8b2f5817, "platform_device_alloc" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x63ef751d, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc26f3f7e, "irq_get_irq_data" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0x167c0253, "_dev_err" },
	{ 0x5f19b8c8, "spi_sync" },
	{ 0x8b5db9c, "platform_device_add_resources" },
	{ 0x70a19267, "_dev_info" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4c06bef9, "platform_device_add_data" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x9fc7bfd4, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,wl1271");
MODULE_ALIAS("of:N*T*Cti,wl1271C*");
MODULE_ALIAS("of:N*T*Cti,wl1273");
MODULE_ALIAS("of:N*T*Cti,wl1273C*");
MODULE_ALIAS("of:N*T*Cti,wl1281");
MODULE_ALIAS("of:N*T*Cti,wl1281C*");
MODULE_ALIAS("of:N*T*Cti,wl1283");
MODULE_ALIAS("of:N*T*Cti,wl1283C*");
MODULE_ALIAS("of:N*T*Cti,wl1285");
MODULE_ALIAS("of:N*T*Cti,wl1285C*");
MODULE_ALIAS("of:N*T*Cti,wl1801");
MODULE_ALIAS("of:N*T*Cti,wl1801C*");
MODULE_ALIAS("of:N*T*Cti,wl1805");
MODULE_ALIAS("of:N*T*Cti,wl1805C*");
MODULE_ALIAS("of:N*T*Cti,wl1807");
MODULE_ALIAS("of:N*T*Cti,wl1807C*");
MODULE_ALIAS("of:N*T*Cti,wl1831");
MODULE_ALIAS("of:N*T*Cti,wl1831C*");
MODULE_ALIAS("of:N*T*Cti,wl1835");
MODULE_ALIAS("of:N*T*Cti,wl1835C*");
MODULE_ALIAS("of:N*T*Cti,wl1837");
MODULE_ALIAS("of:N*T*Cti,wl1837C*");

MODULE_INFO(srcversion, "D5C20EC5EC8E039301407CE");
