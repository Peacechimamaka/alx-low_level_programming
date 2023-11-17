#include "lists.h"
/**
 *list_len - returns the number of element in the list
 *
 *@h: the head pointer
 *Return: returns the number of element
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
	count++;
	}
return (count);
}
