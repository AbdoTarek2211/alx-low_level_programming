#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s : string to be printed
 *
 * Return: a string
 */
void _print_rev_recursion(char *s)
{
while (*s != '\0')
{
s++;
}
if (*s != '\0')
{
_putchar(*s);
_print_rev_recursion(s - 1);
}
if (*s == '\0')
_putchar('\n');
}
