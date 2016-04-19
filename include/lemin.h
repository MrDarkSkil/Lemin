/*
** lemin.h for lamin in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Tue Apr  5 10:42:53 2016 Lucas Gambini
** Last update Tue Apr 19 15:36:32 2016 Lucas Gambini
*/

#ifndef _LEMIN_H__
# define _LEMIN_H__

# include "my.h"
# include "linked_list.h"

int     check_link(char *str);
int     check_comment(char *str);
t_graph *check_line(char **tab, t_graph *list);
t_graph *push_start_link(t_graph *list, char *str);
t_graph *push_end_link(t_graph *list, char *str);
int     check_start_end(char *str);
t_graph *tab_to_list(t_graph *list, char **tab);
char    *epur_str(char *line);
char    **create_tab_and_epur(char *line, char c);
char    **file_to_tab(int fd);
char    *my_realloc(char *in, int size);
int     line_counter(char *str);
char    **my_wordtab(char *str, int i, int j);
int     char_is_num(char c);
char    *find_name(char *str);
t_graph *push_link(t_graph *list, char *str);
t_graph *push_link_with_comment(t_graph *list, char *str);
t_graph *push_to_list(t_graph *list, char *str);
t_graph *push_start_to_list(t_graph *list, char *str);
t_graph *push_end_to_list(t_graph *list, char *str);
void    *xmalloc(size_t size);


#endif /* _LEMIN_ */
