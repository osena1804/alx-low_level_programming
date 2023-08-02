#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = (NULL);

	if (*head == NULL)
	{
		return;
	}
	else
	{
		*head = (*head)->next;
		*head = temp;
		free(*head);
	}
	*head = (NULL);
}
