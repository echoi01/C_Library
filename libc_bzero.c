#include "LIBC.h"

void        libc_bzero(void *s, size_t n) 
{
    unsigned char *p;

    p = (unsigned char *)s;
    while (n--)
        *p++ = 0;
}