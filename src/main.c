/*
** main.c for main in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:43 2016 Lucas Gambini
** Last update Sun Apr 24 17:51:35 2016 boris saint-bonnet
*/

#include "lemin.h"

void	print_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i] && tab[i + 1])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
    }
}

int		main(void)
{
  t_graph	*list;

  list = init_list();
  list = check_line(list);
  if (check_validity(list) == -1)
    return (0);
  initAlgo(list);
  return (0);
}
