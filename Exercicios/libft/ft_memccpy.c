/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:39 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/22 15:20:14 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	if (!dest || !src || n < 0)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < (int)n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return ((void *)dest + i + 1);
		i++;
	}
	dest = NULL;
	return (dest);
}
