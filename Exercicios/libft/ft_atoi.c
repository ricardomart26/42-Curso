/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:18:06 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/16 14:27:26 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_number(const char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	else
		return (0);
}

static int	iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
			|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *nptr)
{
	long int	temp;
	int			minus;

	minus = 0;
	temp = 0;
	while (iswhitespace(*nptr))
		nptr++;
	while (*nptr == '-')
	{
		minus = 1;
		nptr++;
	}
	if (!is_number(nptr) && !*nptr)
		return (0);
	while (is_number(nptr))
	{
		temp *= 10;
		temp += *nptr - 48;
		nptr++;
	}
	if (minus == 1)
		temp *= -1;
	return (temp);
}
