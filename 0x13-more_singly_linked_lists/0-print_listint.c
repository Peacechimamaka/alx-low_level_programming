#include "lists.h"

/**
 *print_listint - function name
 *
 *@h : the head
 *Return: the number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
			h = h->next;
			nodenum++;
	}
	return (nodenum);
}
