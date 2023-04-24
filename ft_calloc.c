#include "libft.h"

void    *calloc(size_t nmemb, size_t size)
{
    void    *p;

    p = (void *)malloc(nmemb * size)
    if(!p) 
        return(NULL);
    ft_bzero(p, nmemb * size);
    return(p);
}