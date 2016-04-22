/*
** main.c for main in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:43 2016 Lucas Gambini
** Last update Sat Apr 23 00:44:32 2016 boris saint-bonnet
*/

#include "lemin.h"

void	print_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i])
    printf("%s\n", tab[i]);
}

void	printf_link(t_graph *list)
{
  t_node	*tmp;
  t_link	*tmp2;

  tmp = list->head;
  printf("start id: %s\n", list->start->id);
  printf("end id: %s\n", list->end->id);
  while (tmp != NULL)
    {
      tmp2 = tmp->nxt;
      printf("id: %s\n posx: %d\n posy: %d\n",
		tmp->id, tmp->posx, tmp->posy);
      while (tmp2 != NULL)
	{
	  printf("link: %s\n", tmp2->link->id);
	  tmp2 = tmp2->next_link;
	}
      tmp = tmp->next;
    }
}

int		main(int ac, char *av[])
{
  t_graph	*list;
  char		**tab;

  tab = file_to_tab(0);
  list = init_list(my_getnbr(tab[0]));
  list = check_line(tab, list);
  printf_link(list);
}
