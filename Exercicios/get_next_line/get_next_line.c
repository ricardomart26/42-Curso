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

int get_next_line(int fd, char **line)
{
  static char str[254];
  char *temp;
  int ret;
  char buff[BUFF_SIZE + 1];

  if (fd < 0 || line == NULL)
    return (-1);
  while (ret = open(fd, buff, BUFF_SIZE) > 0)
  {
    buff[ret] = '\0';
    if (str[fd] == NULL)
      

  }
}

int main(void)
{
}