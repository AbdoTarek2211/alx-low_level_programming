#include "main.h"
/**
 * is_prime_number - returns the prime
 * @n : number to be powered
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
if (prime <= 1)
return (0);
if (prime == 2)
return (1);
if ((prime % 2 == 0) || (prime % 3 == 0) || (prime % 5 == 0))
return (0);
else if (prime % 9 == 0 || prime % 7 == 0)
return (0);
else
return (1);
}
