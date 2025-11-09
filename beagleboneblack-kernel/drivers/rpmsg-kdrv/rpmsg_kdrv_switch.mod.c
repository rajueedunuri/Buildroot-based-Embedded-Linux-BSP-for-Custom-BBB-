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
	{ 0x7b6c31f0, "rpmsg_kdrv_register_driver" },
	{ 0x70a19267, "_dev_info" },
	{ 0xb81960ca, "snprintf" },
	{ 0x71c90087, "memcmp" },
	{ 0x9d669763, "memcpy" },
	{ 0x167c0253, "_dev_err" },
	{ 0x9a2b0e85, "___ratelimit" },
	{ 0xfebdf5ed, "rpmsg_kdrv_send_request_with_response" },
	{ 0xfcbbd5a3, "devm_kfree" },
	{ 0x916ce562, "rpmsg_kdrv_send_message" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rpmsg_kdrv";


MODULE_INFO(srcversion, "65FC9A8B592D05DE584AF41");
