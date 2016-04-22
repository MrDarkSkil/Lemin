/*
** my_strlowcase.c for my_strlowcase in /home/hubert_1/rendu/Piscine_C_J07/lib/my/alllib
**
** Made by leo hubert
** Login   <hubert_1@epitech.net>
**
** Started on  Tue Oct  6 19:50:46 2015 leo hubert
** Last update Sat Apr 23 00:31:55 2016 boris saint-bonnet
*/

#include <stdlib.h>
#include "../../include/my.h"

char	*my_strlowcase(char *str)
{
  int	counter;

  counter = 0;
  while (str[counter] != 0)
    {
      if (str[counter] >= 'A' && str[counter] <= 'Z')
	str[counter] = str[counter] + 32;
      counter = counter + 1;
    }
  return (NULL);
}
