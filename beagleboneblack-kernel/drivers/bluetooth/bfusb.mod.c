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
	{ 0x169c2758, "usb_deregister" },
	{ 0x9e78b276, "usb_register_driver" },
	{ 0x16d9bd59, "hci_unregister_dev" },
	{ 0xbb5ec0eb, "usb_kill_urb" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x1a05b300, "hci_free_dev" },
	{ 0x7a1c6fe6, "hci_register_dev" },
	{ 0x9a514386, "hci_alloc_dev" },
	{ 0xfb7962fd, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x220aba45, "usb_bulk_msg" },
	{ 0xb6b1a9d5, "usb_control_msg" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xd7442057, "bt_info" },
	{ 0x88e0ec02, "request_firmware" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x7dcb1948, "__rwlock_init" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x7df588b3, "hci_recv_frame" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5ba85985, "_raw_read_unlock" },
	{ 0x60634ca8, "_raw_read_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x50245fbb, "skb_put" },
	{ 0x352e9022, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x5d787991, "skb_queue_head" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x51af4823, "_raw_write_unlock_irqrestore" },
	{ 0x6abb0712, "_raw_write_lock_irqsave" },
	{ 0xebb2d65, "usb_alloc_urb" },
	{ 0x2b2886a9, "usb_free_urb" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xfcebef57, "skb_unlink" },
	{ 0x47022514, "bt_err" },
	{ 0xf3697e26, "usb_submit_urb" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x11d41bd9, "__alloc_skb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5dbc2b21, "skb_queue_purge" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A643A2BA15450C65F34B24A");
