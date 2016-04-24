/*
** first_line.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 24 10:21:44 2016 boris saint-bonnet
** Last update Sun Apr 24 16:45:33 2016 boris saint-bonnet
*/

# include "lemin.h"

int	is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (0);
  return (-1);
}

int	my_str_is_num(char *str)
{
  int	i;

  i = -1;
  while (str[++i])
    if (is_num(str[i]) == -1)
      return (-1);
  return (0);
}
