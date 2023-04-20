#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be passed
 * @size: size of array
 * @cmp: function passed
 *
 * Return: 0 or 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (size <= 0)
return (-1);
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
for (x = 0; x < size; x++)
{
if (cmp(array[x] >= 0)
return (x);
}
return (-1);
}
