#include "LIBC.h"

int         libc_toupper(int c)
{
    if(libc_ischar(c))
        return (c - 32);
    else
        return (c);
}
