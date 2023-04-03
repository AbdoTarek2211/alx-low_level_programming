#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int x;
unsigned int temp = 0;
unsigned int temp2 = 0;
for (x = 0; x < size; x++)
{
temp += a[(size * x) + x];
temp2 += a[(size * (x + 1) - (x + 1))];
}
printf("%d, %d\n", sum1, sum2);
}
