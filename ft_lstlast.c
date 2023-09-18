#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list *tmp; 
    if(lst == NULL)
        return(0);
    tmp = lst;
    while (tmp->next != NULL)
        tmp = tmp->next;
    return(tmp);
}

// t_list  *ft_lstlast(t_list *lst, int index)
// {
//     int i;

//     i = 1;

//     t_list *tmp; 
//     if(lst == NULL)
//         return(0);
//     tmp = lst;
//     while (tmp->index != index)
//         tmp = tmp->next;
//     return(tmp);
// }