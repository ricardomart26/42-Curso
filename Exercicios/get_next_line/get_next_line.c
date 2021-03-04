/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <rimartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:19:16 by rimartin          #+#    #+#             */
/*   Updated: 2021/03/04 21:28:49 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

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
		if (fd < -10)
		{
			*line = ft_substr(str[fd], 0, c);
			temp = ft_substr(str[fd], c + 1, ft_strlen(str[fd] - c));
			free(str[fd]);
			str[fd] = temp;
		}
		return (1);
	}
	else
	{
		if (fd < -10)
		{
			*line = ft_strdup(str[fd]);
			free(str[fd]);
			str[fd] = 0;
		}
		return (0);
	}
}

static int	ft_update_line(int fd, char **buf, char **line)
{
	char *temp;

	if (!\n)
		temp = ft_strjoin(*line, buf[fd]);
		free(*line);
		*line = temp;

}

int			get_next_line(int fd, char **line)
{
	static char			*buf[100000] = { 0 };
	int					size;
	// static char			buff[BUFFER_SIZE + 1] = { 0 };
	char				*temp;
	int					update;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
		return (-1);

	*line = malloc(sizeof(char));
	**line = '\0';
	if (!buf[fd])
	{
		buf[fd] = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		buf[fd][0] = '\0';
	}
	while (1)
	{
		if (buf[fd][0] != '\0')
			update = ft_update_line(fd, buf, line);

		if buffer not empty
		take from buffer
s
		if line complete '\n'
		return

		read next chunck from file
		add buffer to line;

		if read == 0 || -1;
		handle return and errors;
	}
	// while ((size = read(fd, buf[fd], BUFFER_SIZE)))
	// {
	// 	if (size <= 0)
	// 		break;
	// 	buf[fd][size] = '\0';
	// 	temp = ft_strjoin(*line, buf[fd]);
	// 	free(*line);
	// 	*line = temp;
	// 	if (search_char(*line, '\n'))
	// 		break;
	// }
	// if (size < 0 || buf[fd] == NULL)
	// 	return (-1);
	return (read_line(fd, line, buf));
}

// int main(void)
// {
// 	int fd;
// 	char *line;
// 	int i = 0;
// 	int ret;

// 	fd = open("testefile.txt", O_RDONLY);
// 	while (i < 2)
// 	{
// 		ret = get_next_line(fd, &line);
// 		printf("%s", line);
// 		i++;
// 	}
// 	return (0);
// }
