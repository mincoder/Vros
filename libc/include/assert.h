#ifndef _ASSERT_H
#define _ASSERT_H 1

#include <sys/cdefs.h>
#include <stdlib.h>

#define EOF (-1)

#ifdef __cplusplus
extern "C" {
#endif

#define assert(check) do { if(!(check)) abort(); } while(0)

#ifdef __cplusplus
}
#endif

#endif
