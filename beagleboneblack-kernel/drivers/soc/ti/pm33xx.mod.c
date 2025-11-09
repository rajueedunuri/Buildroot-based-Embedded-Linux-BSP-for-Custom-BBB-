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
	{ 0x2a991dae, "platform_driver_unregister" },
	{ 0xa99c50b, "__platform_driver_register" },
	{ 0x6259d291, "clk_restore_context" },
	{ 0xa531471e, "clk_save_context" },
	{ 0x70a19267, "_dev_info" },
	{ 0xc96fb674, "nvmem_device_read" },
	{ 0x49a8a623, "ti_emif_get_mem_type" },
	{ 0x23e81728, "rtc_class_open" },
	{ 0xea14efcc, "of_device_is_available" },
	{ 0x8ab5db08, "of_find_node_by_name" },
	{ 0xbd039ba9, "gen_pool_alloc" },
	{ 0x966c7bcf, "of_gen_pool_get" },
	{ 0xe28588f4, "of_find_compatible_node" },
	{ 0x18e1235d, "wkup_m3_ipc_get" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0x167c0253, "_dev_err" },
	{ 0xc9086809, "ti_emif_copy_pm_function_table" },
	{ 0xfbd00843, "sram_exec_copy" },
	{ 0x6bc87c41, "gen_pool_virt_to_phys" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf81661ed, "cpu_idle_poll_ctrl" },
	{ 0xe18960ba, "nvmem_device_write" },
	{ 0x70d1f57f, "wkup_m3_ipc_put" },
	{ 0x9ac11b74, "suspend_set_ops" },
	{ 0xd8a1d8f2, "gen_pool_free" },
	{ 0x16ab2103, "rtc_power_off_program" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ti-emif-sram,wkup_m3_ipc";


MODULE_INFO(srcversion, "1E2BAF4583E80E71B401050");
