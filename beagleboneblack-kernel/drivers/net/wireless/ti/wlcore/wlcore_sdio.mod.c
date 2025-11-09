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
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0xcf5227b0, "irq_of_parse_and_map" },
	{ 0xe99ba13e, "sdio_writesb" },
	{ 0x83e86204, "sdio_enable_func" },
	{ 0xfb06423e, "mmc_hw_reset" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0x2cd9b8d0, "sdio_get_host_pm_caps" },
	{ 0x7c32d0f0, "printk" },
	{ 0x72f5fee0, "of_match_node" },
	{ 0x8b2f5817, "platform_device_alloc" },
	{ 0x63ef751d, "platform_device_add" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xc26f3f7e, "irq_get_irq_data" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0x167c0253, "_dev_err" },
	{ 0xe0d10054, "sdio_readsb" },
	{ 0x53ac71eb, "sdio_unregister_driver" },
	{ 0x8b5db9c, "platform_device_add_resources" },
	{ 0x913174f, "sdio_f0_writeb" },
	{ 0x5daa4da1, "sdio_set_host_pm_flags" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37236de6, "sdio_f0_readb" },
	{ 0x4c06bef9, "platform_device_add_data" },
	{ 0xf0a136fc, "sdio_memcpy_toio" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x38c3cb96, "sdio_register_driver" },
	{ 0x70c59ede, "sdio_memcpy_fromio" },
	{ 0x460115c7, "sdio_claim_host" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x20c5c447, "sdio_set_block_size" },
	{ 0xc0f42957, "sdio_disable_func" },
	{ 0x56a89a72, "sdio_release_host" },
	{ 0x9fc7bfd4, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "6FD620910A8553872D85D6B");
