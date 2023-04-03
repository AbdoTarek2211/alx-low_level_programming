#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int x;
int temp = 0;
int temp2 = 0;
for (x = 0; x < size; x++)
{
temp += a[(size * x) + x];
temp2 += a[(size * (x + 1) - (x + 1)];
}
}
