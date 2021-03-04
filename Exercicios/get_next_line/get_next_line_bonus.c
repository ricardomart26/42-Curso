/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:32:24 by rimartin          #+#    #+#             */
/*   Updated: 2021/03/04 17:32:26 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	search_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static int	read_line(int fd, char **line, char **str)
{
	int					c;
	char				*temp;

	c = 0;
	while (str[fd][c] != '\0' || str[fd][c] != '\n')
		c++;
	if (str[fd][c] == '\n')
	{
		*line = ft_substr(str[fd], 0, c);
		temp = ft_substr(str[fd], c + 1, ft_strlen(str[fd] - c));
		free(str[fd]);
		str[fd] = temp;
		return (1);
	}
	else
	{
		*line = ft_strdup(str[fd]);
		free(str[fd]);
		str[fd] = 0;
		return (0);
	}
}

int			get_next_line(int fd, char **line)
{
	static char			*str[100000];
	int					size;
	char				buff[BUFF_SIZE + 1];
	char				*temp;

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	while (((search_char(buff, '\n'))) && (size = read(fd, buff, BUFF_SIZE)))
	{
		buff[size] = '\0';
		if (!str[fd])
			str[fd] = newstr(1);
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
	}
	if (size < 0 || str[fd] == NULL)
		return (-1);
	return (read_line(fd, line, &str[fd]));
}
