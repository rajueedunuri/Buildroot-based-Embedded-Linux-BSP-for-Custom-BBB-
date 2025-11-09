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
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x10173e71, "tty_register_ldisc" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x8c51251a, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0x5f754e5a, "memset" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x4de160bc, "ppp_input_error" },
	{ 0xb1e94d54, "skb_dequeue" },
	{ 0x72ff7da5, "ppp_input" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3b5d6b25, "consume_skb" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xcded81d2, "down" },
	{ 0x37a0cba, "kfree" },
	{ 0x5dbc2b21, "skb_queue_purge" },
	{ 0xe66df133, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x85685e86, "_raw_write_unlock_irq" },
	{ 0xeb52744e, "_raw_write_lock_irq" },
	{ 0x62d52147, "ppp_channel_index" },
	{ 0x20655a41, "tty_mode_ioctl" },
	{ 0x224775e6, "ppp_output_wakeup" },
	{ 0x21eb2594, "_raw_spin_unlock_bh" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xa34e4bd3, "_raw_spin_lock_bh" },
	{ 0x9591487a, "n_tty_ioctl_helper" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb70789e, "__might_fault" },
	{ 0x3f1131a9, "ppp_unit_number" },
	{ 0x7c32d0f0, "printk" },
	{ 0x352e9022, "skb_push" },
	{ 0x7265d6d7, "skb_pull" },
	{ 0xf10c929a, "skb_queue_tail" },
	{ 0x98a370c4, "stop_tty" },
	{ 0xe71d95d2, "start_tty" },
	{ 0x494ba58e, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x50245fbb, "skb_put" },
	{ 0x94dc0bef, "skb_trim" },
	{ 0xa764cad7, "tty_unthrottle" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x885882a3, "up" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0x5ba85985, "_raw_read_unlock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x60634ca8, "_raw_read_lock" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "9EDCB1D4D65C04AF4F84131");
