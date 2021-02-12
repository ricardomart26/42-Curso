#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list *temp;

  temp = malloc(sizeof(t_list));
  if (!temp)
    return (NULL);
  temp = *lst;
  while (temp->next != NULL)
  {
    if (temp->next == NULL)
    {
      temp->next = new->content;
      new->next = NULL;
    }
    temp = temp->next;
  }
}
