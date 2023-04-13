#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n : size of characters
 * Return: always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y;
char *temp;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] != '\0'; x++)
{
}
for (y = 0; s2[y] != '\0'; y++)
{
}
if (n > y)
n = y;
newString = malloc(((x + n) + 1));
if (temp == NULL)
return (NULL);
for (x = 0; s1[x] != '\0'; x++)
temp[x] = s1[x];
for (y = 0; y != n; y++, x++)
temp[a] = s2[y];
temp[x] = '\0';
return (temp);
}
