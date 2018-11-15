#include "libft.h"

char **ft_arrcpy(char **arr)
{
    char    **new_arr;
    int     i;

    if (!(new_arr = (char **)malloc(sizeof(char *) * (libc_arrlen(arr) + 1))))
        return (NULL);
    i = 0;
    while (arr && arr[i])
    {
        new_arr[i] = libc_strdup(arr[i]);
        i++;
    }
    new_arr[i] = NULL;
    return (new_arr);
}