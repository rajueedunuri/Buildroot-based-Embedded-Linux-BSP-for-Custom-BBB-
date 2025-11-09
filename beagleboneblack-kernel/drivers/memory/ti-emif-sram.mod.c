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
	{ 0x6bc87c41, "gen_pool_virt_to_phys" },
	{ 0x966c7bcf, "of_gen_pool_get" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0xbd039ba9, "gen_pool_alloc" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0x167c0253, "_dev_err" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0xfbd00843, "sram_exec_copy" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xd8a1d8f2, "gen_pool_free" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,emif-am3352");
MODULE_ALIAS("of:N*T*Cti,emif-am3352C*");
MODULE_ALIAS("of:N*T*Cti,emif-am4372");
MODULE_ALIAS("of:N*T*Cti,emif-am4372C*");

MODULE_INFO(srcversion, "6C271447E84C3C7C550B2FE");
