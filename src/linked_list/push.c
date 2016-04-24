/*
** push.c for  in /home/xx/Rendu/CPE/Lemin/src/linked_list
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Sun Apr 17 20:43:25 2016 boris saint-bonnet
** Last update Sun Apr 24 17:32:01 2016 boris saint-bonnet
*/

# include "lemin.h"

t_node		*init_push(t_node *node, t_node tmp)
{
  node->id = my_strdup(tmp.id);
  node->posx = tmp.posx;
  node->posy = tmp.posy;
  node->ant = 0;
  node->id_ant = 0;
  node->link_lenght = 0;
  node->visited = 0;
  node->next = NULL;
  node->nxt = NULL;
  return (node);
}

t_graph		*push(t_graph *list, t_node tmp)
{
  t_node        *node;

  node = xmalloc(sizeof(*node));
  node->nxt = xmalloc(sizeof(t_link));
  if (list != NULL)
    {
      if (node != NULL)
	{
	  node = init_push(node, tmp);
	  if (list->tail == NULL)
	    {
	      node->prev = NULL;
	      list->head = node;
	      list->tail = node;
	    }
	  else
	    {
	      list->tail->next = node;
	      node->prev = list->tail;
	      list->tail = node;
	    }
	}
    }
  return (list);
}

t_path		*put_in_path(t_path *list, t_node *node)
{
  t_elem		*new;

  new = xmalloc(sizeof(*new));
  new->id = my_strdup(node->id);
  new->cell = node;
  new->prev = NULL;
  new->next = NULL;
  if (list != NULL)
    {
      if (list->head == NULL)
	{
	  list->head = new;
	  list->tail = new;
	}
      else
	{
	  list->tail->next = new;
	  new->prev = list->tail;
	  list->tail = new;
	}
    }
  return (list);
}

t_graph		*add_link(t_graph *list, t_node *node, char *id, int *flag)
{
  t_link	*new_link;
  t_link	*tmp;

  new_link = xmalloc(sizeof(struct s_link));
  if ((new_link->link = find_link(list, id)) == NULL)
    {
      *flag = -1;
      return (list);
    }
  new_link->next_link = NULL;
  if (node->nxt == NULL)
    {
      node->nxt = new_link;
      return (list);
    }
  else
    {
      tmp = node->nxt;
      while (tmp->next_link != NULL)
	tmp = tmp->next_link;
      tmp->next_link = new_link;
    }
  return (list);
}
