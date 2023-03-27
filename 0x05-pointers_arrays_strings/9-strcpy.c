#include "main.h"
/**
 * puts2 - prints a string
 * @str : string to be printed
 *
 * Return: 0 or 1
 */
char *_strcpy(char *dest, char *src)
{
int x = 0;
int tempo;
while (*(src + x) != '\0')
{
x++;
}
for (tempo = 0; tempo < x; tempo++)
{
dest[tempo] = src[tempo];
}
dest[x] = '\0';
return (dest);
}
