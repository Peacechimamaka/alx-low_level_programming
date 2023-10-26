#include "main.h"
/**
 * _strlen_recursion - function name
 * @s: parameter
 * Return: count
 */

int _strlen_recursion(char *s);
{
	int count = 0;

	if (*s)
	{
		count++;
		strlen_recursion(s + 1);
		count += strlen_recursion(s + 1);
	}
	return (count);
}
