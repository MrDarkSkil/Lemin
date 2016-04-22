/*
** my_strdup.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Fri Apr 22 03:01:52 2016 boris saint-bonnet
** Last update Fri Apr 22 03:02:04 2016 boris saint-bonnet
*/

# include "lemin.h"

char    *my_strdup(char *src)
{
  char  *string;
  int   i;

  if ((string = malloc(sizeof(char) * (my_strlen(src) + 1))) == NULL)
    return NULL;
  i = 0;
  while (src && src[i])
    {
      string[i] = src[i];
      i++;
    }
  string[i] = '\0';
  return (string);
}
