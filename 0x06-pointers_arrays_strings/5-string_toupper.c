#include "main.h"
/**
 * _strcpy - copies a string into another string
 * @src : string to be copied
 * @dest : string to be placed at
 *
 * Return: 0 or 1
 */
char *string_toupper(char *s)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] >= 'a' && s[x] <= 'z')
{
s[x] = s[x] - 32;
}
}
return (s);
}
