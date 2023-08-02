#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: list to be freeed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head == NULL)
	{
		temp = head->next;
		free(head);
		*temp = head;
	}
}
