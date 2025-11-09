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
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0x78bb04dc, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x2ee26c1, "free_pages_exact" },
	{ 0xe06699b2, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xaec655c7, "alloc_pages_exact" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x167c0253, "_dev_err" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "88DA3B892C86A598D79BE8F");
