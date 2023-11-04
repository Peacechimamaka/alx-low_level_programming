#include "main.h"
/**
* _realloc - function that reallocates
* @ptr: a pointer parameter
* @old_size: parameter
* @new_size: parqmeter
* Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *sec_ptr;
char *pt = (char *)ptr;
char *npt;

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
sec_ptr = malloc(new_size);
if (sec_ptr == NULL)
{
free(ptr);
return (NULL);
}
if (new_size < old_size)
{
old_size = new_size;
}
for (unsigned int i = 0; i < old_size; i++)
{
npt[i] = pt[i];
}
}
free(ptr);
return (sec_ptr);
}

