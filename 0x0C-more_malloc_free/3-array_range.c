#include "main.h"
/**
* array_range - function namr
* @min: parameter
* @max: parameter
* Return: a pointer
*/

int *array_range(int min, int max)
{
int *ptr;
int index;
int size;

if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (index = 0; index < size; index++)
{
ptr[index] = min + index;
}
return (ptr);
}

