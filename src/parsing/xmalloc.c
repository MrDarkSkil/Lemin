/*
** xmalloc.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 17:11:32 2016 boris saint-bonnet
** Last update Sun Apr 17 17:13:01 2016 boris saint-bonnet
*/

# include "lemin.h"

void	*xmalloc(size_t size)
{
  void	*ptr;

  if ((ptr = (void *)malloc(size)) == NULL)
    {
      write(2, "Malloc failed\n", my_strlen("Malloc failed\n"));
      return (0);
    }
  return (ptr);
}
