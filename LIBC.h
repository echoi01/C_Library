#ifndef LIBC_H
# define LIBC_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int					libc_atoi(const char *str);
void				libc_bzero(void *s, size_t n);
int					libc_isallnum(int c);
char				**libc_arrcpy(char **arr);
int                 libc_arrlen(char **arr)


#endif
