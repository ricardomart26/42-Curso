/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:22:31 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/19 15:47:18 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	int		size;

	size = (int)len;
	if (size > ft_strlen((char *)s))
		size = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char *) * size);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((i >= start && j < len))
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
