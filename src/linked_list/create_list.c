/*
** create_list.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 13:44:41 2016 boris saint-bonnet
** Last update Sat Apr 23 01:54:09 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph	*init_list(int	ants)
{
  t_graph	*list;

  list = NULL;
  list = xmalloc(sizeof(*list));
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

t_queue		*init_queue(void)
{
  t_queue		*list;

  list = NULL;
  list = xmalloc(sizeof(*list));
  if (list != NULL)
    {
      list->head = NULL;
      list->tail = NULL;
    }
  return (list);
}
