/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:19:34 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/15 18:12:21 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		c;
	char	*temp;

	temp = (char *)s;
	if (!s)
		return ;
	c = 0;
	while (c < (int)n)
	{
		temp[c] = '\0';
		c++;
	}
}
