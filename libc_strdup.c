#include "LIBC.h"

char        *libc_strdup(const char *str)
{
    int     i;
    int     len;
    char    *ret;

    i = 0;
    len = libc_strlen(str);
    ret = (char *)malloc((len) + 1);
    if ((ret = (char *)malloc((len) + 1)) == NULL)
        return (NULL);
    while (i++ <= len)
        ret[i] = str[i];
    ret[i] = '\0';
    return (ret);
}
