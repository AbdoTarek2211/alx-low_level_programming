#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 0 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int x;
unsigned long int i = 1;
if (index > 64)
return (-1);
x = index;
while (x > 0)
{
i *= 2;
x--;
}
if ((*n >> index) & 1)
*n -= i;
return (1);
}
