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
int x;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == c)
return (&s[x]);
}
return (NULL);
}
