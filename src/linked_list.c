/*
** linked_list.c for linked in /home/gambin_l/rendu/PSU_2015_my_select
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Dec  1 19:15:10 2015 Lucas Gambini
** Last update Thu Apr  7 23:32:54 2016 Lucas Gambini
*/

#include "lamin.h"
#include "my.h"

t_list		*add_end(t_list *list, char *arg)
{
  t_list	*new_elem;
  t_list	*tmp;

  new_elem = malloc(sizeof(*new_elem));
  new_elem->str = arg;
  new_elem->first = 0;
  new_elem->prev = NULL;
  new_elem->next = NULL;
  if (list == NULL)
    {
      new_elem->first = 1;
      new_elem->prev = new_elem;
      new_elem->next = new_elem;
    }
  else
    {
      tmp = list;
      while (tmp->first != 1)
	tmp = tmp->next;
      new_elem->prev = tmp->prev;
      new_elem->next = tmp;
      tmp->prev->next = new_elem;
      tmp->prev = new_elem;
    }
  return (new_elem);
}

void		view_endroit(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->first != 1)
    tmp = tmp->next;
  while (tmp->next->first != 1)
    {
      my_putstr(tmp->str);
      tmp = tmp->next;
    }
  my_putstr(tmp->str);
  my_putchar('\n');
}

int		lenght(t_list *list)
{
  int		i;
  t_list	*tmp;

  i = 0;
  tmp = list;
  if (list == NULL)
    return (0);
  while (tmp->first != 1)
    tmp = tmp->next;
  while (tmp->next->first != 1)
    {
      tmp = tmp->next;
      i++;
    }
  return (i + 1);
}
