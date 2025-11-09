	.arch armv6k
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 2	@ Tag_ABI_PCS_wchar_t
	.file	"bounds.c"
@ GNU C89 (GNU Toolchain for the A-profile Architecture 8.3-2019.03 (arm-rel-8.36)) version 8.3.0 (arm-linux-gnueabihf)
@	compiled by GNU C version 4.8.1, GMP version 4.3.2, MPFR version 3.1.6, MPC version 0.8.2, isl version isl-0.15-1-g835ea3a-GMP

@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc -I ./arch/arm/include
@ -I ./arch/arm/include/generated -I ./include -I ./arch/arm/include/uapi
@ -I ./arch/arm/include/generated/uapi -I ./include/uapi
@ -I ./include/generated/uapi
@ -iprefix /home/km/opt/gcc-arm-8.3-2019.03-x86_64-arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/8.3.0/
@ -isysroot /home/km/opt/gcc-arm-8.3-2019.03-x86_64-arm-linux-gnueabihf/bin/../arm-linux-gnueabihf/libc
@ -D __KERNEL__ -D __LINUX_ARM_ARCH__=6 -U arm -D KBUILD_BASENAME="bounds"
@ -D KBUILD_MODNAME="bounds"
@ -isystem /home/km/opt/gcc-arm-8.3-2019.03-x86_64-arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/8.3.0/include
@ -include ./include/linux/kconfig.h
@ -include ./include/linux/compiler_types.h -MD kernel/.bounds.s.d
@ kernel/bounds.c -mlittle-endian -mabi=aapcs-linux -mfpu=vfp -marm
@ -mtune=arm1136j-s -mfloat-abi=soft -mtls-dialect=gnu -march=armv6k
@ -auxbase-strip kernel/bounds.s -gsplit-dwarf -gdwarf-4 -O2 -Wall -Wundef
@ -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
@ -Wno-format-security -Wno-frame-address -Wformat-truncation=0
@ -Wformat-overflow=0 -Wno-int-in-bool-context -Wframe-larger-than=1024
@ -Wno-unused-but-set-variable -Wunused-const-variable=0
@ -Wdeclaration-after-statement -Wno-pointer-sign -Wno-stringop-truncation
@ -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time
@ -Werror=incompatible-pointer-types -Werror=designated-init
@ -Wno-packed-not-aligned -std=gnu90 -fno-strict-aliasing -fno-common
@ -fshort-wchar -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables
@ -fno-delete-null-pointer-checks -fstack-protector-strong
@ -fomit-frame-pointer -fno-var-tracking-assignments -fno-strict-overflow
@ -fno-merge-all-constants -fmerge-constants -fstack-check=no
@ -fconserve-stack -fmacro-prefix-map=./= -fverbose-asm
@ --param allow-store-data-races=0
@ options enabled:  -faggressive-loop-optimizations -falign-jumps
@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
@ -fchkp-use-static-const-bounds -fchkp-use-wrappers -fcode-hoisting
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffp-int-builtin-inexact -ffunction-cse -fgcse
@ -fgcse-lm -fgnu-runtime -fgnu-unique -fguess-branch-probability
@ -fhoist-adjacent-loads -fident -fif-conversion -fif-conversion2
@ -findirect-inlining -finline -finline-atomics
@ -finline-functions-called-once -finline-small-functions -fipa-bit-cp
@ -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables -fipa-profile
@ -fipa-pure-const -fipa-ra -fipa-reference -fipa-vrp -fira-hoist-pressure
@ -fira-share-save-slots -fira-share-spill-slots
@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
@ -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
@ -fmath-errno -fmerge-constants -fmerge-debug-strings
@ -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
@ -foptimize-strlen -fpartial-inlining -fpeephole -fpeephole2 -fplt
@ -fprefetch-loop-arrays -freg-struct-return -freorder-blocks
@ -freorder-functions -frerun-cse-after-loop
@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
@ -fsched-pressure -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns
@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
@ -fshow-column -fshrink-wrap -fshrink-wrap-separate -fsigned-zeros
@ -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
@ -fstack-protector-strong -fstdarg-opt -fstore-merging
@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
@ -ftree-vrp -funit-at-a-time -funwind-tables -fvar-tracking -fverbose-asm
@ -fwrapv -fwrapv-pointer -fzero-initialized-in-bss -marm -mbe32 -mglibc
@ -mlittle-endian -mpic-data-is-text-relative -msched-prolog
@ -munaligned-access -mvectorize-with-neon-quad

	.text
.Ltext0:
	.syntax divided
	.syntax unified
	.arm
	.syntax unified
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	.fnstart
.LFB308:
	.file 1 "kernel/bounds.c"
	.loc 1 17 1 view -0
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	.loc 1 19 2 view .LVU1
	.syntax divided
@ 19 "kernel/bounds.c" 1
	
.ascii "->NR_PAGEFLAGS #21 __NR_PAGEFLAGS"	@
@ 0 "" 2
	.loc 1 20 2 view .LVU2
@ 20 "kernel/bounds.c" 1
	
