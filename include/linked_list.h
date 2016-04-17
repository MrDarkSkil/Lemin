/*
** linked_list.h for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 13:37:36 2016 boris saint-bonnet
** Last update Sun Apr 17 22:01:48 2016 boris saint-bonnet
*/

# ifndef __LINKED_LIST_H__
# define __LINKED_LIST_H__

typedef struct		s_list		/* Liste chainée de base, celle qui sera utilisée */
{
  struct s_node		*head;		/* Head = premier maillon de la list */
  struct s_node		*tail;		/* Tail = dernier maillon de la list */
  struct s_node		*start;		/* Lien direct vers la salle de depart */
  struct s_node		*end;		/* Lien direct vers la salle d'arrivée */
  int			max_ant;	/* le nombre de fourmis totale */
}			t_list;

typedef struct		s_node
{
  char			*id;		/* Le nom de la salle */
  int			posx;		/* position en x */
  int			posy;		/* position en y */
  int			ant;		/* boleen permettant de savoir si il y a une fourmi ou pas dans la salle */
  int			link_lenght;	/* le nombre de salle à laquelle celle-ci est reliée */
  struct s_node		*prev;		/* liste doublement chainée */
  struct s_node		*next;		
  struct s_link		*nxt;		/* liste de next ( lien de la salle) */
}			t_node;

typedef struct		s_link
{
  struct s_node		*link;		/* pointeur vers l'emplacement memoire de la salle */ 
  struct s_node		*next_link;	/* pointeur vers le prochain lien */
}			t_link;

# endif /* ! __LINKED_LIST_H__ */
