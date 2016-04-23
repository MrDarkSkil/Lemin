/*
** check_list.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sat Apr 23 02:38:10 2016 boris saint-bonnet
** Last update Sat Apr 23 02:48:23 2016 boris saint-bonnet
*/

# include "lemin.h"

int	check_validity(t_graph *list)
{
  if (!list->start || !list->end || list->max_ant < 1)
    return (-1);
  return (0);
}
