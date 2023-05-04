#include "main.h"
#include <stdio.h>
/**
 * get_bit - find value of a bit at a given index.
 * @n: number to find at
 * @index: index
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i;
if (index > 64)
return (-1);
i = n >> index;
return (i & 1);
}
