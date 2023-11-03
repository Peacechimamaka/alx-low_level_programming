#include "main.h"
/**
 *_calloc - function name
 *@nmemb: parameter
 *@size: parameter
 *
 *Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == 0)
	return (NULL);
	else
return (ptr);
}
