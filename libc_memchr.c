#include "LIBC.h"

void        *libc_memchr(const void *s, int c, size_t n)
{
    char    *str;
    size_t  i;

    i = 0;
    str = (char *)s;
    while (i < n)
    {
        if (*str == (char)c)
            return ((void *)str);
        else
            str++;
        i++;
    }
    return (NULL);
}
