/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:36:33 by raphaelcarb       #+#    #+#             */
/*   Updated: 2023/04/20 15:01:18 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int     i;
    char    *s1;
    char    *s2;

    i = 0;
    while(i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    return(s2[i]);
}