/*
** check_start_end.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Mon Apr 18 17:38:22 2016 boris saint-bonnet
** Last update Sun Apr 24 18:07:43 2016 boris saint-bonnet
*/

#include "lemin.h"

t_graph 	*check_start_end(t_graph *list, char *str, int *flag)
{
  char		**tab;
  if (!str[0])
    {
      (*flag) = -1;
      return (list);
    }
  tab = create_tab_and_epur(str, ' ');
  if (my_strcmp("##start", tab[0]) == 0)
    (*flag) = 1;
  else if (my_strcmp("##end", tab[0]) == 0)
    (*flag) = 2;
  else
    {
      if (str[0] == '#')
	return (list);
      list = push_to_list(list, str);
    }
  return (list);
}
