/*
0;136;0c** initAlgo.c for initAlgo in /home/hubert_i/rendu/2015/CPE/Lemin/src/algo
**
** Made by Léo Hubert
** Login   <hubert_i@epitech.net>
**
** Started on  Sat Apr 23 03:49:01 2016 Léo Hubert
** Last update Sat Apr 23 21:56:29 2016 Lucas Gambini
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
  return (0);
}

int		initAlgo(t_graph *list)
{
  t_node	*start;
  t_path	*path;

  start = list->start;
  path = init_path();
  path = algo(list, start, path);
  return (0);
}
