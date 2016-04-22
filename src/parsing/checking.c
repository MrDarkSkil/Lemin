/*
** checking.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 23:10:01 2016 boris saint-bonnet
** Last update Fri Apr 22 15:53:44 2016 boris saint-bonnet
*/

# include "lemin.h"

int	check_link(char *str)
{
  int	i;

  i = 0;
  while (str[i] && str[i] != '-')
    i++;
  return (str[i] ? 1 : 0);
}

int	check_comment(char *str)
{
  int	i;

  i = 0;
  while(str[i] && str[i] != '#')
    i++;
  return (str[i] ? 1 : 0);
}

t_graph  *check_line(char **tab, t_graph *list)
{
  int   i;

  i = 1;
  while (tab[i])
    {
      if (check_comment(tab[i]) == 0 && check_link(tab[i]) == 0)
	list = push_to_list(list, tab[i]);
      else if (check_comment(tab[i]) == 1 && check_link(tab[i]) == 0)
        {
	  if (check_start_end(tab[i]) == 1)
	    list = push_start_link(list, tab[i++]);
	  else if (check_start_end(tab[i]) == 2)
	    list = push_end_link(list, tab[i++]);
	}
      else if (check_comment(tab[i]) == 0 && check_link(tab[i]) == 1)
        list = push_link(list, tab[i]);
      else
	list = push_link_with_comment(list, tab[i]);
      i++;
    }
}
