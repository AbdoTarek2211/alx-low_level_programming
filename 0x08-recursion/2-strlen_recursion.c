#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s : string to be printed
 *
 * Return: a string
 */
int _strlen_recursion(char *s)
{
int x = 0;
if (*s != '\0')
{
_strlen_recursion(s + 1);
x++;
}
return x;
}
