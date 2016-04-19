/*
** find_link.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 21:49:06 2016 boris saint-bonnet
** Last update Tue Apr 19 14:51:27 2016 boris saint-bonnet
*/

# include "lemin.h"

t_node    *find_link(t_graph *list, char *name)
{
  t_node        *tmp;

  tmp = list->head;
  while (tmp != NULL)
    {
      if ((strncmp(tmp->id, name, my_strlen(name)) == 0))
	return (tmp);
      tmp = tmp->next;
    }
  return (NULL);
}
