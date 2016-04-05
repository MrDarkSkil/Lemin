/*
** my_str_isalpha.c for my_str_isalpha in /home/hubert_1/rendu/Piscine_C_J07/lib/my/alllib
**
** Made by leo hubert
** Login   <hubert_1@epitech.net>
**
** Started on  Tue Oct  6 19:53:34 2015 leo hubert
** Last update Wed Nov 04 10:58:21 2015 leo hubert
*/

#include "../../include/my.h"

int             is_alph_char(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  return (0);
}

int	my_str_isalpha(char *str)
{
  if (*str == 0)
    return (1);
  while (*str != 0)
    {
      if (!is_alph_char(*str))
        return (0);
      str++;
    }
  return (1);
}
