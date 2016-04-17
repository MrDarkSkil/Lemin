/*
** epurstr.c for  in /home/xx/Rendu/CPE/Lemin
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 17:10:26 2016 boris saint-bonnet
** Last update Sun Apr 17 17:11:26 2016 boris saint-bonnet
*/

# include "lemin.h"

char	*epur_str(char *line)
{
  char	*str;
  char	*str2;
  int	i;
  int	j;

  str = line;
  while (*str == ' ' && *str != 0)
    str++;
  if (*str == '\0')
    return (NULL);
  str2 = xmalloc(sizeof(char) * my_strlen(str) + 1);
  i = 0;
  j = 0;
  while (str[i + 1] != '\0')
    {
      if (str[i] != ' ')
	str2[j++] = str[i];
      else if (str[i] == ' ' && str[i + 1] != ' ')
	str2[j++] = str[i];
      i++;
    }
  if (str[i] != ' ')
    str2[j++] = str[i];
  str2[j] = 0;
  return (str2);
}

char	**create_tab_and_epur(char *line, char c)
{
  char	**tab;
  char	*str;

  if ((str = epur_str(line)) == NULL)
    return (NULL);
  if ((tab = my_str_to_wordtab(str, c)) == NULL)
    return (NULL);
  free(str);
  return (tab);
}
