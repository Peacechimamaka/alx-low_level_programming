#include "lists.h"

/**
 *free_listint2 - a function that frees head
 *@head: the head pointer
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
