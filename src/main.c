/*
** main.c for main in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:43 2016 Lucas Gambini
** Last update Tue Apr 19 15:03:47 2016 boris saint-bonnet
*/

#include "lemin.h"

int		main(int ac, char *av[])
{
  t_graph	*list;
  char		**tab;

  tab = file_to_tab(0);
  list = init_list(my_getnbr(tab[0]));
  list = tab_to_list(list, tab);
}
