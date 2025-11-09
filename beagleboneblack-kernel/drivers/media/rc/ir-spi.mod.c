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
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x3764c28e, "__spi_register_driver" },
	{ 0x201c30b5, "devm_rc_register_device" },
	{ 0x465c4e90, "of_property_read_variable_u8_array" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x46d8f8fe, "devm_rc_allocate_device" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x5f19b8c8, "spi_sync" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("of:N*T*Cir-spi-led");
MODULE_ALIAS("of:N*T*Cir-spi-ledC*");

MODULE_INFO(srcversion, "14C8154549E88D2E0FCDD50");
