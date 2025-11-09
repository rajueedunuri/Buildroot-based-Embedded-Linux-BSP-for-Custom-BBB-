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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0xf048832f, "snd_card_file_remove" },
	{ 0x1b1745a9, "snd_pcm_release_substream" },
	{ 0x8f94ea3d, "snd_pcm_notify" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xae4f420b, "no_llseek" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb0cfa759, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6e617324, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x764be1a3, "snd_pcm_hw_refine" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x73a90789, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0x5f754e5a, "memset" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xd1dfc2d0, "snd_pcm_hw_param_last" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x66f37b66, "snd_pcm_mmap_data" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x167c0253, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xda645fb4, "snd_mixer_oss_ioctl_card" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd159ab8, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4011185f, "snd_card_file_add" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe0a8b4ef, "snd_pcm_stream_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x726ae354, "snd_pcm_stream_unlock_irq" },
	{ 0xa6da8442, "snd_register_oss_device" },
	{ 0xaf4c5e01, "snd_pcm_open_substream" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x96735245, "snd_unregister_oss_device" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0xc5ff184a, "__snd_pcm_lib_xfer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x9d669763, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x633284e4, "snd_info_free_entry" },
	{ 0xb97e294e, "param_array_ops" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2334177f, "snd_pcm_kernel_ioctl" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x48dd6941, "snd_info_register" },
	{ 0x1d9c124a, "snd_pcm_hw_param_first" },
	{ 0x8522d6c6, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-mixer-oss";


MODULE_INFO(srcversion, "2F26794F20FAB2E4287848E");
