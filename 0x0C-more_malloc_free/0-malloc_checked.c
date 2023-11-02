#include "main.h"
/**
 *malloc_checked - main function
 *@b: paraneter
 *
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
	exit(98);
	else
	return (result);
	}
