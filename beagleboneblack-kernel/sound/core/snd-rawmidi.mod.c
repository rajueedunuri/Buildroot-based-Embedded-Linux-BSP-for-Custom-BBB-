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
	{ 0x2d3385d3, "system_wq" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x95c0278e, "put_pid" },
	{ 0x24ed3e93, "snd_register_device" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0xf048832f, "snd_card_file_remove" },
	{ 0xcbeb0b63, "pid_vnr" },
	{ 0x512941c, "remove_wait_queue" },
	{ 0xad750856, "snd_device_initialize" },
	{ 0xae4f420b, "no_llseek" },
	{ 0xb70789e, "__might_fault" },
	{ 0xb0cfa759, "snd_info_create_card_entry" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x6e617324, "seq_printf" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x91715312, "sprintf" },
	{ 0xf17fde58, "nonseekable_open" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xf472a1ff, "snd_ctl_unregister_ioctl" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x9a897c21, "snd_device_new" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x81598760, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8f595b11, "snd_major" },
	{ 0x167c0253, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x88288e85, "kvmalloc_node" },
	{ 0xd159ab8, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x4011185f, "snd_card_file_add" },
	{ 0x165d361e, "snd_ctl_register_ioctl" },
	{ 0x3b12f40c, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xa6da8442, "snd_register_oss_device" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xd70a50c6, "__wake_up" },
	{ 0x3d72b052, "prepare_to_wait_event" },
	{ 0x96735245, "snd_unregister_oss_device" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x3a0cff48, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x633284e4, "snd_info_free_entry" },
	{ 0xb97e294e, "param_array_ops" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xba6ea6c8, "finish_wait" },
	{ 0x5b6570f1, "snd_ctl_get_preferred_subdevice" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x48dd6941, "snd_info_register" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "F65C6BCF8F0689AD2E7D74E");
