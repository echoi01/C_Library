#include "LIBC.h"

int         libc_arrlen(char **arr)
{
    int count;

    count = 0;
    while (arr && arr[count])
        count++;
    return (count);
}