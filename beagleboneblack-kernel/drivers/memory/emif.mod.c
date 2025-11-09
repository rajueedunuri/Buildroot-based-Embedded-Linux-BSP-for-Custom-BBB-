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
	{ 0xfb03ebf0, "single_release" },
	{ 0xd4a5646e, "seq_read" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0x7b55544a, "__platform_driver_probe" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xdd85063c, "lpddr2_jedec_min_tck" },
	{ 0x845aa3dc, "lpddr2_jedec_timings" },
	{ 0x8dc11669, "lpddr2_jedec_addressing_table" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcbbd5a3, "devm_kfree" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xb9e9af70, "_dev_emerg" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x7c32d0f0, "printk" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0x70a19267, "_dev_info" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x5e998fda, "platform_get_irq" },
	{ 0x551ce446, "devm_ioremap_resource" },
	{ 0x4505a454, "platform_get_resource" },
	{ 0xd21b633d, "of_get_min_tck" },
	{ 0x65e6ab1e, "of_get_ddr_timings" },
	{ 0x5992758a, "of_get_property" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xa3835808, "of_device_is_compatible" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x9efb1ad4, "of_parse_phandle" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x515c7e1d, "seq_putc" },
	{ 0x6e617324, "seq_printf" },
	{ 0x8dda7239, "single_open" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x167c0253, "_dev_err" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,emif-4d");
MODULE_ALIAS("of:N*T*Cti,emif-4dC*");
MODULE_ALIAS("of:N*T*Cti,emif-4d5");
MODULE_ALIAS("of:N*T*Cti,emif-4d5C*");

MODULE_INFO(srcversion, "2AEFC277AEDBE89FE5EC69C");
