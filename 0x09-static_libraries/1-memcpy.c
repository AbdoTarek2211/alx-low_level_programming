#include "main.h"
/**
 * _memcpy - function copies the first n bytes of the memory area
 * @dest : string to be filled
 * @src : string to fill with
 * @n : number of times to fill
 *
 * Return: a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int x;
for (x = 0; n > 0; x++)
{
dest[x] = src[x];
n--;
}
return (dest);
}
