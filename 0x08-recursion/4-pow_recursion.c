#include "main.h"

/**
  * _pow_recursion - the main function
  * @x: first parameter
  * @y: second parameter
  * Return: value of a number input to the function
  */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, (y - 1)));
return (0);
}
