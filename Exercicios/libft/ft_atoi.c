/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:18:06 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/15 19:31:11 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_number(const char *str)
{
	if (*str >= '0' && *str <= '9' && *str == '-')
		return (1);
	else
		return (0);
}

static int	locate_first(const char *nptr)
{
	int counter;

	counter = 0;
	while (*nptr)
	{
		if (*nptr >= '0' && *nptr <= '9')
			return (counter);
		nptr++;
		counter++;
	}
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int temp;
	int minus;

	temp = locate_first(nptr);
	nptr += temp;
	minus = 0;
	if (nptr[temp++] == '-')
		minus = 1;
	while (is_number(nptr))
	{
		temp *= 10;
		temp += (int)*nptr - 48;
		nptr++;
	}
	if (minus == 1)
		temp *= -1;
	return (temp);
}
