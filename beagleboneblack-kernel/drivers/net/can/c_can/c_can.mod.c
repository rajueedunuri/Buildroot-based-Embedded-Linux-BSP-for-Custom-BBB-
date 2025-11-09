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
	{ 0xb12abed6, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa5be5f4, "__pm_runtime_idle" },
	{ 0x9cc73c84, "register_candev" },
	{ 0xa0f9cb64, "__pm_runtime_disable" },
	{  0x73a79, "napi_disable" },
	{ 0xcf4a9bc3, "napi_schedule_prep" },
	{ 0x89b648b1, "alloc_can_err_skb" },
	{ 0x56f4f034, "pinctrl_select_state" },
	{ 0xf8f1d73b, "__pm_runtime_resume" },
	{ 0xca6c4ee2, "pinctrl_lookup_state" },
	{ 0x74b91c21, "netif_napi_del" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x16d2df93, "can_bus_off" },
	{ 0x159d7218, "pinctrl_get" },
	{ 0xc0bee404, "close_candev" },
	{ 0xbc1f0f8c, "netif_tx_wake_queue" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0x59911b9e, "netif_receive_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe6dabd2d, "alloc_candev_mqs" },
	{ 0x167bdad, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x72636d95, "free_candev" },
	{ 0xd4304824, "pinctrl_pm_select_sleep_state" },
	{ 0x2c929fc9, "pinctrl_put" },
	{ 0xeaad1179, "can_change_mtu" },
	{ 0x7f72309d, "unregister_candev" },
	{ 0xbd5e4dd3, "alloc_can_skb" },
	{ 0x3a1e9989, "pm_runtime_enable" },
	{ 0x47f78bfa, "__napi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3e61a490, "kfree_skb" },
	{ 0xe236d87a, "napi_complete_done" },
	{ 0xbfc1490b, "pinctrl_pm_select_default_state" },
	{ 0x4172dc03, "netdev_err" },
	{ 0x18e5b87e, "open_candev" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67c88512, "can_get_echo_skb" },
	{ 0x9865c9f9, "can_put_echo_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";


MODULE_INFO(srcversion, "E8FB49AAD4BA46E6F963BE5");
