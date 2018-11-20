#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	terminal_writestring("Booting VROS kernel v0.1\n");
	terminal_writestring("Use HELP to view commands\n");
}
