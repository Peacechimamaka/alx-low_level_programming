#include "lists.h"

/**
 *pop_listint - a function that delets the head
 *
 *@head: the head pointer
 *
 *Return: the data of the head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (data);
}