.ascii "->MAX_NR_ZONES #3 __MAX_NR_ZONES"	@
@ 0 "" 2
	.loc 1 22 2 view .LVU3
@ 22 "kernel/bounds.c" 1
	
.ascii "->NR_CPUS_BITS #1 ilog2(CONFIG_NR_CPUS)"	@
@ 0 "" 2
	.loc 1 24 2 view .LVU4
@ 24 "kernel/bounds.c" 1
	
.ascii "->SPINLOCK_SIZE #32 sizeof(spinlock_t)"	@
@ 0 "" 2
	.loc 1 27 2 view .LVU5
@ kernel/bounds.c:28: }
	.loc 1 28 1 is_stmt 0 view .LVU6
	.arm
	.syntax unified
	mov	r0, #0	@,
	bx	lr	@
.LFE308:
	.fnend
	.size	main, .-main
	.section	.debug_frame,"",%progbits
.Lframe0:
	.4byte	.LECIE0-.LSCIE0
.LSCIE0:
	.4byte	0xffffffff
	.byte	0x3
	.ascii	"\000"
	.uleb128 0x1
	.sleb128 -4
	.uleb128 0xe
	.byte	0xc
	.uleb128 0xd
	.uleb128 0
	.align	2
.LECIE0:
.LSFDE0:
	.4byte	.LEFDE0-.LASFDE0
.LASFDE0:
	.4byte	.Lframe0
	.4byte	.LFB308
	.4byte	.LFE308-.LFB308
	.align	2
.LEFDE0:
	.text
.Letext0:
	.section	.debug_addr,"",%progbits
.Ldebug_addr0:
	.4byte	.LFB308
	.file 2 "./include/linux/types.h"
	.file 3 "./arch/arm/include/asm/barrier.h"
	.file 4 "./arch/arm/include/asm/hwcap.h"
	.file 5 "./include/linux/init.h"
	.file 6 "./include/linux/printk.h"
	.file 7 "./include/linux/kernel.h"
	.file 8 "./include/linux/page-flags.h"
	.file 9 "./include/linux/mmzone.h"
	.file 10 "./include/linux/lockdep.h"
	.file 11 "./include/linux/debug_locks.h"
	.section	.debug_info.dwo,"",%progbits
