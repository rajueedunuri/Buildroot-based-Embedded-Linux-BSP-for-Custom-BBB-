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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x4366f4f4, "dma_buf_detach" },
	{ 0xd5682c72, "set_page_dirty_lock" },
	{ 0xe06699b2, "sg_next" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xab31d65a, "vb2_create_framevec" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0xa7f59719, "dma_buf_vunmap" },
	{ 0x22d74b38, "dma_common_get_sgtable" },
	{ 0x7c32d0f0, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x8d193eb8, "dma_buf_unmap_attachment" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd5dd3e27, "sg_alloc_table" },
	{ 0x99188f97, "dma_buf_map_attachment" },
	{ 0x65f2664, "dma_buf_export" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf8b23fe3, "dma_buf_attach" },
	{ 0x8d3d4aad, "get_device" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd31fb4b, "vb2_common_vm_ops" },
	{ 0x79bf123, "sg_alloc_table_from_pages" },
	{ 0xb1b6d400, "dma_common_mmap" },
	{ 0x8441c8cb, "sg_free_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7b19645b, "dma_buf_vmap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "74A51E7B97D4CDBF155AB4D");
