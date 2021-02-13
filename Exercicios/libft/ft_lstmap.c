/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:15:28 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/12 17:21:34 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;

	newlst = malloc(sizeof(sizeof(t_list)));
	while (newlst != NULL)
	{
		newlst->content = lst->content;
		f(newlst);
		lst = lst->next;
		newlst = newlst->next;
	}
	return (newlst);
}
