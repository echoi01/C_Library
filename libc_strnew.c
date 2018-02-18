#include "LIBC.h"

char        *libc_strnew(size_t size)
{
    char *str;

    if (!(str = (char *)libc_memalloc(size + 1)))
        return (NULL);
    return (str);
}
