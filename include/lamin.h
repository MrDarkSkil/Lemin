/*
** lemin.h for lamin in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:53 2016 Lucas Gambini
** Last update Tue Apr  5 12:19:58 2016 Lucas Gambini
*/

#ifndef _LAMIN_
# define _LAMIN_

# include "my.h"

typedef struct s_node
{
  int		id; /* C'est le premier chiffre d'une ligne */
  int		posx; /* Le 2e */
  int		posy; /* Le 3e */
  int		ant; /* si ya une fourmi ou pas */
  struct s_node	*prev; /* Starfoullah */
  t_next	*next; /* list chainée de next */
}		t_node;

typedef struct	s_next
{
  struct s_next	*nxt;
  t_node	*next;
}		t_next;

#endif /* _LAMIN_ */
