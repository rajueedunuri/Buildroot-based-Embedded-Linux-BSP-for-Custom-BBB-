cmd_crypto/pcbc.ko := arm-linux-gnueabihf-ld -r  -EL -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds  --build-id  -o crypto/pcbc.ko crypto/pcbc.o crypto/pcbc.mod.o ;  true
