#include "main.h"
/**
 * _memcpy - function copies the first n bytes of the memory area
 * @dest : string to be filled
 * @src : string to fill with
 * @n : number of times to fill
 *
 * Return: a string
 */
char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == c)
{
return (&s[x]);
}
}
return ('\0');
}
