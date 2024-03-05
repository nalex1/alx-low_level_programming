#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *add_nodeint - adds element to list start
 * @head: head pointer
 * @n: new element to add
 * Return: address of the element or null at failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
