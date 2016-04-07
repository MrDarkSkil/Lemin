/*
** main.c for main in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:43 2016 Lucas Gambini
** Last update Fri Apr  8 00:02:02 2016 Lucas Gambini
*/

#include "lamin.h"

int		main()
{
  char		*buff;

  while ((buff = get_next_line(0)))
    {
      printf("%s\n", buff);
      free(buff);
    }
  return (0);
}
