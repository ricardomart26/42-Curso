/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:41:41 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/15 14:51:31 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *src;

	src = (char *)s;
	while (*(char *)s)
	{
		if (*(char *)s == (char)c)
		{
			src = (char *)s;
			return (src);
		}
		s++;
	}
	return (0);
}
