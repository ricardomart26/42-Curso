/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:32:49 by rimartin          #+#    #+#             */
/*   Updated: 2021/03/04 17:32:51 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_strlen(char *src)
{
	int	c;

	c = 0;
	while (src[c])
		c++;
	return (c);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			j;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = (int)len;
	if (size >= ft_strlen((char *)s) - start)
		size = ft_strlen((char *)s) - start;
	if ((int)start >= ft_strlen((char *)s))
		size = 0;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((i >= start && j < len))
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		size;

	size = ft_strlen((char *)s1);
	dup = (char *)malloc(size + 1);
	if (!dup)
		return (NULL);
	while (*s1)
	{
		*dup = *(char *)s1;
		s1++;
		dup++;
	}
	*dup = '\0';
	return (dup - size);
	free(dup);
}

char	*newstr(int size)
{
	char	*temp;
	int		c;

	c = 0;
	temp = (char *)malloc(size);
	if (!temp)
		return (NULL);
	while (c < size)
	{
		temp[c] = 0;
		c++;
	}
	temp[c] = '\0';
	return (temp);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		sizetotal;

	if (!s1 || !s2)
		return (NULL);
	sizetotal = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizetotal + 1);
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str - sizetotal);
}
