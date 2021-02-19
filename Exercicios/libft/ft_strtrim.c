/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:30:53 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/17 14:23:23 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		startfunct(char const *str, char const *set, size_t *start)
{
	size_t	i;

	i = 0;
	*start = 0;
	while (set[i])
	{
		if (str[*start] == set[i])
		{
			(*start)++;
			i = -1;
		}
		i++;
	}
	return ;
}

void		endfunct(char const *str, char const *set, size_t *end)
{
	size_t	i;

	i = 0;
	*end = ft_strlen((char *)str) - 1;
	while (set[i])
	{
		if (str[*end] == set[i])
		{
			(*end)--;
			i = -1;
		}
		i++;
	}
	return ;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (s1 != 0 && set != 0)
	{
		startfunct(s1, set, &start);
		endfunct(s1, set, &end);
		str = malloc(sizeof(char) * (end - start));
		if (!str)
			return (NULL);
		i = 0;
		while (start <= end)
		{
			str[i] = s1[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}

/*
static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

*/