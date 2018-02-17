#include "LIBC.h"

int         whitespace(char c)
{
    switch (c) {
        case '\n':
        case '\t':
        case '\v':
        case ' ':
        case '\f':
        case '\r':
            return (1);
    }
    return (0);
}


int         libc_atoi(const char *str)
{
    int i;
    int neg;
    int ret;

    i = 0;
    ret = 0;
    while (whitespace(str[i]) == 1)
        i++;
    if (str[i] == '-')
        neg = 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        ret *= 10;
        ret += str[i] - '0';
        i++;
    }
    if (neg == 1)
        return (-ret);
    else
        return (ret);
}

int main(void)
{
    return (0);
}
