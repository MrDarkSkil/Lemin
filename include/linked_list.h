/*
** linked_list.h for  in /home/xx/Rendu/CPE/Lemin
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Sun Apr 17 13:37:36 2016 boris saint-bonnet
** Last update Sat Apr 23 02:01:28 2016 boris saint-bonnet
*/

# ifndef __LINKED_LIST_H__
# define __LINKED_LIST_H__

#include <stdbool.h>

typedef struct		s_graph		/* Liste chainée de base, celle qui sera utilisée */
{
  struct s_node		*head;		/* Head = premier maillon de la list */
  struct s_node		*tail;		/* Tail = dernier maillon de la list */
  struct s_node		*start;		/* Lien direct vers la salle de depart */
  struct s_node		*end;		/* Lien direct vers la salle d'arrivée */
  int			max_ant;	/* le nombre de fourmis totale */
}			t_graph;

typedef struct		s_node
{
  char			*id;		/* Le nom de la salle */
  int			posx;		/* position en x */
  bool			visited;
  int			dist;
  int			posy;		/* position en y */
  int			ant;		/* boleen permettant de savoir si il y a une fourmi ou pas dans la salle */
  int			link_lenght;	/* le nombre de salle à laquelle celle-ci est reliée */
  struct s_node		*prev;		/* liste doublement chainée */
  struct s_node		*next;
  struct s_link		*nxt;		/* liste de next ( lien de la salle) */
}			t_node;

typedef struct		s_link
{
  struct s_node		*father;
  struct s_node		*link;		/* pointeur vers l'emplacement memoire de la salle */
  struct s_link		*next_link;	/* pointeur vers le prochain lien */
}			t_link;

typedef struct		s_elem
{
  char			*id;
  struct s_node		*cell;
  struct s_elem		*next;
  struct s_elem		*prev;
}			t_elem;

typedef struct		s_queue
{
  struct s_elem		*head;
  struct s_elem		*tail;
}			t_queue;

t_graph *init_list(int  ants);
t_node  *init_link(t_node *node);
t_node  *find_link(t_graph *list, char *name);
t_graph *push(t_graph *list, t_node tmp);
t_graph *add_link(t_graph *list, t_node *node, char *id);

# endif /* ! __LINKED_LIST_H__ */
