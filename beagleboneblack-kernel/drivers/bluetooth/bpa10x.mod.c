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
	{ 0x240f8bc4, "hci_recv_diag" },
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x7a1c6fe6, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9a514386, "hci_alloc_dev" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x50245fbb, "skb_put" },
	{ 0xe90861c6, "usb_kill_anchored_urbs" },
	{ 0xe610d422, "hci_set_fw_info" },
	{ 0xd7442057, "bt_info" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x3b104a61, "usb_unanchor_urb" },
	{ 0x47022514, "bt_err" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xc458796f, "usb_anchor_urb" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x352e9022, "skb_push" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x291bd046, "__hci_cmd_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0x1a05b300, "hci_free_dev" },
	{ 0x16d9bd59, "hci_unregister_dev" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,usbcore";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D992476686D5A0D8B25640F");
