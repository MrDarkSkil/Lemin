/*
** checking.c for  in /home/xx/Rendu/CPE/Lemin/src
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Sun Apr 17 23:10:01 2016 boris saint-bonnet
** Last update Sun Apr 24 16:04:56 2016 boris saint-bonnet
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

t_graph	*check_line_son(t_graph *list, char *s, int *flag)
{
  if (check_comment(s) == 0 && check_link(s) == 0)
    {
      if (*flag == 1)
	{
	  list = push_start_to_list(list, s);
	  *flag = 0;
	}
      else if (*flag == 2)
	{
	  list = push_end_to_list(list, s);
	  *flag = 0;
	}
      else
	list = push_to_list(list, s);
    }
  else if (check_comment(s) == 1 && check_link(s) == 0)
    list = check_start_end(list, s, flag);
  else if (check_comment(s) == 0 && check_link(s) == 1)
    list = push_link(list, s);
  else if (check_comment(s) == 1 && check_link(s) == 1)
    list = push_link_with_comment(list, s);
  my_putstr(s);
  write(1, "\n", 1);
  free(s);
  return (list);
}

t_graph	*check_line(t_graph *list)
{
  int	flag;
  char	*s;

  flag = 0;
  s = get_next_line(0);
  my_putstr(s);
  write(1, "\n", 1);
  list->max_ant = my_getnbr(s);
  free(s);
  while ((s = get_next_line(0)) && flag >= 0)
    {
      if (check_error(s) == 1)
	list = check_line_son(list, s, &flag);
      else
	return (list);
    }
  return (list);
}
