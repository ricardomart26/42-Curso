#include "libft.h"

int ft_memlen (void *conteudo, int *size)
{
  while (conteudo != '\0')
    size++;
  return (size);
}

t_list *ft_lstnew(void *content)
{
  int size;
  t_list *novo;

  novo = (t_list *)malloc(sizeof(t_list) * 1);
  ft_memlen(content, &size);
  if (novo == NULL)
    return (NULL);
  
  if (content == NULL)
    novo->content = NULL;
  else
  {
    novo->content = (t_list *)malloc(sizeof(size_t) * size);
    if (novo->content == NULL)
      return (NULL);
    ft_memmove(novo->content, content, size);
  }
  novo->content = NULL;
  return (novo);
}
