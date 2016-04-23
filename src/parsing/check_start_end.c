/*
** check_start_end.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Mon Apr 18 17:38:22 2016 boris saint-bonnet
** Last update Sat Apr 23 01:45:30 2016 boris saint-bonnet
*/

#include "lemin.h"

t_graph	*push_start_link(t_graph *list, char *str)
{
  return (list = push_start_to_list(list, str));
}

t_graph	*push_end_link(t_graph *list, char *str)
{
  return (list = push_end_to_list(list, str));
}

t_graph 	*check_start_end(t_graph *list, char *str, char *str1, int *flag)
{
  char		**tab;

  if (!str[0] || !str1[0])
    return (list);
  tab = create_tab_and_epur(str, ' ');
  if (my_strcmp("##start", tab[0]) == 0)
    {
      list = push_start_to_list(list, str1);
      (*flag) = 1;
    }
  else if (my_strcmp("##end", tab[0]) == 0)
    {
      list = push_end_to_list(list, str1);
      (*flag) = 1;
    }
  else
    {
      if (str[0] == '#')
	return (list);
      list = push_to_list(list, str);
    }
  return (list);
}
