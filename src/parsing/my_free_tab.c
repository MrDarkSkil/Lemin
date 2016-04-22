/*
** my_free_tab.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Fri Apr 22 03:02:31 2016 boris saint-bonnet
** Last update Fri Apr 22 03:04:47 2016 boris saint-bonnet
*/

# include "lemin.h"

void    free_tab(char **tab)
{
  int   i;

  i = -1;
  while (tab[++i])
    free(tab[i]);
  free(tab);
}
