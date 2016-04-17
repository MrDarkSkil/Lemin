/*
** create_list.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 13:44:41 2016 boris saint-bonnet
** Last update Sun Apr 17 16:57:47 2016 boris saint-bonnet
*/

# include "lemin.h"

t_list	*init_list(int	ants)
{
  t_list	*list;

  list = NULL;
  list = malloc(sizeof(*list));
  if (list != NULL)
    {
      list->head = NULL;
      list->tail = NULL;
      list->max_ant = ant;
      list->start = 0;
      list->end = 0;
    }
  return (list);
}
