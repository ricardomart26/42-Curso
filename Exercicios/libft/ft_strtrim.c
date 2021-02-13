/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:30:53 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 16:44:57 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		start(char *str, char const *set, char *reverse_str)
{
	int		c;
	char	*reverse;
	int		size;

	c = 0;
	size = 0;
	while (*set)
	{
		if (*str == *set)
		{
			str++;
			size++;
			set -= c;
			c = 0;
		}
		if (*reverse_str == *set)
		{
			str++;
			size++;
			set -= c;
			c = 0;
		}
		set++;
		c++;
	}
	return (size);
}

char	*reverse_string(char *str)
{
	int		c;
	int		i;
	char	*reverse;

	c = 0;
	i = -1;
	while (*str)
		reverse[c++] = str[i--];
	return (reverse);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*reverse;
	int		size;
	int		c;

	c = 0;
	str = (char *)s1;
	reverse = reverse_string(str);
	size = ft_strlen(str);
	size -= start(str, set, reverse);
	str = (char *)malloc(size * sizeof(char));
	while (*set++ - 1)
	{
		if (*s1 == *set)
		{
			s1++;
			set -= c;
			c = 0;
		}
		c++;
	}
	c = -1;
	while (c++ < size)
		*str++ = *s1++;
	return (str);
}
