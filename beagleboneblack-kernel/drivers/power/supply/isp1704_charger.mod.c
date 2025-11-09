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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x82d0fdf0, "atomic_notifier_chain_register" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x1fda871, "power_supply_register" },
	{ 0x91715312, "sprintf" },
	{ 0xc5b760af, "devm_usb_get_phy" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9823d932, "devm_usb_get_phy_by_phandle" },
	{ 0xeafe36dc, "devm_gpio_request_one" },
	{ 0x70a19267, "_dev_info" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xf5d31635, "of_get_named_gpio_flags" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xfb24a89b, "power_supply_get_drvdata" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x870dbca5, "usb_gadget_connect" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6cd8029d, "usb_gadget_disconnect" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x139badf5, "power_supply_changed" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x1b84259, "power_supply_unregister" },
	{ 0x7805146b, "atomic_notifier_chain_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xed6384e4, "gpiod_set_raw_value" },
	{ 0xf21f7961, "gpio_to_desc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,isp1704");
MODULE_ALIAS("of:N*T*Cnxp,isp1704C*");
MODULE_ALIAS("of:N*T*Cnxp,isp1707");
MODULE_ALIAS("of:N*T*Cnxp,isp1707C*");

MODULE_INFO(srcversion, "486C0157659DAACF04F056A");
