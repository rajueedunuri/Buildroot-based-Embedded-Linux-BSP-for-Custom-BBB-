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
	{ 0x48a5b067, "__machine_arch_type" },
	{ 0xe8c387d, "regulator_disable" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf21f7961, "gpio_to_desc" },
	{ 0xd02e5420, "snd_soc_dapm_nc_pin" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdb8a390a, "platform_device_del" },
	{ 0x8b2f5817, "platform_device_alloc" },
	{ 0x63ef751d, "platform_device_add" },
	{ 0xb6d86a2, "platform_device_unregister" },
	{ 0x184dd1b6, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x3b005402, "snd_soc_dai_set_clkdiv" },
	{ 0x514cce58, "snd_soc_dai_set_sysclk" },
	{ 0xfe990052, "gpio_free" },
	{ 0xed6384e4, "gpiod_set_raw_value" },
	{ 0xfbf9f30d, "regulator_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3117a814, "regulator_get" },
	{ 0xe7007096, "regulator_enable" },
	{ 0x9fc7bfd4, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "8739EC6844B45058E77EAD6");
