/*
** my_check_line.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Fri Apr 22 17:11:28 2016 boris saint-bonnet
** Last update Sat Apr 23 00:58:06 2016 boris saint-bonnet
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
  while (str[i] && str[i] != '#')
    i++;
  return (str[i] ? 1 : 0);
}
