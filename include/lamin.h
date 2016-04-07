/*
** lemin.h for lamin in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:53 2016 Lucas Gambini
** Last update Thu Apr  7 23:38:03 2016 Lucas Gambini
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

#endif /* _LAMIN_ */
