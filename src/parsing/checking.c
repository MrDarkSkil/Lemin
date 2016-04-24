/*
** checking.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 23:10:01 2016 boris saint-bonnet
** Last update Sun Apr 24 09:21:29 2016 boris saint-bonnet
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

int     check_error(char *str)
{
  if (str[0] != '\n' && str[0] != '\0')
    return (1);
  return (0);
}

int	check_comment(char *str)
{
  int	i;

  i = 0;
  while (str[i] && str[i] != '#')
    i++;
  return (str[i] ? 1 : 0);
}

t_graph  *check_line(char **tab, t_graph *list)
{
  int	i;
  int	flag;

  i = 1;
  flag = 0;
  while (tab[i][0] != '\0')
    {
      if (check_error(tab[i]) == 1)
	{
	  if (check_comment(tab[i]) == 0 && check_link(tab[i]) == 0)
	    list = push_to_list(list, tab[i]);
	  else if (check_comment(tab[i]) == 1 && check_link(tab[i]) == 0)
	    {
	      list = check_start_end(list, tab[i], tab[i + 1], &flag);
	      if (flag == 1)
		{
		  i += 1;
		  flag = 0;
		}
	    }
	  else if (check_comment(tab[i]) == 0 && check_link(tab[i]) == 1)
	    list = push_link(list, tab[i]);
	  else if (check_comment(tab[i]) == 1 && check_link(tab[i]) == 1)
	    list = push_link_with_comment(list, tab[i]);
	  i++;
	}
      else
	return (list);
    }
  return (list);
}
