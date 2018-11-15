#include "LIBC.h"

int libc_isallnum(int c)
{
    if (libc_isalpha(c) || libc_isdigit(c))
        return (1);
    else
        return (0);
}