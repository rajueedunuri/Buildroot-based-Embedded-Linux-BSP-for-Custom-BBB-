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
	{ 0x97255bdf, "strlen" },
	{ 0xb70789e, "__might_fault" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x6a3184bd, "devres_alloc_node" },
	{ 0x6ee9508b, "kthread_create_on_node" },
	{ 0xce90062e, "refcount_inc_not_zero_checked" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11d7589e, "add_hwgenerator_randomness" },
	{ 0x1d1b9c4b, "__init_waitqueue_head" },
	{ 0x4b7f0881, "wait_for_completion" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xa28e506e, "misc_register" },
	{ 0x7c32d0f0, "printk" },
	{ 0x5d5832ca, "kthread_stop" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x153311da, "noop_llseek" },
	{ 0xedc06d37, "refcount_dec_and_test_checked" },
	{ 0xa6b4d242, "devres_release" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x2e3d8e9, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xda45ac9a, "devres_add" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x68f79fd7, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x7b8fb54b, "param_ops_ushort" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x6b6948bc, "misc_deregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AC3DE1C53094CF1F505E577");
