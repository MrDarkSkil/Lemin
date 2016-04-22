/*
** my_check_line.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Fri Apr 22 17:11:28 2016 boris saint-bonnet
** Last update Fri Apr 22 17:17:35 2016 boris saint-bonnet
*/

# include "lemin.h"

int     check_link(char *str)
{
  int   i;

  i = 0;
  while (str[i] && str[i] != '-')
    i++;
  return (str[i] ? 1 : 0);
}

int     check_comment(char *str)
{
  int   i;

  i = 0;
  while(str[i] && str[i] != '#')
    i++;
  return (str[i] ? 1 : 0);
}

t_graph	*my_check_line(t_graph *list, char **tab)
{
  int	i;

  i = 1;
  while (tab[i])
    {
      if (check_comment(tab[i]) == 0 && check_link(tab[i]) == 0)
	{
	  list = push_to_list(list, tab[i]);
	  return (list);
	}
      else if (check_comment(tab[i] == 1 && check_link(tab[i] == 0)
			     
    }
}
