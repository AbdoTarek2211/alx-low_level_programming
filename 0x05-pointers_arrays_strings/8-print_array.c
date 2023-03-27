#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array elements
 * @a : array to be printed
 * @n : number of elements
 *
 * Return: 0 or 1
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < (n - 1); x++)
{
printf("%d, ", a[x]);
}
if (x == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
