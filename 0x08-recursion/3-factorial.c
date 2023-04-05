#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s : string to be printed
 *
 * Return: a string
 */
int factorial(int n)
{
int x = 0;
if (n < 0)
return (-1);
if (n == 0)
return (1);
if (n > 0)
return (n * factorial(n - 1));
}
