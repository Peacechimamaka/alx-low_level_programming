#include "lists.h"
/**
 *sum_listint - a function that sums up the element of the nodes
 *
 *@head: a pointer to tye first node
 *
 *Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int data;

	while (head != NULL)
	{
		data = head->n;
		sum = sum + data;
		head = head->next;
		sum++;
		printf ("%d", sum);;
	}
	return (0);
}
