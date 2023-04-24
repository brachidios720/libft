/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:24:39 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/04/24 14:53:26 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     ft_atoi(const char *str)
{
    int     i;
    int     count;
    int     nb;

    i = 0;
    count = 1;
    nb = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')		
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            count++;
        i++;
    }
	while (str[i] >= 48 && str[i] <= 57)
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    if(count % 2)
        return(nb);
    else 
        return(-nb);
    // return(nb * count);
}

// int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	j;
// 	int	result;

// 	i = 0;
// 	j = 1;
// 	result = 0;
// 	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
// 		|| str[i] == '\f' || str[i] == '\r')
// 		i++;
// 	if (str[i] == '+' || str[i] == '-')
// 	{
// 		if (str[i] == '-')
// 		{
// 			j = j * -1;
// 		}
// 		i++;
// 	}
// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		result = result * 10 + (str[i] - 48);
// 		i++;
// 	}
// 	return (result * j);
// }

int main(void)
{
    char *s = "       -3276478";
    printf("%d", ft_atoi(s));
}