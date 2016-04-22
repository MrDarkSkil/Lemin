/*
** my_getnbr.c for my_getnbr in /home/hubert_1/rendu/Piscine_C_J07/alllib
**
** Made by leo hubert
** Login   <hubert_1@epitech.net>
**
** Started on  Tue Oct  6 19:28:57 2015 leo hubert
** Last update Sat Apr 23 00:33:35 2016 boris saint-bonnet
*/

#include "../../include/my.h"

int	my_getnbr(char *str)
{
  int   i;
  int	solution;
  int	nbr;

  solution = 1;
  i = 0;
  nbr = 0;
  if (str == NULL)
    return (write(2, "Error: wrong parameters",
		  my_strlen("Error: wrong parameters")));
  while (str[i] && (str[i] == '+' || str[i] == '-'))
    if (str[i++] == '-')
      solution *= -1;
  while (str[i] >= '0' && str[i] <= '9')
    nbr = nbr * 10 + (str[i++] - '0');
  return (nbr * solution);
}
