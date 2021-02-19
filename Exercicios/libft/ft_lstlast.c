/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:57 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 15:23:02 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*insert_head(t_list **head, t_list *insert)
{
	insert->next = *head;
	*head = insert;
	return (insert);
}

static t_list	*insert_value(int value)
{
	t_list *temp;

	temp = (t_list *)malloc(sizeof(t_list));
	temp->content = value;
	temp->next = NULL;
	return (temp);
}

t_list				*ft_lstlast(t_list *lst)
{
	t_list *temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp = lst;
	while (temp != NULL)
		temp = temp->next;
	return (temp);
}

/*
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
*/
