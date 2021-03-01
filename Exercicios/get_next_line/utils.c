#include "get_next_line.h"

int ft_next_line(char **str, char **line, int fd, int ret)
{
  char *temp;
  int len;

  len = 0;
  while (str[fd][len] != '\n' && str[fd][len] != '\0')
    len++;
  if (str[fd][len] == '\n')
  {
    *line = ft_strsub(str[fd], 0, len);
    temp = ft_strdup(str[fd] + len + 1);
    free(str[fd]);
    str[fd] = temp;
    if (str[fd][0] == '\0')
      ft_strdel(&str[fd]);
  }
  else if (str[fd][len] == '\0')
  {
    if (ret == BUFF_SIZE)
      return (get_next_line(fd, line));
    *line = ft_strdup(str[fd]);
    ft_strdel(&str[fd]);
  }
  return (1);
}

int get_next_line(const int fd, char **line)
{
  static char *str[255];
  char buf[BUFF_SIZE + 1];
  char *temp;
  int ret;

  if (fd < 0 || line == NULL) // Validação
    return (-1);

  while ((ret = read(fd, buf, BUFF_SIZE) > 0))
  {
    buf[ret] = '\0';
    if (str[fd] == NULL)
      str[fd] = ft_strnew(1);
    temp = ft_strjoin(str[fd], buf);
    free(str[fd]);
    if (ft_strchr(buf, "\n"))
      break;
  }
  if (ret < 0)
    return (-1);
  else if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
    return (0);
  return (ft_new_line(str, line, fd, ret));
}