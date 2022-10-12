#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initalizes a variable of type struct dog
 *@d: the dog to be initialized
 *@age: the age of the dog
 *@owner: the owner of the dog
 *@name: the name of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
}
