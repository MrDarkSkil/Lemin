/*
0;136;0c** initAlgo.c for initAlgo in /home/hubert_i/rendu/2015/CPE/Lemin/src/algo
**
** Made by Léo Hubert
** Login   <hubert_i@epitech.net>
**
** Started on  Sat Apr 23 03:49:01 2016 Léo Hubert
** Last update Sat Apr 23 22:40:10 2016 Lucas Gambini
*/

# include	"lemin.h"

t_path		*algo(t_graph *list, t_node *summit, t_path *path)
{
  t_link	*tmp;

  summit->visited = true;
  path = put_in_path(path, summit);
  if (summit == list->end)
    return (path);
  tmp = summit->nxt;
  while (tmp != NULL)
    {
      summit = tmp->link;
      if (summit->visited == false)
	return (algo(list, summit, path));
      tmp = tmp->next_link;
    }
  return (path);
}

int		initAlgo(t_graph *list)
{
  t_node	*start;
  t_path	*path;

  start = list->start;
  path = init_path();
  path = algo(list, start, path);
  if (my_strcmp(path->tail->id, list->end->id))
    {
      write(2, "Path not found.\n", 16);
      return (-1);
    }
  return (0);
}
