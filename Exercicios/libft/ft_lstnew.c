/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:42:51 by rimartin          #+#    #+#             */
/*   Updated: 2021/02/22 18:13:48 by rimartin         ###   ########.fr       */
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

t_list				*ft_lstnew(void *content)
{
	int		size;
	t_list	*novo;

	novo = (t_list *)malloc(sizeof(t_list));
	size = ft_memlen(content);
	if (!novo)
		return (NULL);
	novo->content = content;
	novo->next = NULL;
	return (novo);
}
