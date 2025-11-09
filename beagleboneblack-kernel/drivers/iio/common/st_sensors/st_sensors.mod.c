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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xcb1f204, "iio_trigger_unregister" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa839e201, "iio_trigger_notify_done" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0xc53dd8, "iio_trigger_alloc" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4ad9c27e, "iio_get_time_ns" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x983e12df, "iio_trigger_poll_chained" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xcf02e34b, "__iio_trigger_register" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xdb72022b, "iio_trigger_using_own" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc26f3f7e, "irq_get_irq_data" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x167c0253, "_dev_err" },
	{ 0x7659c7e8, "of_match_device" },
	{ 0x70a19267, "_dev_info" },
	{ 0x1e22f2f7, "devm_regulator_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8d3d4aad, "get_device" },
	{ 0xa51f22cf, "__module_get" },
	{ 0x6617219f, "iio_trigger_free" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9e73082, "scnprintf" },
	{ 0x83281f1a, "iio_push_to_buffers" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe7007096, "regulator_enable" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "5A2EF4FEF8E2E6D97D54437");
