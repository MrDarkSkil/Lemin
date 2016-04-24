/*
** push_link.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 20:59:53 2016 boris saint-bonnet
** Last update Sun Apr 24 17:53:08 2016 boris saint-bonnet
*/

# include "lemin.h"

int	char_is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}

char	*find_name(char *str)
{
  char	*res;
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] && char_is_num(str[i]) == 1)
    {
      i++;
      nb++;
    }
  res = xmalloc(sizeof(char) * nb + 1);
  i = 0;
  while (str[i] && char_is_num(str[i]) == 1)
    {
    res[i] = str[i];
    i++;
    }
  res[i] = '\0';
  return (res);
}

t_graph	*push_link(t_graph *list, char *str, int *flag)
{
  char		**tmp;
  t_node	*node;

  tmp = create_tab_and_epur(str, '-');
  if ((node = find_link(list, tmp[0])) == NULL || !list->start || !list->end)
    {
      *flag = -1;
      return (list);
    }
  list = add_link(list, node, tmp[1], flag);
  node = find_link(list, tmp[1]);
  list = add_link(list, node, tmp[0], flag);
  free_tab(tmp);
  return (list);
}

t_graph	*push_link_with_comment(t_graph *list, char *str, int *flag)
{
  char		**tab;
  t_node	*node;
  char		*tmp;

  tab = create_tab_and_epur(str, '-');
  if ((node = find_link(list, tab[0])) == NULL || !list->start || !list->end)
    {
      *flag = -1;
      return (list);
    }
  tmp = find_name(tab[1]);
  list = add_link(list, node, tmp, flag);
  node = find_link(list, tab[1]);
  tmp = find_name(tab[0]);
  list = add_link(list, node, tmp, flag);
  return (list);
}
