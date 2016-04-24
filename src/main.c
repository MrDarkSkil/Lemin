/*
** main.c for main in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:43 2016 Lucas Gambini
** Last update Sun Apr 24 09:00:42 2016 boris saint-bonnet
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
  char		**tab;

  tab = file_to_tab(0);
  list = init_list(my_getnbr(tab[0]));
  list = check_line(tab, list);
  if (check_validity(list) == -1)
    return (write(1, "invalid graph\n", my_strlen("invalid graph\n")));
  print_tab(tab);
  initAlgo(list);
  free_tab(tab);
  return (0);
}
