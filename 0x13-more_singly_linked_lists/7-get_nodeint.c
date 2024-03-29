#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns a node at a spexific index
 *@head: a pointer
 *@index: the given index
 *
 *Return: a pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
