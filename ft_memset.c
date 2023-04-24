/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:36:44 by raphaelcarb       #+#    #+#             */
/*   Updated: 2023/04/20 15:01:23 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t len)
{
    int i;
    char *str;

    i = 0;
    while(i < len)
    {
        str[i] = c;
        i++;
    }
    return(s);
}