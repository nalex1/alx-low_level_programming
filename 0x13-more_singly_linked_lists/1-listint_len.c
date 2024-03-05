#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: head pointer
 * Return: size of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
