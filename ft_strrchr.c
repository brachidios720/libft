#include<libft.h>

char    *strrchr(const char *s, int c)
{   
    size_t  len;
    
    len = ft_strlen(s);
    while(len && s[len] != c)
        len--;
    if(s[len] == c)
        return(char *)s + len;
    else 
        return(0);    
}