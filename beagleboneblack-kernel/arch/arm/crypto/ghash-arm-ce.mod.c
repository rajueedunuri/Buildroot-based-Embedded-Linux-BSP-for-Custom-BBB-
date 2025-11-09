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
	{ 0xf5485599, "cryptd_ahash_queued" },
	{ 0xe693100b, "shash_ahash_digest" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x1d038704, "crypto_shash_final" },
	{ 0xd696e36, "crypto_ahash_final" },
	{ 0x19435e5f, "crypto_ahash_digest" },
	{ 0x5f754e5a, "memset" },
	{ 0x76b2e514, "cryptd_shash_desc" },
	{ 0xf9c6b0ad, "crypto_register_ahash" },
	{ 0xd84eb48f, "crypto_unregister_shash" },
	{ 0xd6d64d69, "crypto_register_shash" },
	{ 0x11a9e53, "elf_hwcap2" },
	{ 0xfc4f4aca, "crypto_unregister_ahash" },
	{ 0xe771adbc, "cryptd_ahash_child" },
	{ 0x3d3c540f, "elf_hwcap" },
	{ 0x9d669763, "memcpy" },
	{ 0xb94dcc6c, "crypto_ahash_setkey" },
	{ 0xe607a1de, "shash_ahash_update" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x828595f, "cryptd_alloc_ahash" },
	{ 0x778486c6, "cryptd_free_ahash" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cryptd";


MODULE_INFO(srcversion, "53E584F32C9F66E4DB6BA52");
