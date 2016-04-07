/*
** lemin.h for lamin in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:53 2016 Lucas Gambini
** Last update Fri Apr  8 01:06:07 2016 Lucas Gambini
*/

#ifndef _LAMIN_
# define _LAMIN_

# include "my.h"

typedef struct		s_input
{
  int			posx;
  int			posy;
  int			id;
  int			first;
  struct s_input	*prev;
  struct s_input	*next;
}			t_input;

void	remove_comment(char *buff);

#endif /* _LAMIN_ */
