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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xce8b4ca0, "mutex_destroy" },
	{ 0xc068440e, "__kfifo_alloc" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x6a3184bd, "devres_alloc_node" },
	{ 0x434b32f4, "iio_buffer_init" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xa6b4d242, "devres_release" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xda45ac9a, "devres_add" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe64d4485, "iio_buffer_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "BC51D4BF1B57CDCC0247DA9");
