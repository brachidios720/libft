/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:36:33 by raphaelcarb       #+#    #+#             */
/*   Updated: 2023/04/18 17:40:42 by raphaelcarb      ###   ########.fr       */
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