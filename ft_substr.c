#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *newstring;

    i = 0;
    if(!s)
        return(NULL);
    newstring = (char *)calloc((len + 1), sizeof(char))
    if(!newstring)
        return(NULL);
    while(len > 0 && start < ft_strlen(s))
    {
        newstring[i] = s[i + start];
        i++;
        len--;
    }
    return(newstring);
}