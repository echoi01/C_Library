#include "LIBC.h"

void        *libc_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    *mem;
    char    *mem2;

    i = 0;
    mem = (char*)dst;
    mem2 = (char*)src;

    while(i++ <= n)
        mem[i] = mem2[i];
    return (dst);
}
