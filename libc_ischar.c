#include "LIBC.h"

int     libc_ischar(int c)
{
    if((c >= 'a' && c <= 'z'))
        return (1);
    else
        return (0);
}
