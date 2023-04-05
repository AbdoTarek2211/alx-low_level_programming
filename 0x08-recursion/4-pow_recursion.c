#include "main.h"
/**
 * _pow_recursion - returns the factorial of a given number.
 * @n : number to be factorial
 *
 * Return: a string
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x , (y - 1)));
}
