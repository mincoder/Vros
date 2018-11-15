#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/Vros.kernel isodir/boot/Vros.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "Vros" {
	multiboot /boot/Vros.kernel
}
EOF
grub-mkrescue -o Vros.iso isodir
