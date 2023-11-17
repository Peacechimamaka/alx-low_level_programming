#include "lists.h"
#include <stdio.h>

/**
 *print_list - a function that prints a list
 *@h : the head pointer
 *
 *Return: the length of the node
 */
size_t print_list(const list_t *h)
{
	size_t node_num;

	node_num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
