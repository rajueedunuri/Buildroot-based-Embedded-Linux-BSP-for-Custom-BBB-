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
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0x5992758a, "of_get_property" },
	{ 0xfe02ff55, "of_property_read_variable_u32_array" },
	{ 0xd0893109, "of_get_next_child" },
	{ 0xdafb6fea, "of_led_classdev_register" },
	{ 0xb81960ca, "snprintf" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xc48e6d20, "i2c_smbus_write_byte_data" },
	{ 0xa9fd6595, "i2c_smbus_read_byte_data" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5f41b675, "led_classdev_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class";

MODULE_ALIAS("of:N*T*Cnxp,pca9632");
MODULE_ALIAS("of:N*T*Cnxp,pca9632C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9633");
MODULE_ALIAS("of:N*T*Cnxp,pca9633C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9634");
MODULE_ALIAS("of:N*T*Cnxp,pca9634C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9635");
MODULE_ALIAS("of:N*T*Cnxp,pca9635C*");
MODULE_ALIAS("acpi*:PCA9632:*");
MODULE_ALIAS("acpi*:PCA9633:*");
MODULE_ALIAS("acpi*:PCA9634:*");
MODULE_ALIAS("acpi*:PCA9635:*");
MODULE_ALIAS("i2c:pca9632");
MODULE_ALIAS("i2c:pca9633");
MODULE_ALIAS("i2c:pca9634");
MODULE_ALIAS("i2c:pca9635");

MODULE_INFO(srcversion, "5A0E4B06120E884D3CEFDCD");
