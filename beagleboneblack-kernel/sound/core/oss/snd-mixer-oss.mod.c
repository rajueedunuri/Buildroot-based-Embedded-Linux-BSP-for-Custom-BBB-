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
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xc8b84a9b, "up_read" },
	{ 0xf685a283, "snd_ctl_find_numid" },
	{ 0xf048832f, "snd_card_file_remove" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb0cfa759, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6e617324, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3a83a5b2, "down_read" },
	{ 0x5f754e5a, "memset" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x885bd94c, "snd_ctl_notify" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf81881fa, "snd_cards" },
	{ 0x167c0253, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd159ab8, "module_put" },
	{ 0x471e619f, "snd_mixer_oss_notify_callback" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4011185f, "snd_card_file_add" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6da8442, "snd_register_oss_device" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x66e5e3d1, "snd_ctl_find_id" },
	{ 0x96735245, "snd_unregister_oss_device" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x633284e4, "snd_info_free_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb81960ca, "snprintf" },
	{ 0x48dd6941, "snd_info_register" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "4163DF533F19E6D895EA00C");
