/*
** my_wordtab.c for  in /home/xx/Rendu/CPE/Lemin/src
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 16:34:47 2016 boris saint-bonnet
** Last update Sat Apr 23 00:52:34 2016 boris saint-bonnet
*/

# include "lemin.h"

int             line_counter(char *str)
{
  int           i;
  int           count;

  i = -1;
  count = 1;
  while (str[++i])
    if (str[i] == ' ')
      count++;
  return (count);
}

int             line_counters(char *str)
{
  int           i;
  int           count;

  i = -1;
  count = 1;
  while (str[++i])
    if (str[i] == '\n')
      count++;
  return (count);
}

char            **my_wordtab(char *str, int i, int j)
{
  int           k;
  char          **tab;

  tab = xmalloc(sizeof(char *) * (line_counter(str) + 1));
  i = 0;
  j = 0;
  while (i < line_counter(str))
    {
      if ((tab[i] = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      k = 0;
      while (str[j] && str[j] != ' ')
	{
	  tab[i][k] = str[j];
	  tab[i][k++ + 1] = 0;
	  if ((tab[i] = my_realloc(tab[i], sizeof(char) *
				   (my_strlen(tab[i]) + 2))) == NULL)
	    return (NULL);
	  j++;
	}
      tab[i++][k] = 0;
      j++;
    }
  tab[i] = 0;
  return (tab);
}

char            **my_linetab(char *str, int i, int j)
{
  int           k;
  char          **tab;

  tab = xmalloc(sizeof(char *) * (line_counters(str) + 1));
  i = 0;
  j = 0;
  while (i < line_counters(str))
    {
      if ((tab[i] = malloc(sizeof(char) * 2)) == NULL)
	return (NULL);
      k = 0;
      while (str[j] && str[j] != '\n')
	{
	  tab[i][k] = str[j];
	  tab[i][k++ + 1] = 0;
	  if ((tab[i] = my_realloc(tab[i], sizeof(char) *
				   (my_strlen(tab[i]) + 2))) == NULL)
	    return (NULL);
	  j++;
	}
      tab[i++][k] = 0;
      j++;
    }
  tab[i] = 0;
  return (tab);
}
