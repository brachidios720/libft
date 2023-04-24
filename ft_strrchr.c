/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:01:43 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/04/20 15:01:43 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<libft.h>

char    *strrchr(const char *s, int c)
{   
    size_t  len;
    
    len = ft_strlen(s);
    while(len && s[len] != c)
        len--;
    if(s[len] == c)
        return(char *)s + len;
    else 
        return(0);    
}