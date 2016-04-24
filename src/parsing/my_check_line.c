/*
** my_check_line.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Fri Apr 22 17:11:28 2016 boris saint-bonnet
** Last update Sun Apr 24 09:02:55 2016 boris saint-bonnet
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

int	check_error(char *str)
{
  if (str && str[0] != '\n' && str[0] != '\0')
    return (1);
  return (0);
}

int     check_comment(char *str)
{
  int   i;

  i = 0;
  while (str[i] && str[i] != '#')
    i++;
  return (str[i] ? 1 : 0);
}
