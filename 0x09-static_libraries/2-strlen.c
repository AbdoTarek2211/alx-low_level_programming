#include "main.h"
/**
 * _strlen - returns lenght of a string
 * @s : string to be iterated through
 *
 * Return: 0 or 1
 */
int _strlen(char *s)
{
int i = 0;
while (*s != 0)
{
i++;
s++;
}
return (i);
}
