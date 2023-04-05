#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
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
