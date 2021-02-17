/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:41:18 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/17 19:29:54 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	size_dest;
	size_t	res;
	size_t	size_src;
	size_t	i;

	s = (char *)src;
	size_dest = ft_strlen(dst);
	size_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (size > size_dest)
		res = size_src + size_dest;
	else
		res = size_src + size;
	while (s[i] && (size_dest + 1) < size)
	{
		dst[size_dest++] = s[i++];
		size_dest++;
		i++;
	}
	dst[size_dest] = '\0';
	return (res);
}
