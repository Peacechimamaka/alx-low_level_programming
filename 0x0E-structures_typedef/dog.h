#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that returns a structure value.
 * struct: used to creat a structure function in c
 * Return: 0
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
int main()
{
	dog_t mydog = {"Elias", 3, "Betty"};

	printf ("my dog's name is %s.\n", mydog.name);
	printf ("my dog's age is %f,\n", mydog.age);
	printf ("my dog owner is %s,\n", mydog.owner);
	return 0;
}
