cmd_crypto/fcrypt.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/fcrypt.ko crypto/fcrypt.o crypto/fcrypt.mod.o ;  true
