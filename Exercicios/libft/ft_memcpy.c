/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:26 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/16 13:39:00 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	c = 0;
	while (c < n)
	{
		d[c] = s[c];
		c++;
	}
	return (dest);
}
