#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
  t_list *node;
  
  node = (t_list *)malloc(sizeof(t_list));
  if (node == NULL)
    return (NULL);
  // Passar os dados que nos são para o content
  node->content = new;
  // Associar o next ao inicio
  node->next = *lst;
  // Mover a cabeça para o novo node para ficar o primeiro elemento da lista
  *lst = node;
}