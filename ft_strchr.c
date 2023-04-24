/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:01:25 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/04/20 15:04:09 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *s, int c)
{
    char *str;

    str = (char *)s;
    while(*str && *str != (char)c)
        str++;
    if(*str == c)
        return(str);
    else 
        return(0);
}