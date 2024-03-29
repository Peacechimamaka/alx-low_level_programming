#include "lists.h"

/**
 * listint_len - function name
 *
 *@h : pointer to the first element
 *
 * Return: number of elemebts
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
