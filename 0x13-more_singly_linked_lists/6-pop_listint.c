#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first element of a list
 * @head: pointer of the list
 * Return: first node data
 */

int pop_listint(listint_t **head)
{
	int c;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	c = temp->n;
	*head = temp->next;
	free(temp);

	return (c);
}
