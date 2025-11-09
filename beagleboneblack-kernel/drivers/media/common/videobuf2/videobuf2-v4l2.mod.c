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
	{ 0x4d508c52, "vb2_core_streamoff" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x194c2009, "vb2_core_dqbuf" },
	{ 0x1def87f7, "vb2_mmap" },
	{ 0xeac4a819, "vb2_core_qbuf" },
	{ 0x8aa109c9, "vb2_core_querybuf" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x7a244dc2, "vb2_core_streamon" },
	{ 0x463f3ecc, "vb2_core_poll" },
	{ 0xbc0a82a9, "vb2_read" },
	{ 0x2ee0994b, "vb2_core_prepare_buf" },
	{ 0x5f754e5a, "memset" },
	{ 0x7c32d0f0, "printk" },
	{ 0x45154dfc, "v4l2_event_pending" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x1e95f7aa, "v4l2_fh_release" },
	{ 0x3af4e99a, "vb2_core_queue_release" },
	{ 0x9ad2dae4, "vb2_write" },
	{ 0x6dbc453a, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0xb1f899af, "vb2_core_create_bufs" },
	{ 0x6cd11cd4, "vb2_core_expbuf" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0x6ad49035, "vb2_core_reqbufs" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x88afcc19, "vb2_verify_memory_type" },
	{ 0xef4db032, "vb2_core_queue_init" },
	{ 0x5eb4c799, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-common,videodev";


MODULE_INFO(srcversion, "5C51CBC9047C4D97E542058");
