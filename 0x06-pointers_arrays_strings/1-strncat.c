#include "main.h"
/**
 * _strncat - concatenates two strings
 * @src : string to be copied
 * @dest : string to be placed at
 * @n : number of words to be concatenated
 *
 * Return: 0 or 1
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;
for (x = 0; dest[x] != '\0'; ++x);
for (y = 0; y < n && src[y] != '\0'; ++y, ++x)
{
dest[x] = src[y];
}
dest[x] = '\0';
return (dest);
}
