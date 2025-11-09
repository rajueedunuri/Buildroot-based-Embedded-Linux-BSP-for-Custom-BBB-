cmd_crypto/ctr.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/ctr.ko crypto/ctr.o crypto/ctr.mod.o ;  true
