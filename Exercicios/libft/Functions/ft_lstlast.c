#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
  t_list *temp;
  temp = (t_list *)malloc(sizeof(t_list));
  if (temp == NULL)
    return (NULL);
  temp = lst;
  while (temp != NULL)
    temp = temp->next;
  return (temp);
}

t_list *insertHead(t_list **head, t_list *insert)
{
  insert->next = *head;
  *head = insert;
  return (insert);
}

t_list *insertValue(int value)
{
  t_list *temp;

  temp = (t_list *)malloc(sizeof(t_list));
  temp->content = value;
  temp->next = NULL;
  return (temp);
}

int main(void)
{
  t_list *test;
  t_list *head;
  t_list *temp;
  int c;

  head = test;
  c = 0;
  while (c <= 25)
  {
    if (c = 0)
      temp = test;
    test = insertValue(c);
    printf("test = %d\n", test->content);
    head = insertHead(&head, test);
    c++;
  }
  test->next = NULL;
  while (test != temp)
  {
    printf("test = %d\n", test->content);
    test = test->next;
  }
}