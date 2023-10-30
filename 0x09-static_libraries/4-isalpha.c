#include "main.h"

/**
 * _isalpha - function that checks if c is an alphabet
 *@c: the character to be evaluated
 * Return: return 1, if c is a letter else return o
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
