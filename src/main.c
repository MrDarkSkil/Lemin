/*
** main.c for main in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:43 2016 Lucas Gambini
** Last update Sat Apr 23 22:14:17 2016 Lucas Gambini
*/

#include "lemin.h"

void	print_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i])
    {
      my_putstr(tab[i]);
      write(1, "\n", 1);
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
  initAlgo(list);
  return (0);
}
