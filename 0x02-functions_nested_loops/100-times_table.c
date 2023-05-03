#include "main.h"
/**
 * print_times_table - This is a absolute value
 *
 * @n: This is the entry
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int x, y, z;
for (y = 0; y <= n; y++)
{
for (x = 0; x <= n; x++)
{
z = x * y;
if (y == 0)
_putchar(z + '0');
else if (z <= 9)
{
_putchar(32);
_putchar(32);
_putchar(z + '0');
}
else if (z >= 10 && z <= 99)
{
_putchar(32);
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
else
{
_putchar((z / 100) + '0');
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
if (y != n)
{
_putchar(',');
_putchar(32);
}
}
_putchar('\n');
}
}
}
