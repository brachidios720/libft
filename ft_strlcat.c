/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 01:07:14 by raphaelcarb       #+#    #+#             */
/*   Updated: 2023/06/04 01:04:06 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	length;

	length = 0;
	i = 0;
	while (dest[length] && length < len)
		length++;
	while (src[i] && len && length + i < len - 1)
	{
		dest[length + i] = src[i];
		i++;
	}
	if (length < len)
		dest[length + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}
