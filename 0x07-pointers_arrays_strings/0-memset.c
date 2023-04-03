#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area
 * @s : string to be filled
 * @b : string to fill with
 * @n : number of times to fill
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
