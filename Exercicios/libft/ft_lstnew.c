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

int			ft_memlen(void *conteudo)
{
	int size;

	size = 0;
	while (conteudo != '\0')
		size++;
	return (size);
}

t_list	*ft_lstnew(void *content)
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
