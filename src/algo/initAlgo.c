/*
** initAlgo.c for initAlgo in /home/hubert_i/rendu/2015/CPE/Lemin/src/algo
**
** Made by Léo Hubert
** Login   <hubert_i@epitech.net>
**
** Started on  Sat Apr 23 03:49:01 2016 Léo Hubert
** Last update Sat Apr 23 06:19:46 2016 Léo Hubert
*/

# include	"lemin.h"


int		algo(t_graph *list, t_node *sommet)
{
  t_node	*fils;

  fils = sommet->nxt->link;
  sommet->nxt->father = sommet;
  sommet->visited = true;
  printf("%s\n", sommet->id);
  while (fils != NULL)
    {
      fils = sommet->nxt->next_link->link;
      if (fils->visited == false)
	algo(list, fils);
    }
  return (0);
}

int		initAlgo(t_graph *list)
{
  t_node	*start;

  start = list->start;
  algo(list, start);
  return (0);
}
