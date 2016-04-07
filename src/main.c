/*
** main.c for main in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:43 2016 Lucas Gambini
** Last update Fri Apr  8 01:25:44 2016 Lucas Gambini
*/

#include "lamin.h"

int		main()
{
  char		*buff;
  t_input	*list;

  list = NULL;
  while ((buff = get_next_line(0)))
    {
      remove_comment(buff);
      printf("%s\n", buff);
      free(buff);
    }
  return (0);
}
