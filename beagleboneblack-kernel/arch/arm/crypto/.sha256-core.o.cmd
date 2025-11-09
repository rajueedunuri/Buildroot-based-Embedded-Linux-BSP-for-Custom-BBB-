cmd_arch/arm/crypto/sha256-core.o := arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/crypto/.sha256-core.o.d  -nostdinc -isystem /home/km/opt/gcc-arm-8.3-2019.03-x86_64-arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/8.3.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=6 -march=armv6k -mtune=arm1136j-s -include asm/unified.h -msoft-float -Wa,-gdwarf-2 -DMODULE  -c -o arch/arm/crypto/sha256-core.o arch/arm/crypto/sha256-core.S

source_arch/arm/crypto/sha256-core.o := arch/arm/crypto/sha256-core.S

deps_arch/arm/crypto/sha256-core.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/crypto/sha256-core.o: $(deps_arch/arm/crypto/sha256-core.o)

$(deps_arch/arm/crypto/sha256-core.o):
