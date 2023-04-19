#include "libft.h"

char *strchr(const char *s, int c)
{
    char *str;

    str = (char *)s;
    while(*str && *str != (char)c)
        str++;
    if(*str == c)
        return(str);
    else 
    return(0);
}