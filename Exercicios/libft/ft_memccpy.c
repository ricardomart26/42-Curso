/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:39 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/17 20:13:06 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	if (!dest || !src || n == 0)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < (int)n)
	{
		d[i] = s[i];
		if (*s == (unsigned char)c)
			return ((void *)dest + i + 1);
		i++;
	}
	dest = NULL;
	return (dest);
}
