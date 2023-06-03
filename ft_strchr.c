/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:01:25 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/06/04 01:03:52 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ya;

	ya = (char)c;
	i = 0;
	while (*s)
	{
		if (*s == ya)
			return ((char *)s);
		s++;
	}
	if (*s == ya)
		return ((char *)s);
	return (0);
}
