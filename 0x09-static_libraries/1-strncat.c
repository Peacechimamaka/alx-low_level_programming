#include "main.h"

/**
 * _strncat - the fumction that concatenates two strings
 * @n: 1st parameter
 * @src: 2nd parameter
 * @dest: 3rd parameter
 * Return: dest, om success
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
