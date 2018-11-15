#ifndef _KERNEL_TERMINAL_H
#define _KERNEL_TERMINAL_H

#include <stddef.h>

void terminal_init();
void readCommand();
void println(const char*);

#endif
