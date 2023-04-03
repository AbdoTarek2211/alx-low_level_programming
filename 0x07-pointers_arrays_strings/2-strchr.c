#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of a character
 * @s : string to find in
 * @c : character to be found
 *
 * Return: a string
 */
char *_strchr(char *s, char c)
{
for (; ; s++)
{
if (*s == c)
return (s);
if (*s == 0)
return (0);
}
return (0);
}
