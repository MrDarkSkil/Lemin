/*
** push_to_list.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 20:54:25 2016 boris saint-bonnet
** Last update Sun Apr 17 22:41:07 2016 boris saint-bonnet
*/

# include "lemin.h"

t_list	*push_to_list(t_list *list, char *str)
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
