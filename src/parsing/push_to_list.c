/*
** push_to_list.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 20:54:25 2016 boris saint-bonnet
** Last update Tue Apr 19 15:01:44 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph	*push_to_list(t_graph *list, char *str)
{
  char		**tmp;
  t_node	node;

  tmp = my_wordtab(epur_str(str));
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

  tmp = my_wordtab(epur_str(str));
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, &node);
  list->start = find_link(node.id); 
  free(node.id);
  free_tab(tmp);
  return (list);
}

t_graph	*push_end_to_list(t_graph *list, char *str)
{
  char		**tmp;
  t_node	node;

  tmp = my_wordtab(epur_str(str));
  node.id = my_strdup(tmp[0]);
  node.posx = my_getnbr(tmp[1]);
  node.posy = my_getnbr(tmp[2]);
  list = push(list, &node);
  list->end = find_link(node.id);
  free(node.id);
  free_tab(tmp);
  return (list);
}