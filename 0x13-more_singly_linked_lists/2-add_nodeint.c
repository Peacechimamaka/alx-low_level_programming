#include "lists.h"

/**
 *add_nodeint - function name
 *@head: a pointer to a pointer
 *@n: an integer
 *Return: the address of the newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
