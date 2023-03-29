#include "main.h"
/**
 * _strcpy - copies a string into another string
 * @src : string to be copied
 * @dest : string to be placed at
 *
 * Return: 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 != '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
