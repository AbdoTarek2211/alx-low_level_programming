#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest : string to append to
 * @src : string to be added
 *
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
int x;
for (x = 0; n > 0; x++)
{
s[x] = b;
n--;
}
return (s);
}
