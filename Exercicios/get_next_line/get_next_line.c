#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

/* Chamar esta função numa loop vai permitir ler um texto disponivel num fd (file descriptor) uma linha de cada vez sem o \n ate chegar ao EOF */
/* Parametros: file descriptor para ler e o valor do que é lido */
/* Return: 1 - linha foi lida 0 - chegou ao EOF -1 - Erro */
/* Compila com gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32
get_next_line.c get_next_line_utils.c*/
/* o read?? tem que usar o BUFFER_SIZE definido durante a compilaçáo para ler do ficheiro ou mostrar no stdin */

/* Nao se pode ler o ficheiro todo e depois devolver as linhas, mal chegar a uma linha devolver essa linha */
/* Se o file for binario o comportamento é undefined */
// Se o ficheiro tiver vazio
// So uma linha no ficheiro
// So um \n
//

int ft_strlen(char *src)
{
  int c;

  c = 0;
  while (src[c])
    c++;
  return(c);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			j;
	unsigned int	size;

	if (!s)
		return (NULL);
	size = (int)len;
	if (size >= ft_strlen((char *)s) - start)
		size = ft_strlen((char *)s) - start;
	if ((int)start >= ft_strlen((char *)s))
		size = 0;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((i >= start && j < len))
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		size;

	size = ft_strlen((char *)s1);
	dup = (char *)malloc(size + 1);
	if (!dup)
		return (NULL);
	while (*s1)
	{
		*dup = *(char *)s1;
		s1++;
		dup++;
	}
	*dup = '\0';
	return (dup - size);
	free(dup);
}

char *newstr(int size)
{
  char *temp;
  int c;

  c = 0;
  temp = (char *)malloc(size);
  if (!temp)
    return (NULL);
  while (c < size)
  {
    temp[c] = 0;
    c++;
  }
  temp[c] = '\0';
  return (temp);
}

int search_char(char *str, char c)
{
  while (*str)
  {
    if (*str == c)
      return (1);
    str++;
  }
  return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		sizetotal;

	if (!s1 || !s2)
		return (NULL);
	sizetotal = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)malloc(sizetotal + 1);
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str - sizetotal);
}

/*
void  join_strings(char **main, char *join)
{
  while (**main != '\0')
    main++;
  while (*join)
  {
    **main = *join;
    join++;
    main++;
  }
  **main = '\0';
} */

int read_line(int fd, char **line, char **str)
{
  int c;
  char *temp;
  int temp_int;

  c = 0;
  while (str[fd][c] != '\0' || str[fd][c] != '\n')
    c++;
  temp_int = c + 1;
  if (str[fd][c] == '\n')
  {
    while (str[fd][temp_int] != '\0')
      temp_int++;
    *line = ft_substr(str[fd], 0, c);
    temp = ft_substr(str[fd], c, temp_int);
    free(str[fd]);
    str[fd] = temp;
    return (1);
  }
  else
  {
    *line = ft_substr(str[fd], 0, c);
    free(str[fd]);
    str[fd] = NULL;
    return (0);
  }
}

int get_next_line(int fd, char **line)
{
  static char *str[1024];
  int         size;
  char        buff[BUFF_SIZE + 1];
  char        *temp;

  if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
    return (-1);
  while ((size = read(fd, buff, BUFF_SIZE)) > 0)
  {
    buff[size] = '\0';
    if (!str[fd])
      str[fd] = newstr(1);
    temp = ft_strjoin(str[fd], buff);
    free(str[fd]);
    str[fd] = temp;
    if (search_char(buff, '\n'))
      break ;
  }
  if (size < 0 || str[fd] == NULL)
    return (-1);
  else if (read_line(fd, line, &str[fd]))
    return (0);
  return (1);
}

int main(void)
{
  int fd;
  int i;
  int temp;
  char **line;

  line = (char **)malloc(sizeof(char *) * 10);
  i = 0;
  fd = open("file.txt", O_RDONLY);
  while (i < 2)
  {
    line[i] = malloc(sizeof(char) * 100);
    temp = get_next_line(fd, line);
    printf("line = %s\n", line[i]);
    i++;
  }
  return (0);
}
