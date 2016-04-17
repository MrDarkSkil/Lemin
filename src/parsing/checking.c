/*
** checking.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 23:10:01 2016 boris saint-bonnet
** Last update Sun Apr 17 23:27:36 2016 boris saint-bonnet
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

t_list  *check_line(char *str, t_list *list)
{
  if (check_comment(str) = 0 && check_link(str) == 0)
    list = push_to_list(list, str);
}
