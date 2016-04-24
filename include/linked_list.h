/*
** linked_list.h for  in /home/xx/Rendu/CPE/Lemin
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Sun Apr 17 13:37:36 2016 boris saint-bonnet
** Last update Sun Apr 24 17:32:18 2016 boris saint-bonnet
*/

# ifndef __LINKED_LIST_H__
# define __LINKED_LIST_H__

#include <stdbool.h>

typedef struct		s_graph
{
  struct s_node		*head;
  struct s_node		*tail;
  struct s_node		*start;
  struct s_node		*end;
  int			max_ant;
}			t_graph;

typedef struct		s_node
{
  char			*id;
  int			posx;
  int			posy;
  bool			visited;
  int			ant;
  int			id_ant;
  int			link_lenght;
  struct s_node		*prev;
  struct s_node		*next;
  struct s_link		*nxt;
}			t_node;

typedef struct		s_link
{
  struct s_node		*link;
  struct s_link		*next_link;
}			t_link;

typedef struct		s_elem
{
  char			*id;
  struct s_node		*cell;
  struct s_elem		*next;
  struct s_elem		*prev;
}			t_elem;

typedef struct		s_path
{
  struct s_elem		*head;
  struct s_elem		*tail;
}			t_path;

t_graph *init_list();
t_node  *init_link(t_node *node);
t_node  *find_link(t_graph *list, char *name);
t_graph *push(t_graph *list, t_node tmp);
t_graph *add_link(t_graph *list, t_node *node, char *id, int *flag);
t_path  *put_in_path(t_path *list, t_node *node);
t_path  *init_path(void);

# endif /* ! __LINKED_LIST_H__ */
