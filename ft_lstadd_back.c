
#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;
    while(!tmp)
    {
        *tmp = new;
    }
    tmp = ft_lstlast(*lst);
    tmp->next = new;
}