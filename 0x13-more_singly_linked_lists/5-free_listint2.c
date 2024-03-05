#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a singly linked list
 * @head: head pointer to the list
 * Return: null
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
