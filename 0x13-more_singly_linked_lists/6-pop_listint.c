#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* pop_listint - deletes the head node from a linked list
*
* @head: pointer to the first element in the linked list
*
*Return: returns the head node’s data (n)
*and return (0) if the linked list is empty
*/

int pop_listint(listint_t **head)
{
if (head == NULL || *head == NULL)
{
	return (0);
}
else
{
	int num = (*head)->n;
	lisint_t *temp = (*head)->next;

	free(*head);
	*head = temp;
}
return (num);
}
