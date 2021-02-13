/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:43:19 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 13:57:07 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool		less_32(int c)
{
	if (c > 32)
		return (1);
	else
		return (0);
}

static bool		bigger_126(int c)
{
	if (c < 127)
		return (1);
	else
		return (0);
}

int				ft_isprint(int c)
{
	if (!(less_32 && bigger_126))
		return (1);
	else
		return (0);
}
