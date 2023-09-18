# include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!*lst || !lst)
    {
        new->next = NULL;
        *lst = new;
        return;

    }
    new->next = *lst;
    *lst = new; 
}