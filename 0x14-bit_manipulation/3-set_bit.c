#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 0 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = 1;
if (index > 64)
return (-1);
while (index > 0)
{
index--;
x *= 2;
}
*n += x;
return (1);
}
