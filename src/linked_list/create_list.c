/*
** create_list.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 13:44:41 2016 boris saint-bonnet
** Last update Tue Apr 19 15:11:09 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph	*init_list(int	ants)
{
  t_graph	*list;

  list = NULL;
  list = malloc(sizeof(*list));
  if (list != NULL)
    {
      list->head = NULL;
      list->tail = NULL;
      list->max_ant = ants;
      list->start = NULL;
      list->end = NULL;
    }
  return (list);
}

t_node	*init_link(t_node *node)
{
  t_link	*tmp;

  tmp = xmalloc(sizeof(*tmp));
  tmp->link = NULL;
  tmp->next_link = NULL;
  return (node);
}
