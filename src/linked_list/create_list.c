/*
** create_list.c for  in /home/xx/Rendu/CPE/Lemin
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Sun Apr 17 13:44:41 2016 boris saint-bonnet
** Last update Sun Apr 24 14:50:03 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph		*init_list()
{
  t_graph	*list;

  list = NULL;
  list = xmalloc(sizeof(*list));
  if (list != NULL)
    {
      list->head = NULL;
      list->tail = NULL;
      list->max_ant = 0;
      list->start = NULL;
      list->end = NULL;
    }
  return (list);
}

t_path		*init_path(void)
{
  t_path	*list;

  list = NULL;
  list = xmalloc(sizeof(*list));
  if (list != NULL)
    {
      list->head = NULL;
      list->tail = NULL;
    }
  return (list);
}
