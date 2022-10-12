#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a function that returns a structure value.
 * @name: the dog's name
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
