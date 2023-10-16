#include "main.h"

/**
 * _strlen - the function returns the length of a string
 * @s: the length of the string
 * Return: peace, on success
 */

int _strlen(char *s)
{
int x;
int peace = 0;

for (x = 0; s[x] != '\0'; x++)
	peace++;
return (peace);
}
