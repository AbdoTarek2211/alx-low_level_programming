#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix
 * @a: array
 * @size : size of array
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int ascedent, descendet, i, sumAscedent, sumDescedent;
sumAscedent = sumDescedent = 0;
ascedent = 0;
descendet = size - 1;
for (i = 0; i < size; i++)
{
sumAscedent += *(a + i * size + ascedent);
sumDescedent += *(a + i * size + descendet);
ascedent += 1;
descendet -= 1;
}
printf("%d, %d\n", sumAscedent, sumDescedent);
}
