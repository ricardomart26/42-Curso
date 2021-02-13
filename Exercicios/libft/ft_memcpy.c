/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:26 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 14:48:20 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;
	char		*d;
	char		*s;

	c = 0;
	d = (char *)dest;
	s = (char *)src;

	while (c++ < n)
		d[c] = s[c];

	return (dest);
}
