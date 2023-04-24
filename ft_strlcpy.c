/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:37:11 by raphaelcarb       #+#    #+#             */
/*   Updated: 2023/04/20 15:01:30 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest , const char *src , size_t size)
{
    size_t     i;
    size_t     j;

    j = ft_strlen(src);
    i = 0;
    if(!(src || dest))
        return(0);
    if(size != 0)
    {
        while(src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return(j);
}