#include <stdlib.h>
#include "main.h"
/**
*create_array - the function name
*@size: the size of the array
*@c: the character
*Return: 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptArr;

if (size == 0)
{
return (NULL);
}
ptArr = malloc(size * sizeof(char));

if (ptArr == NULL)
{
return (NULL);
}
for ( i = 0; i < size; i++)
{
ptArr[i] = c;
}
return (ptArr);
}
