/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:02:41 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/15 13:15:14 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*ptr;

	size = 0;
	while ((char)s[size])
		size++;
	ptr = (char *)malloc(sizeof(char *) * 9);
	ptr = (char *)s;
	while (0 < size)
	{
		if (*ptr == (char)c)
			return ((char *)s + size);
		size--;
	}
	return (0);
}
