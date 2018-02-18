#include "LIBC.h"

void        *libc_memalloc(size_t size)
{
    void *mem;

    mem = (void *)malloc(size);
    if (size > 65535 || mem == NULL)
        return (NULL);
    else
    {
        libc_allzero(mem, size);
        return (mem);
    }
}
