/*
** my_strncmp.c for my_strncmp in /home/hubert_1/rendu/Piscine_C_J06/ex_07
** 
** Made by leo hubert
** Login   <hubert_1@epitech.net>
** 
** Started on  Tue Oct  6 15:19:59 2015 leo hubert
** Last update Sat Apr 23 00:38:20 2016 boris saint-bonnet
*/

int	my_strncmp(char *s1, char *s2, int nb)
{
  int   i;

  i = 0;
  while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < nb)
    i++;
  return (s1[i] - s2[i]);
}
