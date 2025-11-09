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
	{ 0xae4f420b, "no_llseek" },
	{ 0x6b6948bc, "misc_deregister" },
	{ 0xa28e506e, "misc_register" },
	{ 0xe22f7667, "input_mt_init_slots" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x97255bdf, "strlen" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x5058cdc5, "input_ff_destroy" },
	{ 0x6c0cbd9a, "input_register_device" },
	{ 0x1712b013, "input_ff_create" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe608e9ba, "input_event" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x34885ad0, "input_allocate_device" },
	{ 0x6188b47c, "input_alloc_absinfo" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x7c32d0f0, "printk" },
	{ 0xba3ebf2e, "wait_for_completion_timeout" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0xb70789e, "__might_fault" },
	{ 0xcf731d4, "input_ff_flush" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xc12c93df, "input_unregister_device" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x68f79fd7, "complete" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4d667090, "input_free_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9DAA85B956184AA3EFFB74E");
