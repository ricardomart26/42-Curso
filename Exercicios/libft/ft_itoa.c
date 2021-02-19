/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:43:15 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/17 20:04:48 by rimartin         ###   ########.fr       */
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

void		convert_number(size_t *minus, int *n)
{
	*minus = 1;
	*n *= -1;
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size_str;
	int		temp;
	size_t	minus;

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


/*
static int	ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

static void	ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	length;

	is_neg = (n < 0);
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[length] = '-';
	ft_strrev(str);
	return (str);
}
*/