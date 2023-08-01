#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list.
 *@h : the linked list to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
	{
		return (num);
	}
	do {
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	while (h != NULL);
	{
	return (num);
	}
}
