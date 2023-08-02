#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index -  returns the nth node of a linked list.
 *
 *@head: first node in the list
 *@index: index of the node to return starting at (0)
 *
 *Return: return NULL if the node does not exist.
 *return NULL if temp is NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;

	unsigned int i;
	i = 0;
	
       	temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp)
	{
		return (temp);
	}
	/*return NULL if temp is NULL*/
	else if (temp == NULL)
		return (NULL);	
}
