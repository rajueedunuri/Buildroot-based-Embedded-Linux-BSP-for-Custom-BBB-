cmd_crypto/drbg.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/drbg.ko crypto/drbg.o crypto/drbg.mod.o ;  true
