#include "main.h"
/**
 * print_rev - reverse a string
 * @s: string to be reversed
 *
 * Return: 0 or 1
 */
void print_rev(char *s)
{
while (*s != '\0')
{
s++;
}
s--;
while (*s != '\0')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
