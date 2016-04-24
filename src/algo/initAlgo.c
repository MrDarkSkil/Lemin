/*
** initAlgo.c for initAlgo in /home/hubert_i/rendu/2015/CPE/Lemin/src/algo
**
** Made by Léo Hubert
** Login   <hubert_i@epitech.net>
**
** Started on  Sat Apr 23 03:49:01 2016 Léo Hubert
** Last update Sun Apr 24 06:36:48 2016 Léo Hubert
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

int		count_path(t_elem *tmp)
{
  int		i;

  i = 0;
  while (tmp != NULL)
    {
      tmp = tmp->next;
      i++;
    }
  return (i);
}

void		print_deplace(int id_ant, char *id_cell)
{
  my_putchar('P');
  my_put_nbr(id_ant);
  my_putchar('-');
  my_putstr(id_cell);
}

void		ants_go_ants(t_graph *list, t_path *path)
{
  t_elem	*tmp;
  int		i;
  int		ii;
  int		state;
  int		total;

  i = 1;
  path->head->cell->ant = list->max_ant;
  tmp = path->head;
  total = count_path(tmp);
  while (path->tail->cell->ant < list->max_ant)
    {
      state = 0;
      ii = 1;
      tmp = path->head;
      tmp->cell->id_ant = i;
      tmp = path->tail;
      while (ii < total)
	{
	  if (tmp->prev->cell->ant > 0)
	    {
	      if (state == 1)
		my_putchar(' ');
	      tmp->cell->ant += 1;
	      tmp->prev->cell->ant -= 1;
	      tmp->cell->id_ant = tmp->prev->cell->id_ant;
	      print_deplace(tmp->cell->id_ant, tmp->cell->id);
	      state = 1;
	    }
	  tmp = tmp->prev;
	  ii++;
	}
      my_putstr("\n");
      i++;
    }
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
  ants_go_ants(list, path);
  return (0);
}
