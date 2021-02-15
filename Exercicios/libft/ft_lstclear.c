/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:08:47 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/15 18:46:06 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	temp = *lst;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			del(temp);
			temp = temp->next;
		}
	}
}
