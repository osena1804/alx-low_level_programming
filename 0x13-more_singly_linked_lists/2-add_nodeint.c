#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stddef.h"
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head : pointer to the first node
 *
 * @n : data to insert in the new node
 *
 *Return: return address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
