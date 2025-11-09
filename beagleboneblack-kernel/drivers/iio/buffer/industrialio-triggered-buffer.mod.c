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
	{ 0xe93e49c3, "devres_free" },
	{ 0x21705059, "iio_kfifo_allocate" },
	{ 0x6a3184bd, "devres_alloc_node" },
	{ 0xf860fba0, "devm_iio_device_match" },
	{ 0x3c625f25, "iio_triggered_buffer_postenable" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x56eaa6ea, "iio_device_attach_buffer" },
	{ 0xa6b4d242, "devres_release" },
	{ 0x4ea5d75c, "iio_triggered_buffer_predisable" },
	{ 0x2b54c444, "iio_kfifo_free" },
	{ 0xda45ac9a, "devres_add" },
	{ 0x96b3d152, "iio_alloc_pollfunc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd3a6db43, "iio_dealloc_pollfunc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";


MODULE_INFO(srcversion, "E6C701783AF27252026FF9B");
