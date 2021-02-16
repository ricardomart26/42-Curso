/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:43:15 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/16 16:23:00 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_unidades(int n)
{
	int		unidades;

	unidades = 1;
	while (n > 10)
	{
		n /= 10;
		unidades++;
	}
	return (unidades);
}

void		convert_number(int *minus, int *n)
{
	*minus = 1;
	*n *= -1;
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size_str;
	int		temp;
	int		minus;

	minus = 0;
	if (n < 0)
		convert_number(&minus, &n);
	size_str = count_unidades(n);
	temp = size_str;
	str = (char *)malloc(sizeof(char) * size_str + minus);
	if (!str)
		return (0);
	while (0 < size_str)
	{
		str[size_str--] = (n % 10) + '0';
		n /= 10;
	}
	if (minus == 1)
		str[size_str] = '-';
	str[temp + 1] = '\0';
	return (str);
}
