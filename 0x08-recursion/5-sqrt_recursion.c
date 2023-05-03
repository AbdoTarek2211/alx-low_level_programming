#include "main.h"
/**
 * actual_sqrt_recursion - find natural number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: -1 or 1
 */

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - returns the square root
 * @n : number to be powered
 * Return: 0 or 1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
