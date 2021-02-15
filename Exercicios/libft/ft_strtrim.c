/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:30:53 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/15 13:16:13 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		start(char *str, char const *set, char *reverse_str)
{
	int		c;
	int		size;

	c = 0;
	size = 0;
	while (*set)
	{
		if (*(str++) == *set)
		{
			set -= c;
			c = 0;
		}
		if (*(reverse_str++) == *set)
		{
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
	reverse = NULL;
	while (*str)
	{
		reverse[c] = str[i];
		i--;
		c++;
	}
	reverse[c] = '\0';
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
		*(str++) = *(s1++);
	return (str);
}
