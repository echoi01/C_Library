#include "LIBC.h"

char        *libc_strcat(char *s1, const char *s2)
{
    int i;
    int len;

    i = 0;
    len = libc_strlen(s1);
    while (s2[i])
    {
        s1[len + i] = s2[i];
        i++;
    }
    s1[len + i] = '\0';
    return (s1);
}
