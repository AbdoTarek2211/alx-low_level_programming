#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack : string to find in
 * @needle : character to be found
 *
 * Return: a string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
if (&haystack[i] == *needle)
return (needle);
}
return (0);
}
