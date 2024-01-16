#include "lists.h"

/**
 * dlistint_len - a function that prints the number of elements
 *
 * @h: the head
 *
 * Return: returns the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
