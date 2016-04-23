/*
0;136;0c** initAlgo.c for initAlgo in /home/hubert_i/rendu/2015/CPE/Lemin/src/algo
**
** Made by Léo Hubert
** Login   <hubert_i@epitech.net>
**
** Started on  Sat Apr 23 03:49:01 2016 Léo Hubert
** Last update Sat Apr 23 21:23:04 2016 Lucas Gambini
*/

# include	"lemin.h"


t_node		*algo(t_graph *list, t_node *sommet)
{
  t_link	*tmp;

  sommet->visited = true;
  printf("%s\n", sommet->id);
  if (sommet == list->end)
    return (sommet);
  tmp = sommet->nxt;
  while (tmp != NULL)
    {
      sommet = tmp->link;
      if (sommet->visited == false)
	return (algo(list, sommet));
      tmp = tmp->next_link;
    }
  return (0);
}

int		initAlgo(t_graph *list)
{
  t_node	*start;
  t_node	*result;

  start = list->start;
  result = algo(list, start);
  printf("result-id: %s\n", result->id);
  return (0);
}
