/*
** my_realloc.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 16:33:40 2016 boris saint-bonnet
** Last update Sun Apr 17 16:34:02 2016 boris saint-bonnet
*/

# include "lemin.h"

char            *my_realloc(char *in, int size)
{
  int           i;
  char          *out;

  i = -1;
  if ((out = malloc(sizeof(char) * my_strlen(in) + size)) == NULL)
    return (NULL);
  while (in[++i])
    out[i] = in[i];
  out[i] = '\0';
  free(in);
  return (out);
}
