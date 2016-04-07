/*
** parsing.c for parsing in /home/gambin_l/rendu/Lemin
**
** Made by Lucas Gambini
** Login   <gambin_l@epitech.net>
**
** Started on  Fri Apr  8 01:03:12 2016 Lucas Gambini
** Last update Fri Apr  8 01:05:26 2016 Lucas Gambini
*/

void	remove_comment(char *buff)
{
  int	i;

  i = 1;
  while (buff[++i])
    if (buff[i] == '#')
      buff[i] = 0;
}
