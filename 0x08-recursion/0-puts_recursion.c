#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s : string to be printed
 *
 * Return: a string
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    return;
  _putchar(*s);
  s++;
  if (*s != '\0')
    _puts_recursion (*s);
}
