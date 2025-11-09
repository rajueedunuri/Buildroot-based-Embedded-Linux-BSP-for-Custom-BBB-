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
	{ 0x4994a4cc, "bus_register" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x119d1ba6, "driver_register" },
	{ 0x5c0fd250, "device_release_driver" },
	{ 0xb3c8263f, "cancel_work_sync" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0xbf14de0a, "device_bind_driver" },
	{ 0x718fdaa, "device_del" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xc0e313cd, "driver_unregister" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x9594a9d8, "device_attach" },
	{ 0x305c59e9, "device_add" },
	{ 0x167c0253, "_dev_err" },
	{ 0xd4b6650e, "bus_unregister" },
	{ 0xd159ab8, "module_put" },
	{ 0x3b12f40c, "put_device" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0xa51f22cf, "__module_get" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x37a0cba, "kfree" },
	{ 0x4232d702, "device_initialize" },
	{ 0x7ec0fff2, "lockdep_init_map" },
	{ 0xe8daaf99, "driver_attach" },
	{ 0x8683a87e, "mutex_lock_interruptible_nested" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf228f941, "queue_work_on" },
	{ 0x87886f14, "dev_set_name" },
	{ 0x2216030, "driver_find" },
	{ 0x8522d6c6, "try_module_get" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "91E703BAD5EBF435706CF36");
