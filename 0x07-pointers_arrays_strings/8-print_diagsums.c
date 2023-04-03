#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix
 * @a: array
 * @size : size of array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int x;
unsigned int temp, temp2
temp = 0;
temp2 = 0;
for (x = 0; x < size; x++)
{
temp += a[(size * x) + x];
temp2 += a[(size * (x + 1) - (x + 1))];
}
_putchar(temp);
_putchar(',');
_putchar(' ');
_putchar(temp2);
}
