#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <kernel/tty.h>

#include <kernel/terminal.h>

static size_t cursor_row = 0;
static size_t cursor_column = 0;

void terminal_init() {
  tty_clear();
  println("VROS Terminal v0.1 init");
  tty_updatecursor();
}

void readCommand() {
  tty_writestring("User>");
  tty_updatecursor();
}

void println(const char* text) {
  tty_writestring(text);
}
