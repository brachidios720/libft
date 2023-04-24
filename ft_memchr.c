/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:00:48 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/04/20 16:52:32 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *p;
    
    p = (unsigned char*) s;
    i = 0;
    while(i < n)
    {
        if(p[i] == (unsigned char *)c)
        {
            return (void *)p + i;
            i++;
        }
    }
    return(0);
}