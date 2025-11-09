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
	{ 0x861c2b52, "ahci_platform_ops" },
	{ 0xd2ca150f, "ata_platform_remove_one" },
	{ 0x183cef6e, "ahci_sdev_attrs" },
	{ 0x52d5848, "ahci_shost_attrs" },
	{ 0xf89e53b7, "ata_scsi_unlock_native_capacity" },
	{ 0x389db58b, "ata_std_bios_param" },
	{ 0xabd0b28c, "ata_scsi_change_queue_depth" },
	{ 0x9251e018, "ata_scsi_slave_destroy" },
	{ 0x356dd8b0, "ata_scsi_slave_config" },
	{ 0x65bcd742, "ata_scsi_queuecmd" },
	{ 0x386e2219, "ata_scsi_ioctl" },
	{ 0x14097772, "ahci_platform_resume" },
	{ 0xbad16f7c, "ahci_platform_suspend" },
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0xed0fdd7d, "ahci_check_ready" },
	{ 0x7340942f, "ahci_do_softreset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x95e043d6, "ahci_platform_disable_resources" },
	{ 0x53a92ecc, "ahci_platform_init_host" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x167c0253, "_dev_err" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf492eecf, "ahci_platform_enable_resources" },
	{ 0x8da93345, "ahci_platform_get_resources" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,dm816-ahci");
MODULE_ALIAS("of:N*T*Cti,dm816-ahciC*");

MODULE_INFO(srcversion, "A4A6C4105A364B1B1BA6D2B");
