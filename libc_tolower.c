#include "LIBC.h"

int     libc_tolower(int c)
{
    if (libc_ischar(c))
        return (c + 32);
    else
        return (c);
}
