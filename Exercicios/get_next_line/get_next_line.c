/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:19:16 by rimartin          #+#    #+#             */
/*   Updated: 2021/03/08 12:16:58 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	strsave(int fd, char **line, char **store)
{
	int			i;
	char		*temp;

	i = 0;
	while (store[fd][i] != '\n' && store[fd][i] != '\0')
		i++;
	if (store[fd][i] == '\n')
	{
		*line = ft_substr(store[fd], 0, i);
		temp = ft_substr(store[fd], i + 1, ft_strlen(store[fd]) - i);
		free(store[fd]);
		store[fd] = temp;
		return (1);
	}
	else
	{
		*line = ft_strdup(store[fd]);
		free(store[fd]);
		store[fd] = 0;
		return (0);
	}
}

static int	returns(int fd, char **line, char **store, int readcount)
{
	if (readcount == -1)
		return (-1);
	if (!(readcount) && store[fd] == NULL)
	{
		*line = ft_strdup("");
		return (0);
	}
	return (strsave(fd, line, store));
}

int			get_next_line(int fd, char **line)
{
	static char	*store[100000];
	char		buff[BUFFER_SIZE + 1];
	char		*temp;
	int			readcount;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	while ((readcount = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[readcount] = '\0';
		if (!store[fd])
			store[fd] = ft_strdup("");
		temp = ft_strjoin(store[fd], buff);
		free(store[fd]);
		store[fd] = temp;
		if ((ft_strchr(store[fd], '\n')))
			break ;
	}
	return (returns(fd, line, store, readcount));
}
