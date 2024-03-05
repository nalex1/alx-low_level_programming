#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints elements of a linked lisk
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp = h;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
