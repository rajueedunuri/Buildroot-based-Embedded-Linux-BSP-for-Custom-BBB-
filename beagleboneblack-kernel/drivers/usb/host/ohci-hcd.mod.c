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
	{ 0xd8e23ba9, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f2f851f, "usb_root_hub_lost_power" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x9d1acb48, "_raw_spin_unlock" },
	{ 0x4b92b95b, "debugfs_create_dir" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x56bf7f0c, "usb_debug_root" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0xe9a4632e, "usb_hcd_poll_rh_status" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe06699b2, "sg_next" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x34cfdf18, "init_timer_key" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x70858f9a, "usb_hcd_giveback_urb" },
	{ 0x70737823, "debugfs_create_file" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xdbd71d41, "debugfs_remove_recursive" },
	{ 0xb9b9df41, "usb_amd_dev_put" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0x10ecc52c, "usb_amd_quirk_pll_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x311e7cde, "del_timer_sync" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4c65d17c, "usb_hcd_link_urb_to_ep" },
	{ 0xe829e60c, "default_llseek" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x37feb8c4, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0xdc825d6c, "usb_amd_quirk_pll_disable" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x70f66a80, "debugfs_remove" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x167c0253, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0x4aba75c0, "usb_hcd_check_unlink_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0x743b9ddd, "sb800_prefetch" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xbda89544, "dma_pool_alloc" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0xf1f3db52, "_raw_spin_lock" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf228f941, "queue_work_on" },
	{ 0xaff83ba2, "usb_hc_died" },
	{ 0xc70dd74a, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8dc31ae8, "usb_hcd_resume_root_hub" },
	{ 0x48e846b5, "dma_pool_create" },
	{ 0x37a5f5b9, "device_set_wakeup_capable" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";


MODULE_INFO(srcversion, "69D6350D82EB9075CD892E1");
