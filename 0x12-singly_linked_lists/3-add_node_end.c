#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - funcion tyat adds a new node
 *@head: a pointer to thefirst node
 *@str: the stromg
 *Return: the address of the newnode
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;

	size_t count, x;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	for (x = 0; str[x] != '\0'; x++)
		count++;
			newnode->len = count;
	return (*head);
}


