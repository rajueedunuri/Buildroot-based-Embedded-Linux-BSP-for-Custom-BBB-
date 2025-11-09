cmd_crypto/hmac.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/hmac.ko crypto/hmac.o crypto/hmac.mod.o ;  true
