#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node in a list
 * @head: pointer to the list
 * @index: index to indicate a node to delete
 * Return: 1 on success or 0 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *found;
	listint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		found = *head;
		*head = (*head)->next;
		free(found);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index - 1)
		{
			found = temp->next;
			if (found == NULL)
				return (-1);
			temp->next = (temp->next)->next;
			free(found);
			return (1);
		}
		count++;
		temp = temp->next;
	}

	return (-1);
}
