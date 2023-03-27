#include "main.h"
/**
 * puts2 - prints a string
 * @str : string to be printed
 *
 * Return: 0 or 1
 */
void print_array(int *a, int n)
{
int x;
for (x = 0; x < n; x++)
{
_putchar(*a);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
