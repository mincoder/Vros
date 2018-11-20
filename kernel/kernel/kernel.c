#include <stdio.h>

#include <kernel/tty.h>
#include <kernel/keyhandler.h>
#include <kernel/terminal.h>
#include <string.h>
#include <memory.h>
#include <assert.h>

void kernel_main(void) {
	tty_initialize();
	tty_writestring("Booting VROS kernal v0.1\n");
	u32 phys_addr;
	u32 page = kmalloc(10000, 1, &phys_addr);
	malloc(30);
	char* x = strcat("Hello ","kids");
	assert(0==1);
	//terminal_init();
}
