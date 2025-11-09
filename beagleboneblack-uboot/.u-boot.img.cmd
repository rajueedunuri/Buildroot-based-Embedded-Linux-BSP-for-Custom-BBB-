cmd_u-boot.img := ./tools/mkimage -A arm -T firmware -C none -O u-boot -a 0x80800000 -e 0 -n "U-Boot 2019.04SECOND_INNINGS""-g07a0789b-dirty for am335x board" -d u-boot.bin u-boot.img >/dev/null 
