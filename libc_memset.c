#include "LIBC.h"

void        *libc_memet(void *b, int c, size_t len)
{
    size_t  i;
    char    *mem;

    i = 0;
    mem = (char*)b;
    while (i++ <= len)
        mem[i] = (unsigned char)c;
    return (b)
}
