#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index - returns a node
 * @head: pointer to the list
 * @index: index of the node to return
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}

	return (NULL);
}
