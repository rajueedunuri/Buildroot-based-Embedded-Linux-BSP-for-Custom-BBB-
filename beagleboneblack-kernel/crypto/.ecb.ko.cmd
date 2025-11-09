cmd_crypto/ecb.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/ecb.ko crypto/ecb.o crypto/ecb.mod.o ;  true
