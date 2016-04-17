/*
** linked_list.h for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 13:37:36 2016 boris saint-bonnet
** Last update Sun Apr 17 16:57:17 2016 boris saint-bonnet
*/

# ifndef __LINKED_LIST_H__
# define __LINKED_LIST_H__

typedef struct		s_list
{
  struct s_node		*head;
  struct s_node		*tail;
  int			max_ant;
  int			start;
  int			end;
}			t_list;

typedef struct		s_node
{
  int			id;
  int			posx;
  int			posy;
  int			ant;
  int			link_lenght;
}			t_node;

# endif /* ! __LINKED_LIST_H__ */
