#include "main.h"

/**
 * _strcpy - the function that prints
 * @dest: ist arg
 * @src: 2nd arg
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
