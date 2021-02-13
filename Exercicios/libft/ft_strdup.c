/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:41:32 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 16:29:01 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		size;

	size = ft_strlen((char *)s);
	dup = (char *)malloc(size + 1);
	if (!dup)
		return (NULL);
	while (*s)
	{
		dup = (char *)s;
		s++;
		dup++;
	}
	return (dup - size);
}
