#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest : string to append to
 * @src : string to be added
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
int x;
int y;
for (x = 0; dest[x] != '\0'; ++x);

for (y = 0; src[y] != '\0'; ++y, ++x)
{
dest[x] = src[y];
}
dest[x] = '\0';
return (dest);
}
