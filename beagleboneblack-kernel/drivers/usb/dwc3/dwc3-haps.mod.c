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
	{ 0x96a8db56, "pci_unregister_driver" },
	{ 0x499fda6d, "__pci_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0x63ef751d, "platform_device_add" },
	{ 0x9fc7bfd4, "platform_device_put" },
	{ 0x437cb008, "platform_device_add_properties" },
	{ 0x8b5db9c, "platform_device_add_resources" },
	{ 0x5f754e5a, "memset" },
	{ 0x8b2f5817, "platform_device_alloc" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xb947b5b, "pci_set_master" },
	{ 0x15f72a1d, "pcim_enable_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb6d86a2, "platform_device_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000016C3d0000ABCDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000ABCEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000ABCFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D3D091999D2624476E2D665");
