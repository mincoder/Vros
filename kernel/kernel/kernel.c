#include <stdio.h>

#include <kernel/tty.h>
#include <kernel/keyhandler.h>
#include <kernel/terminal.h>

void kernel_main(void) {
	tty_initialize();
	tty_writestring("Booting VROS kernal v0.1\n");
	terminal_init();
}
