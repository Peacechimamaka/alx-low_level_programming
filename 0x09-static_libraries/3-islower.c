#include "main.h"

/**
 * _islower - the function if c is a lowercase letter
 *@c: The character for check
 * Return: return 1, if c is a lowercase latter
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

