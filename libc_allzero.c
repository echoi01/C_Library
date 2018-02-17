#include "LIBC.h"

void        libc_allzero(void *s, size_t n)
{
    size_t  i;
    char    *tmp;

    i = 0;
    tmp = s;
    while (i < n)
    {
        tmp[i] = 0;
        i++;
    }
}
