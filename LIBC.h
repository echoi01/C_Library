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
int		            libc_isalpha(int c)
int                 libc_isascii(int c)
int                 libc_isdigit(int c)
int                 libc_isprint(int c)
char                *libc_itoa(int n)
void		        libc_lstadd(t_list **alst, t_list *new)


#endif
