/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:08:47 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/24 16:42:11 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		while (*lst != NULL)
		{
			del((*lst)->content);
			free(*lst);
			*lst = (*lst)->next;
		}
	}
	*lst = NULL;
}
