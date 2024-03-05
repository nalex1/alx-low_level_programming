#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - insrts a node in list
 * @head: pointer to the list
 * @idx: index to insert to
 * @n: element data
 * Return: address to that node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp = *head;
	unsigned int count;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
