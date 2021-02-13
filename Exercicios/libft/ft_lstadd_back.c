/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:43:11 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 17:11:48 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	if (temp->next == NULL)
	{
		temp->next = new;
		new->next = NULL;
	}
}
