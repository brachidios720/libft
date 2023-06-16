/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:28:11 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/06/07 22:50:55 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	char		*tmpi;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[0])
		{
			tmpi = (char *)(s1 + i);
			while (s1[i + j] == s2[j] && i + j < n)
			{
				if (s2[j + 1] == '\0')
					return (tmpi);
				j++;
			}
			tmpi = 0;
		}
		i++;
	}
	return (NULL);
}
