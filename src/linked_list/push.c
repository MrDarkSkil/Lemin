/*
** push.c for  in /home/xx/Rendu/CPE/Lemin/src/linked_list
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Sun Apr 17 20:43:25 2016 boris saint-bonnet
** Last update Sun Apr 17 22:46:27 2016 boris saint-bonnet
*/

# include "lemin.h"

t_list  *push(t_list *list, t_node *tmp)
{
  t_node        *node;
  
  node = xalloc(sizeof(t_node));
  if (list != NULL)
    {
      if (node != NULL)
	{
	  node->id = my_strdup(tmp->id);
	  node->posx = tmp->posx;
	  node->posy = tmp->posy;
	  node->ant = 0;
	  node->link_lenght = 0;
	  node->next = NULL;
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
  node = init_link(node);
  return (list);
}

t_list	*add_link(t_list *list, t_node *node, char *id)
{
  t_node	*tmp;
  
  if (node->nxt->link == NULL)
    {
      node->nxt->link = find_link(list, id);
      return (list);
    }
  else
    {
      tmp = node->nxt->link;
      while (tmp != NULL)
	tmp = tmp->next_link;
      tmp->next_link = find_link(list, id);
    }
  return (list);
}
  
