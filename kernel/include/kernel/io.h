#ifndef _KERNEL_IO_H
#define _KERNEL_IO_H 1

#include <stddef.h>

void outb(uint16_t, uint8_t);
uint8_t inb(uint16_t);

#endif
