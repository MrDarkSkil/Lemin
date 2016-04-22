/*
** my_read_inf.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 16:37:05 2016 boris saint-bonnet
** Last update Fri Apr 22 14:41:57 2016 boris saint-bonnet
*/

# include "lemin.h"

char             **file_to_tab(int fd)
{
  char          c;
  char          *file1d;
  int           i;
  char          **file;

  if ((file1d = malloc(sizeof(char) * 2)) == NULL)
    return (NULL);
  i = 0;
  while (read(fd, &c, 1) > 0)
    {
      file1d[i] = c;
      file1d[i + 1] = 0;
      file1d = my_realloc(file1d, sizeof(char) * (my_strlen(file1d) + 2));
      i++;
    }
  if ((file = my_linetab(file1d, 0, 0)) == NULL)
    return (NULL);
  free(file1d);
  return (file);
}
