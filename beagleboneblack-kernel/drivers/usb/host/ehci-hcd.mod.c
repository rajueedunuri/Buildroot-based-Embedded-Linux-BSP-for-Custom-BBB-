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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x7f2f851f, "usb_root_hub_lost_power" },
	{ 0xf59b850f, "device_remove_file" },
	{ 0x11a32253, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xd88aa55, "dma_release_from_dev_coherent" },
	{ 0xcf56d7c4, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x5a6c6dcf, "arm_dma_ops" },
	{ 0x904485af, "hrtimer_cancel" },
	{ 0xe9a4632e, "usb_hcd_poll_rh_status" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe06699b2, "sg_next" },
	{ 0xf67985d7, "param_ops_bool" },
	{ 0x70858f9a, "usb_hcd_giveback_urb" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xb9b9df41, "usb_amd_dev_put" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe840036f, "usb_hub_clear_tt_buffer" },
	{ 0xf2cf1abf, "dma_alloc_from_dev_coherent" },
	{ 0x10ecc52c, "usb_amd_quirk_pll_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x77febd, "hrtimer_start_range_ns" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x4c65d17c, "usb_hcd_link_urb_to_ep" },
	{ 0x1c0caf9d, "_raw_spin_unlock_irqrestore" },
	{ 0x7c32d0f0, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xdc825d6c, "usb_amd_quirk_pll_disable" },
	{ 0x80554e60, "ehci_cf_port_reset_rwsem" },
	{ 0x811858f5, "_raw_spin_unlock_irq" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0xacf5b256, "mod_timer" },
	{ 0x93bdaa1f, "dma_pool_free" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6a328845, "usb_hcd_end_port_resume" },
	{ 0xc17cffe, "up_write" },
	{ 0x167c0253, "_dev_err" },
	{ 0x4e576c7d, "down_write" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc17515d7, "usb_hcds_loaded" },
	{ 0x8dec8d1e, "device_create_file" },
	{ 0x4aba75c0, "usb_hcd_check_unlink_urb" },
	{ 0x70a19267, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x692229a8, "_raw_spin_lock_irq" },
	{ 0xf8b63325, "__raw_spin_lock_init" },
	{ 0xbda89544, "dma_pool_alloc" },
	{ 0xab9cf504, "kmem_cache_alloc_trace" },
	{ 0x89ea9fd8, "_raw_spin_lock_irqsave" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x586270bb, "hrtimer_init" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xaff83ba2, "usb_hc_died" },
	{ 0xd2f3e5cc, "usb_hcd_start_port_resume" },
	{ 0xc70dd74a, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8dc31ae8, "usb_hcd_resume_root_hub" },
	{ 0x48e846b5, "dma_pool_create" },
	{ 0x820b63f7, "param_ops_uint" },
	{ 0x33d2969b, "usb_for_each_dev" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";


MODULE_INFO(srcversion, "97D3C15824FFC27E3201651");
