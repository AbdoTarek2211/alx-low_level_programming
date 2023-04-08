#include "main.h"
/**
 * _strncpy - copies a string into another string
 * @src : string to be copied
 * @dest : string to be placed at
 * @n : number of characters
 *
 * Return: 0 or 1
 */
char *_strncpy(char *dest, char *src, int n)
{
int x = 0;
int y;
while (dest[x] != '\0')
{
x++;
}
for (y = 0; y < n && src[y] != '\0'; ++y, ++x)
{
dest[y] = src[y];
}
while (y < n)
{
dest[y] = '\0';
y++;
}
return (dest);
}
