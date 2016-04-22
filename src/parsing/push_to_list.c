/*
** push_to_list.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 20:54:25 2016 boris saint-bonnet
** Last update Fri Apr 22 02:58:00 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph	*push_to_list(t_graph *list, char *str)
{
  char		**tmp;
  t_node	node;

  tmp = my_wordtab(epur_str(str), 0, 0);
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, &node);
  free(node.id);
  free_tab(tmp);
  return (list);
}

t_graph	*push_start_to_list(t_graph *list, char *str)
{
  char		**tmp;
  t_node	node;

  tmp = my_wordtab(epur_str(str), 0, 0);
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, &node);
  list->start = find_link(list, node.id); 
  free(node.id);
  free_tab(tmp);
  return (list);
}

t_graph	*push_end_to_list(t_graph *list, char *str)
{
  char		**tmp;
  t_node	node;

  tmp = my_wordtab(epur_str(str), 0, 0);
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, &node);
  list->end = find_link(list, node.id);
  free(node.id);
  free_tab(tmp);
  return (list);
}
