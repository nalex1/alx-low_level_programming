#include "lists.h"

/**
 * *reverse_listint - reverses a list
 * @head: pointer to the list
 * Return: head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *currentNode = *head;

	while (currentNode != NULL)
	{
		*head = (*head)->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = *head;
	}

	*head = prevNode;

	return (*head);
}
