/*
** push_link.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 20:59:53 2016 boris saint-bonnet
** Last update Sun Apr 17 22:35:59 2016 boris saint-bonnet
*/

# include "lemin.h"

t_list	*push_link(t_list *list, char *str)
{
  char		**tmp;
  t_node	*node;
  
  tmp = my_str_to_wordtab(str, '-');
  node = find_link(list, tmp[0]);
  list = add_link(list, node, tmp[1]);
  free_tab(tmp);
  return (list);
}
