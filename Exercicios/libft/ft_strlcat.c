/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:41:18 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/16 12:25:41 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t src_size;
	size_t dest_size;
	size_t space_left;

	i = 0;
	dest_size = 0;
	space_left = size;
	src_size = ft_strlen((char *)src);
	while (dest[dest_size] != '\0' && space_left-- != 0)
		dest_size++;
	space_left = size - dest_size;
	if (space_left == 0)
		return (size + dest_size);
	i = 0;
	j = dest_size;
	while (src[i] != 0 && space_left-- > 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (src_size + dest_size);
}
