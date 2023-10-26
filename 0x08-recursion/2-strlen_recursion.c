#include "main.h"
/**
 * _strlen_recursion - function name
 * @s: parameter
 * Return: count
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
