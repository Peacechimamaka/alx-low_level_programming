#include "main.h"

/**
 * _strlen - returns the string length
 *@s: params
 *Return: returns legnth as integer;
 */

int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
return (count);
}

