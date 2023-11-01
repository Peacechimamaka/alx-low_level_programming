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
char *ptArr;
unsigned int length;

ptArr = malloc(size * sizeof(char));
for (length = 0; length < size; length++)
{
ptArr[length] = c;
}
return (ptArr);
}

