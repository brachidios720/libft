/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 00:57:01 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/06/07 22:51:31 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s12;

	i = 0;
	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	while (n > i)
	{
		if (s11[i] != s12[i])
			return (s11[i] - s12[i]);
		i++;
	}
	if (n == i)
		return (0);
	return (s11[i] - s12[i]);
}
