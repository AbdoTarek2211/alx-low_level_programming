#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area
 * @s : string to be filled
 * @b : string to fill with
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