.Ldebug_info0:
	.4byte	0x3cd
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.uleb128 0x5b
	.byte	0x1
	.uleb128 0x5c
	.uleb128 0x73
	.byte	0xee
	.byte	0xd0
	.byte	0xf0
	.byte	0x5f
	.byte	0x53
	.byte	0x9e
	.byte	0xcb
	.byte	0x7f
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.uleb128 0x65
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.uleb128 0x9
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.uleb128 0x35
	.uleb128 0x3
	.4byte	0x20
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.uleb128 0x6e
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.uleb128 0x68
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.uleb128 0x54
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.uleb128 0x6f
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.uleb128 0x43
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.uleb128 0x1e
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.uleb128 0x55
	.uleb128 0x5
	.byte	0x4
	.4byte	0x20
	.uleb128 0x6
	.uleb128 0x48
	.byte	0x2
	.byte	0x1e
	.byte	0x11
	.4byte	0x5b
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.uleb128 0x2e
	.uleb128 0x7
	.byte	0x4
	.byte	0x2
	.byte	0xb0
	.byte	0x9
	.4byte	0x73
	.uleb128 0x8
	.uleb128 0x2a
	.byte	0x2
	.byte	0xb1
	.byte	0x6
	.4byte	0x39
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x62
	.byte	0x2
	.byte	0xb2
	.byte	0x3
	.4byte	0x5f
	.uleb128 0x9
	.uleb128 0xa
	.uleb128 0x3f
	.byte	0x3
	.byte	0x38
	.byte	0xf
	.4byte	0x86
	.uleb128 0x5
	.byte	0x4
	.4byte	0x7c
	.uleb128 0xa
	.uleb128 0x5a
	.byte	0x4
	.byte	0xe
	.byte	0x15
	.4byte	0x1c
	.uleb128 0xa
	.uleb128 0x58
	.byte	0x4
	.byte	0xe
	.byte	0x20
	.4byte	0x1c
	.uleb128 0x6
	.uleb128 0x16
	.byte	0x5
	.byte	0x74
	.byte	0xf
	.4byte	0xa7
	.uleb128 0x5
	.byte	0x4
	.4byte	0xad
	.uleb128 0xb
	.4byte	0x39
	.uleb128 0x6
	.uleb128 0x4e
	.byte	0x5
	.byte	0x7f
	.byte	0x14
	.4byte	0x9e
	.uleb128 0xc
	.4byte	0xb2
	.4byte	0xc6
	.uleb128 0xd
	.byte	0
	.uleb128 0xa
	.uleb128 0x3b
	.byte	0x5
	.byte	0x87
	.byte	0x19
	.4byte	0xbb
	.uleb128 0xa
	.uleb128 0x6
	.byte	0x5
	.byte	0x87
	.byte	0x31
	.4byte	0xbb
	.uleb128 0xa
	.uleb128 0x5e
	.byte	0x5
	.byte	0x88
	.byte	0x19
	.4byte	0xbb
	.uleb128 0xa
	.uleb128 0x64
	.byte	0x5
	.byte	0x88
	.byte	0x36
	.4byte	0xbb
	.uleb128 0xc
	.4byte	0x20
	.4byte	0xf5
	.uleb128 0xd
	.byte	0
	.uleb128 0xa
	.uleb128 0
	.byte	0x5
	.byte	0x8f
	.byte	0x18
	.4byte	0xea
	.uleb128 0xa
	.uleb128 0x6a
	.byte	0x5
	.byte	0x90
	.byte	0xe
	.4byte	0x4c
	.uleb128 0xa
	.uleb128 0x27
	.byte	0x5
	.byte	0x91
	.byte	0x15
	.4byte	0x1c
	.uleb128 0xa
	.uleb128 0x47
	.byte	0x5
	.byte	0x9a
	.byte	0xd
	.4byte	0x52
	.uleb128 0xa
	.uleb128 0x4b
	.byte	0x5
	.byte	0xa0
	.byte	0xf
	.4byte	0x86
	.uleb128 0xa
	.uleb128 0x70
	.byte	0x5
	.byte	0xa2
	.byte	0xd
	.4byte	0x52
	.uleb128 0xc
	.4byte	0x24
	.4byte	0x136
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.4byte	0x12b
	.uleb128 0xa
	.uleb128 0x3c
	.byte	0x6
	.byte	0xb
	.byte	0x13
	.4byte	0x136
	.uleb128 0xa
	.uleb128 0x4d
	.byte	0x6
	.byte	0xc
	.byte	0x13
	.4byte	0x136
	.uleb128 0xc
	.4byte	0x39
	.4byte	0x158
	.uleb128 0xd
	.byte	0
	.uleb128 0xa
	.uleb128 0x7
	.byte	0x6
	.byte	0x3f
	.byte	0xc
	.4byte	0x14d
	.uleb128 0xa
	.uleb128 0x19
	.byte	0x6
	.byte	0x53
	.byte	0xd
	.4byte	0xea
	.uleb128 0xa
	.uleb128 0x50
	.byte	0x6
	.byte	0xc0
	.byte	0xc
	.4byte	0x39
	.uleb128 0xa
	.uleb128 0x40
	.byte	0x6
	.byte	0xc1
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x53
	.byte	0x6
	.2byte	0x121
	.byte	0xc
	.4byte	0x39
	.uleb128 0xf
	.uleb128 0x36
	.uleb128 0x3
	.4byte	0x186
	.uleb128 0xe
	.uleb128 0x2
	.byte	0x6
	.2byte	0x1e1
	.byte	0x25
	.4byte	0x188
	.uleb128 0xf
	.uleb128 0x1
	.uleb128 0xe
	.uleb128 0x31
	.byte	0x7
	.2byte	0x146
	.byte	0x24
	.4byte	0x197
	.uleb128 0x10
	.4byte	0x48
	.4byte	0x1b2
	.uleb128 0x11
	.4byte	0x39
	.byte	0
	.uleb128 0xe
	.uleb128 0x76
	.byte	0x7
	.2byte	0x147
	.byte	0xf
	.4byte	0x1bc
	.uleb128 0x5
	.byte	0x4
	.4byte	0x1a3
	.uleb128 0xe
	.uleb128 0x30
	.byte	0x7
	.2byte	0x212
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x63
	.byte	0x7
	.2byte	0x213
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x32
	.byte	0x7
	.2byte	0x214
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x5f
	.byte	0x7
	.2byte	0x215
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x4c
	.byte	0x7
	.2byte	0x216
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x49
	.byte	0x7
	.2byte	0x217
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x61
	.byte	0x7
	.2byte	0x218
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x44
	.byte	0x7
	.2byte	0x219
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x6d
	.byte	0x7
	.2byte	0x21b
	.byte	0xd
	.4byte	0x52
	.uleb128 0xe
	.uleb128 0x2b
	.byte	0x7
	.2byte	0x222
	.byte	0x11
	.4byte	0x73
	.uleb128 0xe
	.uleb128 0x1f
	.byte	0x7
	.2byte	0x236
	.byte	0xc
	.4byte	0x39
	.uleb128 0xe
	.uleb128 0x3
	.byte	0x7
	.2byte	0x238
	.byte	0xd
	.4byte	0x52
	.uleb128 0x12
	.uleb128 0x67
	.byte	0x7
	.byte	0x4
	.4byte	0x1c
	.byte	0x7
	.2byte	0x23e
	.byte	0xd
	.4byte	0x260
	.uleb128 0x13
	.uleb128 0x15
	.byte	0
	.uleb128 0x13
	.uleb128 0x5
	.byte	0x1
	.uleb128 0x13
	.uleb128 0x4a
	.byte	0x2
	.uleb128 0x13
	.uleb128 0x20
	.byte	0x3
	.uleb128 0x13
	.uleb128 0x10
	.byte	0x4
	.uleb128 0x13
	.uleb128 0x57
	.byte	0x5
	.uleb128 0x13
	.uleb128 0x75
	.byte	0x6
	.byte	0
	.uleb128 0xe
	.uleb128 0xe
	.byte	0x7
	.2byte	0x246
	.byte	0x3
	.4byte	0x23a
	.uleb128 0x14
	.uleb128 0x28
	.byte	0x3
	.byte	0x7
	.2byte	0x25d
	.byte	0x8
	.4byte	0x297
	.uleb128 0x15
	.uleb128 0x1d
	.byte	0x7
	.2byte	0x25e
	.byte	0x7
	.4byte	0x20
	.byte	0
	.uleb128 0x15
	.uleb128 0xb
	.byte	0x7
	.2byte	0x25f
	.byte	0x7
	.4byte	0x20
	.byte	0x1
	.uleb128 0x15
	.uleb128 0xf
	.byte	0x7
	.2byte	0x260
	.byte	0x7
	.4byte	0x52
	.byte	0x2
	.byte	0
	.uleb128 0x3
	.4byte	0x26a
	.uleb128 0xc
	.4byte	0x297
	.4byte	0x2ac
	.uleb128 0x16
	.4byte	0x1c
	.byte	0x11
	.byte	0
	.uleb128 0x3
	.4byte	0x29c
	.uleb128 0xe
	.uleb128 0xc
	.byte	0x7
	.2byte	0x263
	.byte	0x20
	.4byte	0x2ac
	.uleb128 0xe
	.uleb128 0x5d
	.byte	0x7
	.2byte	0x265
	.byte	0x13
	.4byte	0x136
	.uleb128 0xe
	.uleb128 0x1c
	.byte	0x7
	.2byte	0x270
	.byte	0x13
	.4byte	0x136
	.uleb128 0x17
	.uleb128 0xd
	.byte	0x7
	.byte	0x4
	.4byte	0x1c
	.byte	0x8
	.byte	0x46
	.byte	0x6
	.4byte	0x33c
	.uleb128 0x13
	.uleb128 0x59
	.byte	0
	.uleb128 0x13
	.uleb128 0x69
	.byte	0x1
	.uleb128 0x13
	.uleb128 0x4
	.byte	0x2
	.uleb128 0x13
	.uleb128 0x3d
	.byte	0x3
	.uleb128 0x13
	.uleb128 0x2c
	.byte	0x4
	.uleb128 0x13
	.uleb128 0x39
	.byte	0x5
	.uleb128 0x13
	.uleb128 0x37
	.byte	0x6
	.uleb128 0x13
	.uleb128 0x13
	.byte	0x7
	.uleb128 0x13
	.uleb128 0x4f
	.byte	0x8
	.uleb128 0x13
	.uleb128 0x2d
	.byte	0x9
	.uleb128 0x13
	.uleb128 0x38
	.byte	0xa
	.uleb128 0x13
	.uleb128 0x45
	.byte	0xb
	.uleb128 0x13
	.uleb128 0x24
	.byte	0xc
	.uleb128 0x13
	.uleb128 0x3e
	.byte	0xd
	.uleb128 0x13
	.uleb128 0x21
	.byte	0xe
	.uleb128 0x13
	.uleb128 0x46
	.byte	0xf
	.uleb128 0x13
	.uleb128 0x6c
	.byte	0x10
	.uleb128 0x13
	.uleb128 0x17
	.byte	0x11
	.uleb128 0x13
	.uleb128 0x23
	.byte	0x12
	.uleb128 0x13
	.uleb128 0x8
	.byte	0x13
	.uleb128 0x13
	.uleb128 0x6b
	.byte	0x14
	.uleb128 0x13
	.uleb128 0x29
	.byte	0x15
	.uleb128 0x13
	.uleb128 0x33
	.byte	0x9
	.uleb128 0x13
	.uleb128 0x22
	.byte	0x9
	.uleb128 0x13
	.uleb128 0x18
	.byte	0xd
	.uleb128 0x13
	.uleb128 0x66
	.byte	0x9
	.uleb128 0x13
	.uleb128 0x56
	.byte	0x4
	.uleb128 0x13
	.uleb128 0x1a
	.byte	0x9
	.uleb128 0x13
	.uleb128 0x52
	.byte	0xc
	.uleb128 0x13
	.uleb128 0x60
	.byte	0xd
	.uleb128 0x13
	.uleb128 0x51
	.byte	0x11
	.byte	0
	.uleb128 0x12
	.uleb128 0x11
	.byte	0x7
	.byte	0x4
	.4byte	0x1c
	.byte	0x9
	.2byte	0x12e
	.byte	0x6
	.4byte	0x359
	.uleb128 0x13
	.uleb128 0x26
	.byte	0
	.uleb128 0x13
	.uleb128 0x1b
	.byte	0x1
	.uleb128 0x13
	.uleb128 0x41
	.byte	0x2
	.uleb128 0x13
	.uleb128 0x71
	.byte	0x3
	.byte	0
	.uleb128 0xa
	.uleb128 0x42
	.byte	0xa
	.byte	0x11
	.byte	0xc
	.4byte	0x39
	.uleb128 0xa
	.uleb128 0xa
	.byte	0xa
	.byte	0x12
	.byte	0xc
	.4byte	0x39
	.uleb128 0xa
	.uleb128 0x2f
	.byte	0xb
	.byte	0xb
	.byte	0xc
	.4byte	0x39
	.uleb128 0xa
	.uleb128 0x3a
	.byte	0xb
	.byte	0xc
	.byte	0xc
	.4byte	0x39
	.uleb128 0x18
	.uleb128 0x14
	.byte	0x1
	.byte	0xa
	.byte	0x35
	.byte	0x8
	.4byte	0x392
	.uleb128 0x8
	.uleb128 0x74
	.byte	0xa
	.byte	0x36
	.byte	0x7
	.4byte	0x20
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x25
	.byte	0x8
	.byte	0xa
	.byte	0x39
	.byte	0x8
	.4byte	0x3a7
	.uleb128 0x8
	.uleb128 0x12
	.byte	0xa
	.byte	0x3a
	.byte	0x1e
	.4byte	0x3a7
	.byte	0
	.byte	0
	.uleb128 0xc
	.4byte	0x37d
	.4byte	0x3b7
	.uleb128 0x16
	.4byte	0x1c
	.byte	0x7
	.byte	0
	.uleb128 0xa
	.uleb128 0x34
	.byte	0xa
	.byte	0x3d
	.byte	0x1e
	.4byte	0x392
	.uleb128 0x19
	.uleb128 0x72
	.byte	0x1
	.byte	0x10
	.byte	0x5
	.4byte	0x39
	.uleb128 0
	.4byte	.LFE308-.LFB308
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_info,"",%progbits
.Lskeleton_debug_info0:
	.4byte	0x2c
	.2byte	0x4
	.4byte	.Lskeleton_debug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.Ldebug_ranges0+0
	.4byte	0
	.4byte	.Ldebug_line0
	.4byte	.LASF0
	.4byte	.LASF1
	.4byte	.Ldebug_addr0
	.byte	0xee
	.byte	0xd0
	.byte	0xf0
	.byte	0x5f
	.byte	0x53
	.byte	0x9e
	.byte	0xcb
	.byte	0x7f
	.4byte	.Ldebug_ranges0
	.section	.debug_abbrev,"",%progbits
