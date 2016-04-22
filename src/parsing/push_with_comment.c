/*
** push_with_comment.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Mon Apr 18 17:13:45 2016 boris saint-bonnet
** Last update Fri Apr 22 02:59:57 2016 boris saint-bonnet
*/

# include "lemin.h"

t_graph	*push_with_comment(t_graph *list, char *str)
{
  char	**tab;
  
  tab = my_str_to_wordtab(str, ' ');
  if (check_comment(tab[0]) == 0 && check_comment(tab[1]) == 0
      && check_comment(tab[2]) == 0)
    {
      if (my_str_isnum(tab[0]) == 1 && my_str_isnum(tab[1]) == 1
	  && my_str_isnum(tab[2]) == 1)
	push_to_list(list, str);
    }
  else if (check_comment(tab[0]) == 1)
    check_start_end(str);      
}
