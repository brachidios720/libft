
#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *memb;

    memb = malloc(sizeof(t_list));
    if(memb == NULL)
        return(0);
    memb->content = content;
    memb->next = NULL;
    return(memb);
    free(memb);
}