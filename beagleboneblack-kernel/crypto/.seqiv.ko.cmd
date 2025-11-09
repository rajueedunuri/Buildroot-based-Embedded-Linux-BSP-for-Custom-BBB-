cmd_crypto/seqiv.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/seqiv.ko crypto/seqiv.o crypto/seqiv.mod.o ;  true
