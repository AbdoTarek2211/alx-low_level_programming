#include "main.h"
/**
 * reverse_array - reverses an array
 * @a : array
 * @n : number of elements
 *
 * Return: 0 or 1
 */
void reverse_array(int *a, int n)
{
int temp = n - 1;
int x;
int y;
int z;
if (n % 2 == 0)
z = n / 2;
else
z = (n / 2) + 1;
for (x = 0; x <= z; x++)
{
y = a[x];
a[x] = a[temp];
a[temp--] = y;
}
}
