/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 00:57:43 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/06/04 01:03:54 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;
	size_t	d;

	i = ft_strlen(s) + 1;
	p = (char *)malloc(sizeof(char) * i);
	if (!p)
		return (NULL);
	d = 0;
	while (s[d])
	{
		p[d] = s[d];
		d++;
	}
	p[d] = '\0';
	return (p);
}