.Lskeleton_debug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.uleb128 0x2130
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x2134
	.uleb128 0x19
	.uleb128 0x2133
	.uleb128 0x17
	.uleb128 0x2131
	.uleb128 0x7
	.uleb128 0x2132
	.uleb128 0x17
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_abbrev.dwo,"",%progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0x1f02
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x1b
	.uleb128 0x1f02
	.uleb128 0x2131
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x1f02
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x15
	.byte	0
	.uleb128 0x27
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x15
	.byte	0
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0x1f02
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1f01
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_gnu_pubnames,"",%progbits
	.4byte	0x268
	.2byte	0x2
	.4byte	.Lskeleton_debug_info0
	.4byte	0x3d1
	.4byte	0x2de
	.byte	0xa0
	.ascii	"PG_locked\000"
	.4byte	0x2e1
	.byte	0xa0
	.ascii	"PG_error\000"
	.4byte	0x2e4
	.byte	0xa0
	.ascii	"PG_referenced\000"
	.4byte	0x2e7
	.byte	0xa0
	.ascii	"PG_uptodate\000"
	.4byte	0x2ea
	.byte	0xa0
	.ascii	"PG_dirty\000"
	.4byte	0x2ed
	.byte	0xa0
	.ascii	"PG_lru\000"
	.4byte	0x2f0
	.byte	0xa0
	.ascii	"PG_active\000"
	.4byte	0x2f3
	.byte	0xa0
	.ascii	"PG_waiters\000"
	.4byte	0x2f6
	.byte	0xa0
	.ascii	"PG_slab\000"
	.4byte	0x2f9
	.byte	0xa0
	.ascii	"PG_owner_priv_1\000"
	.4byte	0x2fc
	.byte	0xa0
	.ascii	"PG_arch_1\000"
	.4byte	0x2ff
	.byte	0xa0
	.ascii	"PG_reserved\000"
	.4byte	0x302
	.byte	0xa0
	.ascii	"PG_private\000"
	.4byte	0x305
	.byte	0xa0
	.ascii	"PG_private_2\000"
	.4byte	0x308
	.byte	0xa0
	.ascii	"PG_writeback\000"
	.4byte	0x30b
	.byte	0xa0
	.ascii	"PG_head\000"
	.4byte	0x30e
	.byte	0xa0
	.ascii	"PG_mappedtodisk\000"
	.4byte	0x311
	.byte	0xa0
	.ascii	"PG_reclaim\000"
	.4byte	0x314
	.byte	0xa0
	.ascii	"PG_swapbacked\000"
	.4byte	0x317
	.byte	0xa0
	.ascii	"PG_unevictable\000"
	.4byte	0x31a
	.byte	0xa0
	.ascii	"PG_mlocked\000"
	.4byte	0x31d
	.byte	0xa0
	.ascii	"__NR_PAGEFLAGS\000"
	.4byte	0x320
	.byte	0xa0
	.ascii	"PG_checked\000"
	.4byte	0x323
	.byte	0xa0
	.ascii	"PG_swapcache\000"
	.4byte	0x326
	.byte	0xa0
	.ascii	"PG_fscache\000"
	.4byte	0x329
	.byte	0xa0
	.ascii	"PG_pinned\000"
	.4byte	0x32c
	.byte	0xa0
	.ascii	"PG_savepinned\000"
	.4byte	0x32f
	.byte	0xa0
	.ascii	"PG_foreign\000"
	.4byte	0x332
	.byte	0xa0
	.ascii	"PG_slob_free\000"
	.4byte	0x335
	.byte	0xa0
	.ascii	"PG_double_map\000"
	.4byte	0x338
	.byte	0xa0
	.ascii	"PG_isolated\000"
	.4byte	0x34c
	.byte	0xa0
	.ascii	"ZONE_NORMAL\000"
	.4byte	0x34f
	.byte	0xa0
	.ascii	"ZONE_HIGHMEM\000"
	.4byte	0x352
	.byte	0xa0
	.ascii	"ZONE_MOVABLE\000"
	.4byte	0x355
	.byte	0xa0
	.ascii	"__MAX_NR_ZONES\000"
	.4byte	0x3c0
	.byte	0x30
	.ascii	"main\000"
	.4byte	0
	.section	.debug_gnu_pubtypes,"",%progbits
	.4byte	0x18a
	.2byte	0x2
	.4byte	.Lskeleton_debug_info0
	.4byte	0x3d1
	.4byte	0x18
	.byte	0x90
	.ascii	"long unsigned int\000"
	.4byte	0x1c
	.byte	0x90
	.ascii	"unsigned int\000"
	.4byte	0x20
	.byte	0x90
	.ascii	"char\000"
	.4byte	0x29
	.byte	0x90
	.ascii	"signed char\000"
	.4byte	0x2d
	.byte	0x90
	.ascii	"unsigned char\000"
	.4byte	0x31
	.byte	0x90
	.ascii	"short int\000"
	.4byte	0x35
	.byte	0x90
	.ascii	"short unsigned int\000"
	.4byte	0x39
	.byte	0x90
	.ascii	"int\000"
	.4byte	0x40
	.byte	0x90
	.ascii	"long long int\000"
	.4byte	0x44
	.byte	0x90
	.ascii	"long long unsigned int\000"
	.4byte	0x48
	.byte	0x90
	.ascii	"long int\000"
	.4byte	0x5b
	.byte	0x90
	.ascii	"_Bool\000"
	.4byte	0x52
	.byte	0x90
	.ascii	"bool\000"
	.4byte	0x73
	.byte	0x90
	.ascii	"atomic_t\000"
	.4byte	0x9e
	.byte	0x90
	.ascii	"initcall_t\000"
	.4byte	0xb2
	.byte	0x90
	.ascii	"initcall_entry_t\000"
	.4byte	0x23a
	.byte	0x90
	.ascii	"system_states\000"
	.4byte	0x26a
	.byte	0x90
	.ascii	"taint_flag\000"
	.4byte	0x2cf
	.byte	0x90
	.ascii	"pageflags\000"
	.4byte	0x33c
	.byte	0x90
	.ascii	"zone_type\000"
	.4byte	0x37d
	.byte	0x90
	.ascii	"lockdep_subclass_key\000"
	.4byte	0x392
	.byte	0x90
	.ascii	"lock_class_key\000"
	.4byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	.Lskeleton_debug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.LFB308
	.4byte	.LFE308-.LFB308
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",%progbits
.Ldebug_ranges0:
	.4byte	.LFB308
	.4byte	.LFE308
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_line.dwo,"",%progbits
.Lskeleton_debug_line0:
	.4byte	.LELT0-.LSLT0
