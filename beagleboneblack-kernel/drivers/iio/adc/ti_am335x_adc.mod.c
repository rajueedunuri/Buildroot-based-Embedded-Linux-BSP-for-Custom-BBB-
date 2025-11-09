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
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b54c444, "iio_kfifo_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2c165f8, "iio_device_unregister" },
	{ 0x2f425f5, "dma_release_channel" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0x2fca63ef, "dma_request_chan" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x63cb78f4, "__iio_device_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x56eaa6ea, "iio_device_attach_buffer" },
	{ 0x21705059, "iio_kfifo_allocate" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xa359d3ab, "of_prop_next_u32" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x7a75f19c, "devm_iio_device_alloc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x524cd2a0, "am335x_tsc_se_adc_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3a058d06, "am335x_tsc_se_set_once" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x83281f1a, "iio_push_to_buffers" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5ffb6d61, "am335x_tsc_se_clr" },
	{ 0x87f8393, "am335x_tsc_se_set_cache" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x822137e2, "arm_heavy_mb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio,ti_am335x_tscadc";

MODULE_ALIAS("of:N*T*Cti,am3359-adc");
MODULE_ALIAS("of:N*T*Cti,am3359-adcC*");

MODULE_INFO(srcversion, "5664726A91C01E351A62DE8");
