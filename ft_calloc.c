/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 00:56:12 by rcarbonn          #+#    #+#             */
/*   Updated: 2023/06/04 01:03:10 by rcarbonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nm, size_t size)
{
	void	*p;

	p = (void *)malloc(nm * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nm * size);
	return (p);
}
