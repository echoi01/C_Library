#include "LIBC.h"
#include <stdio.h>
size_t      libc_strlen(char* str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
