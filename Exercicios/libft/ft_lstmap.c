/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:15:28 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/24 20:23:46 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;

	newlst = malloc(sizeof(t_list));
	if (!newlst)
	{
		del(lst);
		free(lst);
		return (0);
	}
	while (lst != NULL)
	{
		newlst = f(lst->content);
		newlst = lst->next;
		lst = lst->next;
	}
	return (newlst);
}
