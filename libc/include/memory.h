#ifndef _MEMORY_H
#define _MEMORY_H 1

#include <sys/cdefs.h>
#include <types.h>
#include <stddef.h>

#define EOF (-1)

#ifdef __cplusplus
extern "C" {
#endif

u32 kmalloc(u32, int, u32*);
void memory_copy(u8*, u8*, int);
void memory_set(u8*, u8, u32);
void* sbrk (int);
struct block_meta *find_free_block(struct block_meta**, size_t);
struct block_meta *request_space(struct block_meta*, size_t);
void* malloc(size_t);
struct block_meta *get_block_ptr(void*);
void free(void*);
void* calloc(size_t, size_t);

#ifdef __cplusplus
}
#endif

#endif
