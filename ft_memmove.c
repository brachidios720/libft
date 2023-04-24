/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:36:36 by raphaelcarb       #+#    #+#             */
/*   Updated: 2023/04/20 15:01:20 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *dest;
    char    *surc;
    
    if(!(dest || src))
        return(dest);
           
    dest = (char *)dst;
    surc = (char *)src;
    
    if(dest > surc)
    {
        while(len > 0)
        {
            dest[len - 1] = surc[len - 1];
            len--;
        }
    }
    else if(surc >= dest)
    {
        ft_memcpy(dest, surc, len);
    }  
}