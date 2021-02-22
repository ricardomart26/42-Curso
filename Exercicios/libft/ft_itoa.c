/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:43:15 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/22 17:50:17 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			counter(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = counter(n);
	str = malloc(size * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (str);
}

/*
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


static int  ft_counter(int n)
{
    int         counter;
    long int    i;
    counter = 0;
    i = n;
    if (i < 0)
    {
        counter = 1;
        i *= -1;
    }
    while (i >= 10)
    {
        i = (i / 10);
        counter++;
    }
    return (counter + 1);
}
char        *ft_itoa(int n)
{
    char    *str;
    int     strsize;
    strsize = ft_counter(n);
    if (!(str = malloc(sizeof(char) * (strsize + 1))))
        return (NULL);
    str[strsize] = '\0';
    if (n == -2147483648)
    {
        str[0] = '-';
        str[1] = '2';
        n = 147483648;
    }
    if (n < 0)
        str[0] = '-';
    if (n < 0)
        n *= -1;
    strsize -= 1;
    while (n >= 10 && strsize >= 0)
    {
        str[strsize--] = (n % 10) + 48;
        n /= 10;
    }
    str[strsize] = n + 48;
    return (str);
}

*/
