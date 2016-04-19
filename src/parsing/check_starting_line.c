/*
** check_starting_line.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 17:00:43 2016 boris saint-bonnet
** Last update Tue Apr 19 14:54:37 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph  *tab_to_list(t_graph *list, char **tab)
{
  int   i;

  i = 0;
  while (tab[++i])
    list = check_line(tab[i], list);
  return (list);
}
