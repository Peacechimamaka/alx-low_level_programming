#include "function_pointers.h"

/**
 *print_name - function name
 *@name: the parameter
 *@f: the function pointer
 *Return:
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
