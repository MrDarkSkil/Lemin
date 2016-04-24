/*
** ans.c for ans in /home/hubert_i/rendu/2015/Lemin
**
** Made by Léo Hubert
** Login   <hubert_i@epitech.net>
**
** Started on  Sun Apr 24 06:51:23 2016 Léo Hubert
** Last update Sun Apr 24 06:54:04 2016 Léo Hubert
*/

# include	"lemin.h"

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

void		ants_go_ants_2(t_elem *tmp, int total)
{
  int		state;
  int		ii;

  state = 0;
  ii = 1;
  while (ii++ < total)
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
    }
}

void		ants_go_ants(t_graph *list, t_path *path)
{
  t_elem	*tmp;
  int		i;
  int		total;

  i = 1;
  path->head->cell->ant = list->max_ant;
  total = count_path(path->head);
  while (path->tail->cell->ant < list->max_ant)
    {
      tmp = path->head;
      tmp->cell->id_ant = i;
      tmp = path->tail;
      ants_go_ants_2(tmp, total);
      my_putstr("\n");
      i++;
    }
}
