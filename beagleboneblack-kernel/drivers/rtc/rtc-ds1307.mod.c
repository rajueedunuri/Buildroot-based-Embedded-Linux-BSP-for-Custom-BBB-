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
	{ 0x9c7c3a60, "i2c_del_driver" },
	{ 0x8a20b462, "i2c_register_driver" },
	{ 0x98ea41a5, "of_clk_src_onecell_get" },
	{ 0x6a58aa8f, "of_clk_add_provider" },
	{ 0x1d4f24dc, "device_property_present" },
	{ 0x496b588f, "device_property_read_u32_array" },
	{ 0x70a19267, "_dev_info" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7bd78a83, "rtc_nvmem_register" },
	{ 0x5f754e5a, "memset" },
	{ 0xbcbecb41, "devm_clk_register" },
	{ 0x982702bf, "of_property_read_string_helper" },
	{ 0xb0f35580, "devm_hwmon_device_register_with_groups" },
	{ 0xe5cd6899, "of_find_property" },
	{ 0xef63ef3f, "__rtc_register_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x37a5f5b9, "device_set_wakeup_capable" },
	{ 0x1cc9285f, "devm_request_threaded_irq" },
	{ 0xdd376be3, "devm_rtc_allocate_device" },
	{ 0x582e5160, "of_device_get_match_data" },
	{ 0xa5083211, "__devm_regmap_init_i2c" },
	{ 0xd424f9ac, "devm_kmalloc" },
	{ 0x91715312, "sprintf" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x32ac61c1, "rtc_update_irq" },
	{ 0x9758bcac, "mutex_unlock" },
	{ 0x3a3fab95, "mutex_lock_nested" },
	{ 0x430fd0a0, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xa85bab6d, "regmap_bulk_write" },
	{ 0xbb99a279, "regmap_write" },
	{ 0x60a5a125, "regmap_read" },
	{ 0xd10fd2ea, "_dev_warn" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x167c0253, "_dev_err" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8369f284, "regmap_bulk_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("of:N*T*Cdallas,ds1307");
MODULE_ALIAS("of:N*T*Cdallas,ds1307C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1308");
MODULE_ALIAS("of:N*T*Cdallas,ds1308C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1337");
MODULE_ALIAS("of:N*T*Cdallas,ds1337C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1338");
MODULE_ALIAS("of:N*T*Cdallas,ds1338C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1339");
MODULE_ALIAS("of:N*T*Cdallas,ds1339C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1388");
MODULE_ALIAS("of:N*T*Cdallas,ds1388C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1340");
MODULE_ALIAS("of:N*T*Cdallas,ds1340C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1341");
MODULE_ALIAS("of:N*T*Cdallas,ds1341C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231C*");
MODULE_ALIAS("of:N*T*Cst,m41t0");
MODULE_ALIAS("of:N*T*Cst,m41t0C*");
MODULE_ALIAS("of:N*T*Cst,m41t00");
MODULE_ALIAS("of:N*T*Cst,m41t00C*");
MODULE_ALIAS("of:N*T*Cst,m41t11");
MODULE_ALIAS("of:N*T*Cst,m41t11C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940xC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941xC*");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338C*");
MODULE_ALIAS("of:N*T*Cepson,rx8025");
MODULE_ALIAS("of:N*T*Cepson,rx8025C*");
MODULE_ALIAS("of:N*T*Cisil,isl12057");
MODULE_ALIAS("of:N*T*Cisil,isl12057C*");
MODULE_ALIAS("of:N*T*Cepson,rx8130");
MODULE_ALIAS("of:N*T*Cepson,rx8130C*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:m41t11");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");

MODULE_INFO(srcversion, "6AF404F5DC4C3FC964C5526");
