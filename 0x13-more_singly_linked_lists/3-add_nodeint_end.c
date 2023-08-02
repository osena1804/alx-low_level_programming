#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a linked list
*
* @head: pointer to the first element
*
* @n: data to insert in the new element
*
* Return: returns address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));

if (!new)
{
	return (NULL);
}
else
{
	new->n = n;
	new->next = NULL;

if (*head == NULL)
{
	*head = new;
	return (new);
}
else
{
while (temp->next)
{
	temp = (temp->next);
}
temp->next = new;
return (new);
	}
}
}

