#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @head: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *head)
{
	size_t node = 0;

	while (head)
	{
		if (head->str != NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		node++;
	}

	return (node);
}

