#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t lists
 *
 * @h : traverse linked lists of type listint_t
 *
 * Return: returns number of nodes in the linked lists
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	do {
	num++;
	h = h->next;
	} while (h);
	{
	return (num);
	}
}
