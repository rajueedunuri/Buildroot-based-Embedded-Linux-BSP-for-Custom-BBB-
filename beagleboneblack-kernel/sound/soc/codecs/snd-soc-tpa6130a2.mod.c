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
	{ 0xe8c387d, "regulator_disable" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0xe9eed343, "snd_soc_put_volsw" },
	{ 0x60a5a125, "regmap_read" },
	{ 0x2a1474d1, "snd_soc_get_volsw" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xb88eeef, "snd_soc_add_component_controls" },
	{ 0x184dd1b6, "gpiod_direction_output_raw" },
	{ 0x167c0253, "_dev_err" },
	{ 0x280a6e27, "snd_soc_info_volsw" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa5083211, "__devm_regmap_init_i2c" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9a66072a, "devm_snd_soc_register_component" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0xd133357e, "regcache_mark_dirty" },
	{ 0xed6384e4, "gpiod_set_raw_value" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7048edf1, "devm_gpio_request" },
	{ 0xd1b02a1b, "regcache_sync" },
	{ 0x8f1b3afd, "regcache_cache_only" },
	{ 0xe7007096, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");

MODULE_INFO(srcversion, "91B7FD63CF736CAEAA0D704");
