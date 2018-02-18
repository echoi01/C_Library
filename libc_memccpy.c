#include "LIBC.h"

void                *libc_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t          i;
    unsigned char   *s;
    unsigned char   *d;

    i = 0;
    s = (unsigned char *) src;
    d = (unsigned char *) dst;
    while (i++ <= n)
    {
        d[i] = s[i];
        if ((unsigned char)c == s[i])
            return (d + i + 1);
    }
    return (NULL);
}
