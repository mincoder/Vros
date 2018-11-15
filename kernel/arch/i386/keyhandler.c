#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <kernel/io.h>

#include <kernel/keyhandler.h>

char keyCode[] =
{'1','2','3','4','5','6','7','8','9','0',
'-','=','\b','\t','q','w','e','r','t','y',
'u','i','o','p','a',']','\n','c','a','s',
'd','f','g','h','j','k','l','o','a','s','\\',
'z','z','x','c','v','b','n','m','.','/'};

char getKey() {
    char c=0;
    do {
        if(inb(0x60)!=c) {
            c=inb(0x60);
            if(c>0)
                return keyCode[c-2];
        }
    } while(1);
}
