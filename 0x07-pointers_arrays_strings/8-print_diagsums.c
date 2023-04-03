#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int x;
int y;
int temp = 0;
int temp2 = 0;
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
if (x == y)
{
temp += a[x][y];
}
}
}
_putchar(temp);
int z = size - 1;
for (x = 0; x < size; x++)
{
for (; z >= 0; z--)
{
temp2 += a[x][z];
}
}
_putchar(',');
_putchar(' ');
_putchar(temp2);
}
