#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    char    *r1;
    char    *r2;

    i = 0;
    r1 = (char *)s1;
    r2 = (char *)s2;
    while(i < n)
    {
        if(r1[i] != r2[i])
            return(r1[i] - r2[i]);
        i++;
    }
    return(0);
}