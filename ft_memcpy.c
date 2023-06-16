/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:36:33 by raphaelcarb       #+#    #+#             */
/*   Updated: 2023/06/04 01:07:40 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*source;

	dst = (char *)dest;
	source = (char *)src;
	i = 0;
	if (dst == 0 && source == 0)
		return (NULL);
	while (i != n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}
