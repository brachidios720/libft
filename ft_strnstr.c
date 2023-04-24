/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:28:11 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/04/24 16:30:50 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t  i;
    size_t  j;
    int     p;

    i = 0;
    j = 0;
    if(s2[i] != '\0')
        return((char *)(s1))
    while(s1[i] && i < len)
    {
        p = (char *)(s1 + i);
        if(s1[i] == s2[0])
        {
            
            while(s1[i + j] == s2[j] && len > i + y)
            {
                if(s2[y + 1] == '\0')
                    return(p);
                y++;
            }
            p = 0;   
        }
        i++;
    }
    return(NULL)
}
