#include "lists.h"

/**
 *free_listint - a function that frees a list
 *
 *@head: the head pointer
 *
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
