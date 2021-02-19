/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:51 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/13 17:22:08 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_memlen(void *conteudo)
{
	int size;

	size = 0;
	while (conteudo != '\0')
		size++;
	return (size);
}

t_list					*ft_lstnew(void *content)
{
	int			size;
	t_list	*novo;

	novo = (t_list *)malloc(sizeof(t_list) * 1);
	size = ft_memlen(content);
	if (novo == NULL)
		return (NULL);
	novo = content;
	novo->next = NULL;
	return (novo);
}


/*

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *retval;

	retval = (t_list*)malloc(sizeof(t_list));
	if (retval == NULL)
		return (NULL);
	if (content == NULL)
	{
		retval->content = NULL;
		retval->content_size = 0;
	}
	else
	{
		retval->content = malloc(content_size);
		if (content == NULL)
		{
			free(retval);
			return (NULL);
		}
		ft_memcpy(retval->content, content, content_size);
		retval->content_size = content_size;
	}
	retval->next = NULL;
	return (retval);
}


t_list
	*ft_lstnew(void *content)
{
	t_list	*elt;

	if (!(elt = (t_list*)malloc(sizeof(*elt))))
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}

*/
