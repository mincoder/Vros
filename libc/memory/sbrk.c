#include <memory.h>
#include <stdint.h>

#define STACK_BUFFER  65536     /* Reserved stack space in bytes. */

void* sbrk (int nbytes) {
  /* Symbol defined by linker map */
  extern int  end;              /* start of free memory (as symbol) */

  /* Value set by crt0.S */
  extern void *stack;           /* end of free memory */

  /* The statically held previous end of the heap, with its initialization. */
  static void *heap_ptr = (void *)&end;         /* Previous end */

  if ((stack - (heap_ptr + nbytes)) > STACK_BUFFER )
    {
      void *base  = heap_ptr;
      heap_ptr   += nbytes;

      return  base;
    }
  else
    {
      //errno = ENOMEM;
      return  (void *) -1;
    }
}
