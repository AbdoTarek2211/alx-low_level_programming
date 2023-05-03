#include "main.h"
/**
 * _sqrt_recursion - returns the square root
 * @n : number to be powered
 * Return: 0 or 1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sq_recu(n, 0));
}
/**
 * sq_rec - find natural number
 * @n: number to calculate the sqaure root
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sq_recu(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sq_rec(n, i + 1));
}
