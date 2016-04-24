/*
** push_to_list.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 20:54:25 2016 boris saint-bonnet
** Last update Sun Apr 24 18:11:03 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph	*push_to_list(t_graph *list, char *str)
{
  char		**tmp;
  t_node	node;

  if (!str || str[0] == '\n' || str[0] == '\0' ||
      str[0] == ' ' || str[0] == '\t')
    return (list);
  tmp = create_tab_and_epur(str, ' ');
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, node);
  free(node.id);
  free_tab(tmp);
  return (list);
}

t_graph	*push_start_to_list(t_graph *list, char *str, int *flag)
{
  char		**tmp;
  t_node	node;

  if (list->start != NULL)
    {
      (*flag) = -1;
      return (list);
    }
  tmp = create_tab_and_epur(str, ' ');
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, node);
  list->start = find_link(list, node.id);
  (*flag) = 0;
  free(node.id);
  free_tab(tmp);
  return (list);
}

t_graph	*push_end_to_list(t_graph *list, char *str, int *flag)
{
  char		**tmp;
  t_node	node;

  if (list->end != NULL)
    {
      (*flag) = -1;
      return (list);
    }
  tmp = create_tab_and_epur(str, ' ');
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, node);
  list->end = find_link(list, node.id);
  (*flag) = 0;
  free(node.id);
  free_tab(tmp);
  return (list);
}
