#include "libft.h"

char    *strdup(const char *s)
{
    char   *p;
    size_t  i;

    if(!s)
        return(NULL);
    p = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!p)
        return(NULL);
    
    i = 0;
    while(s[i])
    {
        p[i] = s[i];
        i++;
    }
    p[i] == '\0';
    return(p);
}