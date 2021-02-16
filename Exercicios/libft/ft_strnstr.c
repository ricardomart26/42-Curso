/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:38:45 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/16 12:56:53 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size_needle;

	if (!needle)
		return ((char *)haystack);
	while (*haystack)
	{
		size_needle = ft_strlen((char *)needle) - 1;
		while (*needle == *haystack && len-- > 0)
		{
			needle++;
			haystack++;
			size_needle--;
		}
		if (size_needle == 0)
			return ((char *)haystack - size_needle);
		haystack++;
	}
	return (0);
}
