/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:43:15 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 15:14:57 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	last_number(int n)
{
	if (n > 10)
	{
		n %= 10;
		return (n);
	}
	return (n);
}

static int	count_unidades(int n)
{
	int		unidades;

	unidades = 0;
	while (n > 10)
	{
		n /= 10;
		unidades++;
	}
	unidades++;
	return (unidades);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size_str;
	int		temp;

	size_str = count_unidades(n);
	temp = size_str;
	str = (char *)malloc(sizeof(char) * size_str);
	if (!str)
		return (0);

	while (0 < size_str)
	{
		str[size_str - 1] = last_number(n) + '0';
		n /= 10;
		size_str--;
	}
	str[temp] = '\0';
	return (str);
}
