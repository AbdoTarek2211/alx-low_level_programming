#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints a string
 * @str : string to be printed
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
printf ("%d", a[n-1]);
}
printf("\n");
}
