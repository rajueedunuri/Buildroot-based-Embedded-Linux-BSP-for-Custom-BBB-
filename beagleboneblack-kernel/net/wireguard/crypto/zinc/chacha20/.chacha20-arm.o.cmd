cmd_net/wireguard/crypto/zinc/chacha20/chacha20-arm.o := arm-linux-gnueabihf-gcc -Wp,-MD,net/wireguard/crypto/zinc/chacha20/.chacha20-arm.o.d  -nostdinc -isystem /home/km/opt/gcc-arm-8.3-2019.03-x86_64-arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/8.3.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -include asm/unified.h -msoft-float -Wa,-gdwarf-2 -include ./net/wireguard/compat/compat-asm.h -DMODULE  -c -o net/wireguard/crypto/zinc/chacha20/chacha20-arm.o net/wireguard/crypto/zinc/chacha20/chacha20-arm.S

source_net/wireguard/crypto/zinc/chacha20/chacha20-arm.o := net/wireguard/crypto/zinc/chacha20/chacha20-arm.S

deps_net/wireguard/crypto/zinc/chacha20/chacha20-arm.o := \
    $(wildcard include/config/kernel/mode/neon.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  net/wireguard/compat/compat-asm.h \
  include/linux/linkage.h \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm/include/asm/linkage.h \
  include/linux/kconfig.h \
  include/generated/uapi/linux/version.h \

net/wireguard/crypto/zinc/chacha20/chacha20-arm.o: $(deps_net/wireguard/crypto/zinc/chacha20/chacha20-arm.o)

$(deps_net/wireguard/crypto/zinc/chacha20/chacha20-arm.o):