.LSLT0:
	.2byte	0x4
	.4byte	.LELTP0-.LASLTP0
.LASLTP0:
	.byte	0x1
	.byte	0x1
	.byte	0x1
	.byte	0xf6
	.byte	0xf2
	.byte	0xd
	.byte	0
	.byte	0x1
	.byte	0x1
	.byte	0x1
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0x1
	.ascii	"kernel"
	.byte	0
	.ascii	"include/linux"
	.byte	0
	.ascii	"arch/arm/include/asm"
	.byte	0
	.byte	0
	.ascii	"bounds.c\000"
	.uleb128 0x1
	.uleb128 0
	.uleb128 0
	.ascii	"types.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.ascii	"barrier.h\000"
	.uleb128 0x3
	.uleb128 0
	.uleb128 0
	.ascii	"hwcap.h\000"
	.uleb128 0x3
	.uleb128 0
	.uleb128 0
	.ascii	"init.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.ascii	"printk.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.ascii	"kernel.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.ascii	"page-flags.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.ascii	"mmzone.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.ascii	"lockdep.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.ascii	"debug_locks.h\000"
	.uleb128 0x2
	.uleb128 0
	.uleb128 0
	.byte	0
.LELTP0:
.LELT0:
	.section	.debug_str,"MS",%progbits,1
