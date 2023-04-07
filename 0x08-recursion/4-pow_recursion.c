#include "main.h"
/**
 * _pow_recursion - returns the factorial of a given number.
 * @x : number to be powered
 * @y : number to be power of
 * Return: a string
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, (y - 1)));
}
