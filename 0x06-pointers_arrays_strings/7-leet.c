#include "main.h"
/**
 * _strcpy - copies a string into another string
 * @src : string to be copied
 * @dest : string to be placed at
 *
 * Return: 0 or 1
 */
char *leet(char *s)
{
int i;
int j;
char *x = "aAeEoOtTlL";
char *y = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == x[j])
s[i] = y[j];
}
}
return (s);
}