.LASF0:
	.ascii	"kernel/bounds.dwo\000"
.LASF1:
	.ascii	"/home/km/TR_HUB/beagleboneblack-kernel\000"
	.section	.debug_str_offsets.dwo,"",%progbits
	.4byte	0
	.4byte	0x12
	.4byte	0x27
	.4byte	0x31
	.4byte	0x4a
	.4byte	0x58
	.4byte	0x6a
	.4byte	0x7d
	.4byte	0x8c
	.4byte	0x9b
	.4byte	0xa8
	.4byte	0xb2
	.4byte	0xba
	.4byte	0xc6
	.4byte	0xd0
	.4byte	0xdd
	.4byte	0xe4
	.4byte	0xf5
	.4byte	0xff
	.4byte	0x107
	.4byte	0x112
	.4byte	0x127
	.4byte	0x136
	.4byte	0x141
	.4byte	0x14c
	.4byte	0x157
	.4byte	0x167
	.4byte	0x172
	.4byte	0x17f
	.4byte	0x18d
	.4byte	0x194
	.4byte	0x1ab
	.4byte	0x1bb
	.4byte	0x1c7
	.4byte	0x1d4
	.4byte	0x1e1
	.4byte	0x1ef
	.4byte	0x1fa
	.4byte	0x209
	.4byte	0x215
	.4byte	0x223
	.4byte	0x22e
	.4byte	0x23d
	.4byte	0x245
	.4byte	0x24f
	.4byte	0x258
	.4byte	0x268
	.4byte	0x26e
	.4byte	0x27a
	.4byte	0x28b
	.4byte	0x29f
	.4byte	0x2ad
	.4byte	0x2b8
	.4byte	0x2d0
	.4byte	0x2d5
	.4byte	0x2e5
	.4byte	0x2ef
	.4byte	0x2f9
	.4byte	0x300
	.4byte	0x313
	.4byte	0x328
	.4byte	0x335
	.4byte	0x341
	.4byte	0x34e
	.4byte	0x355
	.4byte	0x364
	.4byte	0x371
	.4byte	0x37f
	.4byte	0x38d
	.4byte	0x3ab
	.4byte	0x3b7
	.4byte	0x3bf
	.4byte	0x3ce
	.4byte	0x3d3
	.4byte	0x3e1
	.4byte	0x3f0
	.4byte	0x3ff
	.4byte	0x40f
	.4byte	0x421
	.4byte	0x432
	.4byte	0x43a
	.4byte	0x44c
	.4byte	0x458
	.4byte	0x465
	.4byte	0x473
	.4byte	0x47d
	.4byte	0x486
	.4byte	0x494
	.4byte	0x4a3
	.4byte	0x4ae
	.4byte	0x4b8
	.4byte	0x4c2
	.4byte	0x6c4
	.4byte	0x6d4
	.4byte	0x6dc
	.4byte	0x6f6
	.4byte	0x70f
	.4byte	0x71d
	.4byte	0x737
	.4byte	0x740
	.4byte	0x74e
	.4byte	0x766
	.4byte	0x778
	.4byte	0x782
	.4byte	0x790
	.4byte	0x79e
	.4byte	0x7a7
	.4byte	0x7ba
	.4byte	0x7c5
	.4byte	0x7d5
	.4byte	0x7f0
	.4byte	0x7fc
	.4byte	0x80f
	.4byte	0x81e
	.4byte	0x82d
	.4byte	0x832
	.4byte	0x859
	.4byte	0x864
	.4byte	0x873
	.section	.debug_str.dwo,"",%progbits
	.ascii	"boot_command_line\000"
	.ascii	"atomic_notifier_head\000"
	.ascii	"kmsg_fops\000"
	.ascii	"early_boot_irqs_disabled\000"
	.ascii	"PG_referenced\000"
	.ascii	"SYSTEM_SCHEDULING\000"
	.ascii	"__con_initcall_end\000"
	.ascii	"console_printk\000"
	.ascii	"PG_unevictable\000"
	.ascii	"unsigned int\000"
	.ascii	"lock_stat\000"
	.ascii	"c_false\000"
	.ascii	"taint_flags\000"
	.ascii	"pageflags\000"
	.ascii	"system_state\000"
	.ascii	"module\000"
	.ascii	"SYSTEM_POWER_OFF\000"
	.ascii	"zone_type\000"
	.ascii	"subkeys\000"
	.ascii	"PG_waiters\000"
	.ascii	"lockdep_subclass_key\000"
	.ascii	"SYSTEM_BOOTING\000"
	.ascii	"initcall_t\000"
	.ascii	"PG_reclaim\000"
	.ascii	"PG_fscache\000"
	.ascii	"devkmsg_log_str\000"
	.ascii	"PG_foreign\000"
	.ascii	"ZONE_HIGHMEM\000"
	.ascii	"hex_asc_upper\000"
	.ascii	"c_true\000"
	.ascii	"long long unsigned int\000"
	.ascii	"root_mountflags\000"
	.ascii	"SYSTEM_HALT\000"
	.ascii	"PG_writeback\000"
	.ascii	"PG_swapcache\000"
	.ascii	"PG_swapbacked\000"
	.ascii	"PG_private\000"
	.ascii	"lock_class_key\000"
	.ascii	"ZONE_NORMAL\000"
	.ascii	"reset_devices\000"
	.ascii	"taint_flag\000"
	.ascii	"__NR_PAGEFLAGS\000"
	.ascii	"counter\000"
	.ascii	"panic_cpu\000"
	.ascii	"PG_dirty\000"
	.ascii	"PG_owner_priv_1\000"
	.ascii	"_Bool\000"
	.ascii	"debug_locks\000"
	.ascii	"oops_in_progress\000"
	.ascii	"panic_notifier_list\000"
	.ascii	"panic_on_oops\000"
	.ascii	"PG_checked\000"
	.ascii	"__lockdep_no_validate__\000"
	.ascii	"char\000"
	.ascii	"file_operations\000"
	.ascii	"PG_active\000"
	.ascii	"PG_arch_1\000"
	.ascii	"PG_lru\000"
	.ascii	"debug_locks_silent\000"
	.ascii	"__con_initcall_start\000"
	.ascii	"linux_banner\000"
	.ascii	"PG_uptodate\000"
	.ascii	"PG_private_2\000"
	.ascii	"soc_mb\000"
	.ascii	"dmesg_restrict\000"
	.ascii	"ZONE_MOVABLE\000"
	.ascii	"prove_locking\000"
	.ascii	"long long int\000"
	.ascii	"sysctl_panic_on_stackoverflow\000"
	.ascii	"PG_reserved\000"
	.ascii	"PG_head\000"
	.ascii	"rodata_enabled\000"
	.ascii	"bool\000"
	.ascii	"panic_on_warn\000"
	.ascii	"SYSTEM_RUNNING\000"
	.ascii	"late_time_init\000"
	.ascii	"panic_on_io_nmi\000"
	.ascii	"linux_proc_banner\000"
	.ascii	"initcall_entry_t\000"
	.ascii	"PG_slab\000"
	.ascii	"printk_delay_msec\000"
	.ascii	"PG_isolated\000"
	.ascii	"PG_slob_free\000"
	.ascii	"kptr_restrict\000"
	.ascii	"short int\000"
	.ascii	"long int\000"
	.ascii	"PG_savepinned\000"
	.ascii	"SYSTEM_RESTART\000"
	.ascii	"elf_hwcap2\000"
	.ascii	"PG_locked\000"
	.ascii	"elf_hwcap\000"
	.ascii	"GNU C89 8.3.0 -mlittle-endian -mabi=aapcs-linux -mf"
	.ascii	"pu=vfp -marm -mtune=arm1136j-s -mfloat-abi=soft -mt"
	.ascii	"ls-dialect=gnu -march=armv6k -gsplit-dwarf -gdwarf-"
	.ascii	"4 -O2 -std=gnu90 -fno-strict-aliasing -fno-common -"
	.ascii	"fshort-wchar -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-"
	.ascii	"sra -funwind-tables -fno-delete-null-pointer-checks"
	.ascii	" -fstack-protector-strong -fomit-frame-pointer -fno"
	.ascii	"-var-tracking-assignments -fno-strict-overflow -fno"
	.ascii	"-merge-all-constants -fmerge-constants -fstack-chec"
	.ascii	"k=no -fconserve-stack --param allow-store-data-race"
	.ascii	"s=0\000"
	.ascii	"kernel/bounds.c\000"
	.ascii	"hex_asc\000"
	.ascii	"__security_initcall_start\000"
	.ascii	"panic_on_unrecovered_nmi\000"
	.ascii	"PG_double_map\000"
	.ascii	"sysctl_panic_on_rcu_stall\000"
	.ascii	"atomic_t\000"
	.ascii	"panic_timeout\000"
	.ascii	"__security_initcall_end\000"
	.ascii	"long unsigned int\000"
	.ascii	"PG_pinned\000"
	.ascii	"system_states\000"
	.ascii	"unsigned char\000"
	.ascii	"PG_error\000"
	.ascii	"saved_command_line\000"
	.ascii	"PG_mlocked\000"
	.ascii	"PG_mappedtodisk\000"
	.ascii	"crash_kexec_post_notifiers\000"
	.ascii	"signed char\000"
	.ascii	"short unsigned int\000"
	.ascii	"initcall_debug\000"
	.ascii	"__MAX_NR_ZONES\000"
	.ascii	"main\000"
	.ascii	"/home/km/TR_HUB/beagleboneblack-kernel\000"
	.ascii	"__one_byte\000"
	.ascii	"SYSTEM_SUSPEND\000"
	.ascii	"panic_blink\000"
	.ident	"GCC: (GNU Toolchain for the A-profile Architecture 8.3-2019.03 (arm-rel-8.36)) 8.3.0"
	.section	.note.GNU-stack,"",%progbits
