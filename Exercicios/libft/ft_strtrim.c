/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:30:53 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/16 16:11:02 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		start(char *str, char const *set, char *reverse_str)
{
	int		c;
	int		i;
	int		j;

	i = 0;
	c = 0;
	j = 0;
	while (set[i])
	{
		if (str[j] == set[i])
		{
			j++;
			i = 0;
		}
		else if (reverse_str[c] == set[i])
		{
			c++;
			i = 0;
		}
		i++;
	}
	return (c + j);
}

int	returni(char const *set, char const *s1)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (set[c])
	{
		if (s1[i] == set[c])
		{
			i++;
			c = 0;
		}
		c++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*reverse_string(char *str)
{
	int		c;
	int		i;
	int		size;
	char	*reverse;

	c = 0;
	i = -1;
	size = ft_strlen(str);
	while (size < 0)
	{
		reverse[c] = str[size - 1];
		c++;
		size--;
	}
	return (reverse);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*reverse;
	int		size;
	int		c;
	int		i;

	c = 0;
	i = 0;
	str = (char *)s1;
	reverse = reverse_string(str);
	size = ft_strlen(str) - start(str, set, reverse);
	str = (char *)malloc(size * sizeof(char));
	i = returni(set, s1);
	while (i < size)
	{
		str[c++] = s1[i];
		i++;
	}
	return (str);
}

int main(void)
{
	char *str;

	str = ft_strtrim(" Ricardo ", " ");
	printf("%s", str);
	return (0);
}
