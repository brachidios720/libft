/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:01:41 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/06/04 01:04:13 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] == s1[i] && len > 0)
	{
		len--;
		i++;
	}
	if (len == 0)
		return (0);
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
